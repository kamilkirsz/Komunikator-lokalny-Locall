#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql>
#include <QSqlDatabase>
#include <QMessageBox>
#include "server.h"
#include "client.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_dloginButton_clicked();
    void on_dregisterButton_clicked();
    void on_connectDB_clicked();
    void on_newConnectionEstablished(QTcpSocket *socket);
    void on_messageReceived(const QString &username, const QString &message);
    void on_infobutton_clicked();

private:
    Ui::MainWindow *ui;
    Server *server;
    Client *client;
};
#endif
