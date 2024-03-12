#ifndef CLIENT_H
#define CLIENT_H

#include <QAbstractSocket>
#include <QHash>
#include <QHostAddress>
#include <QTimer>
#include "server.h"

class PeerManager;
class Client : public QObject
{
    Q_OBJECT

public:
    Client();
    void sendMessage(const QString &message);
    void setUserLogin(const QString &login);
    QString nickName() const;
    bool hasConnection(const QHostAddress &senderIp, int senderPort = -1) const;

signals:
    void newMessage(const QString &from, const QString &message);
    void newParticipant(const QString &nick);
    void participantLeft(const QString &nick);
    void userLoginFetched(const QString &fetchedLogin);
    void userLoginChanged(const QString &newLogin);

private slots:
    void newConnection(Connection *connection);
    void connectionError(QAbstractSocket::SocketError socketError);
    void disconnected();
    void readyForUse();
    void fetchUserLoginFromDatabase();
    void onUserLoginFetched(const QString &fetchedLogin);

private:
    void removeConnection(Connection *connection);
    QString retrieveUserLoginFromDatabase();
    QString userLogin;
    PeerManager *peerManager;
    Server server;
    QMultiHash<QHostAddress, Connection *> peers;
};

#endif
