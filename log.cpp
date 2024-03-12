#include "log.h"
#include "qsqldatabase.h"
#include "qsqlerror.h"
#include "qsqlquery.h"
#include "chatdialog.h"
#include "ui_log.h"
#include <QFileDialog>

log::log(const std::string &username, QWidget *parent) : QMainWindow(parent), ui(new Ui::log), czatWindow(nullptr)
{
    ui->setupUi(this);
    QPixmap image("/locallllll.png");
    QPixmap scaledImage = image.scaled(ui->label_7->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation);

    ui->label_7->setPixmap(scaledImage);
    ui->insertPass->setEchoMode(QLineEdit::Password);

    QString qUsername = QString::fromStdString(username);
    ui->nicklabel->setText("Witaj, " + qUsername + "!");

    userLogin = username;
    czatWindow = new ChatDialog(QString::fromStdString(userLogin), this);
}

log::~log()
{
    delete ui;
}

void log::on_userJoined(const QString &username)
{
    qDebug() << "Dołączył: " << username;
}

void log::on_openChat_clicked()
{
    if (czatWindow) {
        qDebug() << "Login w on_openChat_clicked: " << QString::fromStdString(userLogin);

    } else {
        qDebug() << "Błąd: Obiekt czatWindow nie został zainicjalizowany.";
    }

    ChatDialog *chatDialog = new ChatDialog(QString::fromStdString(userLogin), this);
    chatDialog->exec();
}

void log::on_LogoutButton_clicked()
{
    this->close();
    QMainWindow *mainWindow = dynamic_cast<QMainWindow*>(parent());
    if (mainWindow) {
        mainWindow->show();
    }
}

void log::on_changeLogin_clicked()
{
    QString newLogin = ui->insertLogin->text();

    if (updateLoginInDatabase(newLogin)) {
        qDebug() << "Login został zaktualizowany pomyślnie!";
    } else {
        qDebug() << "Błąd aktualizowania loginu";
    }
}

void log::on_changePass_clicked()
{
    QString newPassword = ui->insertPass->text();

    if (updatePasswordInDatabase(newPassword)) {
        qDebug() << "Hasło zostało zmienione pomyślnie!";
    } else {
        qDebug() << "Błąd zmiany hasła";
    }
}

bool log::updateLoginInDatabase(const QString &newLogin)
{
    if (QSqlDatabase::contains("qt_sql_default_connection")) {
        QSqlDatabase::removeDatabase("qt_sql_default_connection");
    }

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    QString dbPath = "D:/qtprojekty/aplikacja_testowa/test.sqlite";
    db.setDatabaseName(dbPath);

    if (!db.open()) {
        qDebug() << "Błąd połączenia z bazą danych:" << db.lastError().text();
        return false;
    }

    QSqlQuery query;
    query.prepare("UPDATE users SET login = :newLogin WHERE login = :oldLogin");
    query.bindValue(":newLogin", newLogin);
    query.bindValue(":oldLogin", QString::fromStdString(userLogin));

    if (query.exec()) {
        qDebug() << "Login zaktualizowany pomyślnie!";
        userLogin = newLogin.toStdString();
        return true;
    } else {
        qDebug() << "Błąd przy aktualizacji loginu:" << query.lastError().text();
        return false;
    }
}

bool log::updatePasswordInDatabase(const QString &newPassword)
{

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    QString dbPath = "D:/qtprojekty/aplikacja_testowa/test.sqlite";
    db.setDatabaseName(dbPath);

    if (!db.open()) {
        qDebug() << "Błąd połączenia z bazą danych:" << db.lastError().text();
        return false;
    }

    QSqlQuery query;
    query.prepare("UPDATE users SET pass = :newPassword WHERE login = :userLogin");
    query.bindValue(":newPassword", newPassword);
    query.bindValue(":userLogin", QString::fromStdString(userLogin));

    if (query.exec()) {
        qDebug() << "Hasło zaktualizowane pomyślnie!";
        return true;
    } else {
        qDebug() << "Błąd przy aktualizacji hasła:" << query.lastError().text();
        return false;
    }
}
void log::on_addContactButton_clicked()
{
    QString newContact = ui->addContact->text();

    if (!newContact.isEmpty()) {

        QString currentContacts = ui->contactList->toPlainText();

        QString updatedContacts = newContact + "\n" + currentContacts;

        ui->contactList->setPlainText(updatedContacts);

        ui->addContact->clear();
    }

    else {
        qDebug() << "Błąd: Kontakt nie może być pusty!";
    }
}

void log::on_changeAvatar_clicked()
{
    QString filePath = QFileDialog::getOpenFileName(this, tr("Wybierz zdjęcie"), "", tr("Obrazy (*.png *.jpg *.jpeg *.bmp);;Wszystkie pliki (*.*)"));

        if (!filePath.isEmpty())
    {
        QPixmap image(filePath);

        if (!image.isNull())
        {
            ui->imgLabel->setPixmap(image.scaled(ui->imgLabel->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));
        }
        else
        {
            qDebug() << "Błąd wczytywania obrazka z pliku: " << filePath;
        }
    }
}
