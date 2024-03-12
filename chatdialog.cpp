#include <QtWidgets>
#include "chatdialog.h"

ChatDialog::ChatDialog(const QString &username, QWidget *parent)
    : QDialog(parent)
{
    setupUi(this);
    lineEdit->setFocusPolicy(Qt::StrongFocus);
    textEdit->setFocusPolicy(Qt::NoFocus);
    textEdit->setReadOnly(true);
    listWidget->setFocusPolicy(Qt::NoFocus);

    connect(lineEdit, &QLineEdit::returnPressed,
            this, &ChatDialog::returnPressed);
    connect(&client, &Client::newMessage,
            this, &ChatDialog::appendMessage);
    connect(&client, &Client::newParticipant,
            this, &ChatDialog::newParticipant);
    connect(&client, &Client::participantLeft,
            this, &ChatDialog::participantLeft);

    client.setUserLogin(username);
    setUserName(client.nickName());
    tableFormat.setBorder(0);
}

void ChatDialog::appendMessage(const QString &from, const QString &message)
{
    if (from.isEmpty() || message.isEmpty())
        return;

    QString messageId = from + "|" + message;

    if (displayedMessages.contains(messageId))
        return;

    QString timestamp = QDateTime::currentDateTime().toString("dd.MM.yyyy hh:mm:ss");
    QTextCursor cursor(textEdit->textCursor());
    cursor.movePosition(QTextCursor::End);
    QTextTable *table = cursor.insertTable(1, 3, tableFormat);
    table->cellAt(0, 0).firstCursorPosition().insertText('[' + timestamp.trimmed() + ']');
    table->cellAt(0, 1).firstCursorPosition().insertText(from + ':');
    table->cellAt(0, 2).firstCursorPosition().insertText(message);
    QScrollBar *bar = textEdit->verticalScrollBar();
    bar->setValue(bar->maximum());
    displayedMessages.insert(messageId);
}

void ChatDialog::returnPressed()
{
    QString text = lineEdit->text();
    if (text.isEmpty())
        return;

    if (text.startsWith(QChar('/'))) {
        QColor color = textEdit->textColor();
        textEdit->setTextColor(Qt::red);
        textEdit->append(tr("Nieprawidłowa komenda: %1")
                             .arg(text.left(text.indexOf(' '))));
        textEdit->setTextColor(color);
    } else {
        client.sendMessage(text);
        appendMessage(myNickName, text);
    }

    lineEdit->clear();
}

void ChatDialog::newParticipant(const QString &nick)
{
    if (nick.isEmpty())
        return;

    QString participantMessageId = nick;

    if (displayedMessages.contains(participantMessageId))
        return;

    QColor color = textEdit->textColor();
    textEdit->setTextColor(Qt::gray);
    textEdit->append(tr("* %1 dołączył do czatu").arg(nick));
    textEdit->setTextColor(color);
    listWidget->addItem(nick);
    displayedMessages.insert(participantMessageId);
}

void ChatDialog::participantLeft(const QString &nick)
{
    if (nick.isEmpty())
        return;

    QString leftMessageId =nick;

    if (displayedMessages.contains(leftMessageId))
        return;

    QList<QListWidgetItem *> items = listWidget->findItems(nick, Qt::MatchExactly);
    if (items.isEmpty())
        return;

    delete items.at(0);
    QColor color = textEdit->textColor();
    textEdit->setTextColor(Qt::gray);
    textEdit->append(tr("* %1 opuścił czat").arg(nick));
    textEdit->setTextColor(color);
    displayedMessages.insert(leftMessageId);
}

void ChatDialog::setUserName(const QString &userName)
{
    myNickName = userName;
    newParticipant(myNickName);
}

void ChatDialog::on_leaveChat_clicked()
{
    if (!lineEdit->hasFocus()) {
       this->close();
    }
}

