#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "log.h"
#include "client.h"
#include "server.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <regex>

std::string registerLogin, registerPass, loginLogin, loginPass;

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    registerLogin = "";
    registerPass = "";
    loginLogin = "";
    loginPass = "";
    ui->infoLabel->setVisible(false);
    ui->labelfooter->setVisible(true);
    ui->infoLabel2->setVisible(false);
    ui->d_registerPass->setEchoMode(QLineEdit::Password);
    ui->d_loginPass->setEchoMode(QLineEdit::Password);

    QPixmap image("/locallllll.png");
    QPixmap scaledImage = image.scaled(ui->label_7->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation);
    ui->label_7->setPixmap(scaledImage);

    server = new Server(this);
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    QString dbPath = "D:/qtprojekty/aplikacja_testowa/test.sqlite";
    db.setDatabaseName(dbPath);

    if (!db.open()) {
        qDebug() << "Błąd przy otwieraniu bazy danych: " << db.lastError().text();
    } else {
        qDebug() << "Baza danych otwarta pomyślnie!";
    }
}

void MainWindow::on_newConnectionEstablished(QTcpSocket *socket)
{
    qDebug() << "Nowe połączenie nawiązane";
}

void MainWindow::on_messageReceived(const QString &username, const QString &message)
{
    qDebug() << "Otrzymano wiadomość od " << username << ": " << message;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_dloginButton_clicked()
{
    ui->infoLabel2->setVisible(false);
    loginLogin = ui->d_loginLogin->toPlainText().toStdString();
    loginPass = ui->d_loginPass->text().toStdString();

    if (loginLogin.empty()) {
        ui->infoLabel2->setText("Błędne dane - login nie może być pusty");
        ui->infoLabel2->setVisible(true);
        return;
    }

    QSqlQuery query;
    query.prepare("SELECT * FROM users WHERE login = :login AND pass = :password");
    query.bindValue(":login", QString::fromStdString(loginLogin));
    query.bindValue(":password", QString::fromStdString(loginPass));

    if (query.exec() && query.next()) {
        qDebug() << "Zalogowano pomyślnie!";
        ui->infoLabel2->setText("Zalogowano pomyślnie!");
        ui->infoLabel2->setVisible(true);
        class log *logWindow = new class log(loginLogin, this);
        logWindow->show();
        this->hide();
    } else {
        qDebug() << "Błąd logowania: " << query.lastError().text();
        ui->infoLabel2->setText("Błędne dane");
        ui->infoLabel2->setVisible(true);
    }
}

void MainWindow::on_dregisterButton_clicked()
{
    ui->infoLabel->setVisible(false);
    registerLogin = ui->d_registerLogin->toPlainText().toStdString();
    registerPass = ui->d_registerPass->text().toStdString();

    if (registerLogin.empty()) {
        ui->infoLabel->setText("Błędne dane - login nie może być pusty");
        ui->infoLabel->setVisible(true);
        return;
    }

    std::regex passwordPattern("^(?=.*[A-Z])(?=.*[^A-Za-z0-9]).{8,}$");

    if (!std::regex_match(registerPass, passwordPattern)) {
        ui->infoLabel->setText("Błędne dane - hasło musi zawierać co najmniej 1 dużą literę, 1 znak specjalny, i być dłuższe niż 8 znaków");
        ui->infoLabel->setVisible(true);
        return;
    }

    QSqlQuery query;
    query.prepare("INSERT INTO users (login, pass) VALUES (:login, :password)");
    query.bindValue(":login", QString::fromStdString(registerLogin));
    query.bindValue(":password", QString::fromStdString(registerPass));

    if (query.exec()) {
        qDebug() << "Rekord dodany pomyślnie!";
        ui->infoLabel->setText("Zarejestrowano pomyślnie, możesz się zalogować");
        ui->infoLabel->setVisible(true);
    } else {
        ui->infoLabel->setText("Błędne dane");
        ui->infoLabel->setVisible(true);
        qDebug() << "Błąd przy dodawaniu rekordu: " << query.lastError().text();
    }
}

void MainWindow::on_connectDB_clicked()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    QString dbPath = "D:/qtprojekty/aplikacja_testowa/test.sqlite";
    db.setDatabaseName(dbPath);

    if (db.open()) {
        QMessageBox::information(this, "Połączenie", "Baza danych połączona pomyślnie");
    } else {
        QMessageBox::information(this, "Połączenie", "FAIL: " + db.lastError().text());
    }
}

void MainWindow::on_infobutton_clicked()
{
    QMessageBox infoMessageBox;
    infoMessageBox.setWindowTitle("Informacje o programie");
    infoMessageBox.setText("Projekt Komunikator internetowy locall 2024 by Kamil Kirsz & Kamil Żurek IPpp20");
    infoMessageBox.setIcon(QMessageBox::Information);
    infoMessageBox.addButton(QMessageBox::Ok);
    infoMessageBox.exec();
}

