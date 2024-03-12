#ifndef CHATDIALOG_H
#define CHATDIALOG_H

#include "ui_chatdialog.h"
#include "client.h"
#include <QSet>

class ChatDialog : public QDialog, private Ui::ChatDialog
{
    Q_OBJECT

public:
    ChatDialog(const QString &username, QWidget *parent = nullptr);

public slots:
    void appendMessage(const QString &from, const QString &message);
    void setUserName(const QString &userName);

private slots:
    void returnPressed();
    void newParticipant(const QString &nick);
    void participantLeft(const QString &nick);
    void on_leaveChat_clicked();

private:
    Client client;
    QString myNickName;
    QTextTableFormat tableFormat;
    QSet<QString> displayedMessages;
};

#endif
