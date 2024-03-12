#include <QtNetwork>
#include <QSqlQuery>
#include <QSqlError>
#include "client.h"
#include "connection.h"
#include "peermanager.h"

Client::Client()
{
    peerManager = new PeerManager(this);
    peerManager->setServerPort(server.serverPort());
    peerManager->startBroadcasting();

    connect(peerManager, &PeerManager::newConnection,
            this, &Client::newConnection);
    connect(&server, &Server::newConnection,
            this, &Client::newConnection);

    connect(this, &Client::userLoginFetched, this, &Client::onUserLoginFetched);
    fetchUserLoginFromDatabase();
}

void Client::sendMessage(const QString &message)
{
    if (message.isEmpty())
        return;

    for (Connection *connection : qAsConst(peers))
        connection->sendMessage(message);
}

void Client::fetchUserLoginFromDatabase()
{

    QTimer::singleShot(3000, this, [this]() {
        QString fetchedLogin = retrieveUserLoginFromDatabase();
        emit userLoginFetched(fetchedLogin);
    });
}

QString Client::retrieveUserLoginFromDatabase()
{
    QString userLogin;
    QSqlDatabase db = QSqlDatabase::database();

    if (db.isValid() && db.isOpen()) {
        QSqlQuery query("SELECT login FROM users LIMIT 1", db);

        if (query.exec() && query.next()) {
            userLogin = query.value(0).toString();
        } else {
            qDebug() << "Błąd przy pobieraniu loginu z bazy danych: " << query.lastError().text();
        }
    } else {
        qDebug() << "Błąd: Nieprawidłowe połączenie z bazą danych!";
    }

    return userLogin;
}

void Client::onUserLoginFetched(const QString &fetchedLogin)
{
    setUserLogin(fetchedLogin);
    emit userLoginChanged(fetchedLogin);
}

QString Client::nickName() const
{
    return userLogin;
}
void Client::setUserLogin(const QString &login)
{
    userLogin = login;
}

bool Client::hasConnection(const QHostAddress &senderIp, int senderPort) const
{
    if (senderPort == -1)
        return peers.contains(senderIp);

    if (!peers.contains(senderIp))
        return false;

    const QList<Connection *> connections = peers.values(senderIp);
    for (const Connection *connection : connections) {
        if (connection->peerPort() == senderPort)
            return true;
    }

    return false;
}

void Client::newConnection(Connection *connection)
{
    connection->setGreetingMessage(userLogin);
    connect(connection, &Connection::errorOccurred, this, &Client::connectionError);
    connect(connection, &Connection::disconnected, this, &Client::disconnected);
    connect(connection, &Connection::readyForUse, this, &Client::readyForUse);
}

void Client::readyForUse()
{
    Connection *connection = qobject_cast<Connection *>(sender());
    if (!connection || hasConnection(connection->peerAddress(),
                                     connection->peerPort()))
        return;

    connect(connection,  &Connection::newMessage,
            this, &Client::newMessage);

    peers.insert(connection->peerAddress(), connection);
    QString nick = connection->name();
    if (!nick.isEmpty())
        emit newParticipant(nick);
}

void Client::disconnected()
{
    if (Connection *connection = qobject_cast<Connection *>(sender()))
        removeConnection(connection);
}

void Client::connectionError(QAbstractSocket::SocketError)
{
    if (Connection *connection = qobject_cast<Connection *>(sender()))
        removeConnection(connection);
}

void Client::removeConnection(Connection *connection)
{
    if (peers.contains(connection->peerAddress())) {
        peers.remove(connection->peerAddress());
        QString nick = connection->name();
        if (!nick.isEmpty())
            emit participantLeft(nick);
    }
    connection->deleteLater();
}
