#ifndef LOG_H
#define LOG_H

#include "chatdialog.h"
#include <QMainWindow>
#include <string>
#include <QDialog>
#include <QLineEdit>

namespace Ui {
class log;
}

class chatt;

class log : public QMainWindow
{
    Q_OBJECT

public:
    explicit log(const std::string &username, QWidget *parent = nullptr);
    ~log();

private slots:
    void on_openChat_clicked();
    void on_userJoined(const QString &username);
    void on_LogoutButton_clicked();
    void on_changeLogin_clicked();
    void on_changePass_clicked();
    void on_addContactButton_clicked();
    void on_changeAvatar_clicked();

private:
    Ui::log *ui;
    std::string userLogin;
    ChatDialog *czatWindow;
    QLineEdit *insertLogin;
    QLineEdit *insertPass;
    bool updateLoginInDatabase(const QString &newLogin);
    bool updatePasswordInDatabase(const QString &newPassword);
};

#endif
