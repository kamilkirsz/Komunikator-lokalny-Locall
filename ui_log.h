/********************************************************************************
** Form generated from reading UI file 'log.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOG_H
#define UI_LOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_log
{
public:
    QWidget *centralwidget;
    QLabel *nicklabel;
    QPushButton *changeLogin;
    QPushButton *changePass;
    QLineEdit *insertLogin;
    QLineEdit *insertPass;
    QLabel *label_7;
    QPushButton *openChat;
    QLabel *label;
    QLabel *imgLabel;
    QPushButton *changeAvatar;
    QLabel *idlabel_2;
    QPushButton *LogoutButton;
    QLabel *label_3;
    QPushButton *addContactButton;
    QLineEdit *addContact;
    QPlainTextEdit *contactList;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *log)
    {
        if (log->objectName().isEmpty())
            log->setObjectName(QString::fromUtf8("log"));
        log->resize(679, 324);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        log->setPalette(palette);
        QIcon icon;
        icon.addFile(QString::fromUtf8("locall.png"), QSize(), QIcon::Normal, QIcon::Off);
        log->setWindowIcon(icon);
        centralwidget = new QWidget(log);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        nicklabel = new QLabel(centralwidget);
        nicklabel->setObjectName(QString::fromUtf8("nicklabel"));
        nicklabel->setGeometry(QRect(30, 40, 241, 31));
        QPalette palette1;
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        nicklabel->setPalette(palette1);
        QFont font;
        font.setPointSize(20);
        nicklabel->setFont(font);
        changeLogin = new QPushButton(centralwidget);
        changeLogin->setObjectName(QString::fromUtf8("changeLogin"));
        changeLogin->setGeometry(QRect(130, 120, 80, 24));
        changeLogin->setStyleSheet(QString::fromUtf8("border:1px solid black;background-color:#00f6ff;color:black;border-radius:10px;"));
        changePass = new QPushButton(centralwidget);
        changePass->setObjectName(QString::fromUtf8("changePass"));
        changePass->setGeometry(QRect(130, 150, 80, 24));
        changePass->setStyleSheet(QString::fromUtf8("border:1px solid black;background-color:#00f6ff;color:black;border-radius:10px;"));
        insertLogin = new QLineEdit(centralwidget);
        insertLogin->setObjectName(QString::fromUtf8("insertLogin"));
        insertLogin->setGeometry(QRect(10, 120, 113, 21));
        insertLogin->setStyleSheet(QString::fromUtf8("border:1px solid white;background-color:black;color:white;"));
        insertPass = new QLineEdit(centralwidget);
        insertPass->setObjectName(QString::fromUtf8("insertPass"));
        insertPass->setGeometry(QRect(10, 150, 113, 21));
        insertPass->setStyleSheet(QString::fromUtf8("border:1px solid white;background-color:black;color:white;"));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(290, 0, 101, 101));
        label_7->setMinimumSize(QSize(101, 101));
        label_7->setPixmap(QPixmap(QString::fromUtf8("locallllll.png")));
        label_7->setScaledContents(true);
        openChat = new QPushButton(centralwidget);
        openChat->setObjectName(QString::fromUtf8("openChat"));
        openChat->setGeometry(QRect(230, 110, 251, 41));
        openChat->setStyleSheet(QString::fromUtf8("border:1px solid black;background-color:#00f6ff;color:black;border-radius:10px;"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(280, 70, 49, 16));
        imgLabel = new QLabel(centralwidget);
        imgLabel->setObjectName(QString::fromUtf8("imgLabel"));
        imgLabel->setGeometry(QRect(20, 180, 91, 81));
        imgLabel->setPixmap(QPixmap(QString::fromUtf8("locallllll.png")));
        imgLabel->setScaledContents(true);
        changeAvatar = new QPushButton(centralwidget);
        changeAvatar->setObjectName(QString::fromUtf8("changeAvatar"));
        changeAvatar->setGeometry(QRect(130, 210, 80, 24));
        changeAvatar->setStyleSheet(QString::fromUtf8("border:1px solid black;background-color:#00f6ff;color:black;border-radius:10px;"));
        idlabel_2 = new QLabel(centralwidget);
        idlabel_2->setObjectName(QString::fromUtf8("idlabel_2"));
        idlabel_2->setGeometry(QRect(520, 0, 171, 31));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        idlabel_2->setPalette(palette2);
        QFont font1;
        font1.setPointSize(12);
        idlabel_2->setFont(font1);
        LogoutButton = new QPushButton(centralwidget);
        LogoutButton->setObjectName(QString::fromUtf8("LogoutButton"));
        LogoutButton->setGeometry(QRect(230, 160, 251, 41));
        LogoutButton->setStyleSheet(QString::fromUtf8("border:1px solid black;background-color:#00f6ff;color:black;border-radius:10px;"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(180, 280, 791, 20));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        label_3->setPalette(palette3);
        QFont font2;
        font2.setPointSize(10);
        label_3->setFont(font2);
        label_3->setLayoutDirection(Qt::LeftToRight);
        addContactButton = new QPushButton(centralwidget);
        addContactButton->setObjectName(QString::fromUtf8("addContactButton"));
        addContactButton->setGeometry(QRect(523, 250, 111, 31));
        addContactButton->setStyleSheet(QString::fromUtf8("border:1px solid black;background-color:#00f6ff;color:black;border-radius:10px;"));
        addContact = new QLineEdit(centralwidget);
        addContact->setObjectName(QString::fromUtf8("addContact"));
        addContact->setGeometry(QRect(523, 220, 113, 21));
        addContact->setStyleSheet(QString::fromUtf8("border:1px solid white;background-color:black;color:white;"));
        contactList = new QPlainTextEdit(centralwidget);
        contactList->setObjectName(QString::fromUtf8("contactList"));
        contactList->setGeometry(QRect(523, 30, 113, 181));
        contactList->setStyleSheet(QString::fromUtf8("border:1px solid white;background-color:black;color:white;"));
        contactList->setReadOnly(true);
        log->setCentralWidget(centralwidget);
        menubar = new QMenuBar(log);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 679, 21));
        log->setMenuBar(menubar);
        statusbar = new QStatusBar(log);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        log->setStatusBar(statusbar);

        retranslateUi(log);

        QMetaObject::connectSlotsByName(log);
    } // setupUi

    void retranslateUi(QMainWindow *log)
    {
        log->setWindowTitle(QCoreApplication::translate("log", "locall - logged", nullptr));
        nicklabel->setText(QCoreApplication::translate("log", "Witaj Nick!", nullptr));
        changeLogin->setText(QCoreApplication::translate("log", "Zmie\305\204 nick", nullptr));
        changePass->setText(QCoreApplication::translate("log", "Zmie\305\204 has\305\202o", nullptr));
        label_7->setText(QString());
        openChat->setText(QCoreApplication::translate("log", "Otw\303\263rz czat", nullptr));
        label->setText(QString());
        imgLabel->setText(QString());
        changeAvatar->setText(QCoreApplication::translate("log", "Zmie\305\204 avatar", nullptr));
        idlabel_2->setText(QCoreApplication::translate("log", "Lista kontakt\303\263w", nullptr));
        LogoutButton->setText(QCoreApplication::translate("log", "Wyloguj", nullptr));
        label_3->setText(QCoreApplication::translate("log", "locall 2024 by Kamil Kirsz & Kamil \305\273urek IPpp20", nullptr));
        addContactButton->setText(QCoreApplication::translate("log", "Dodaj kontakt", nullptr));
    } // retranslateUi

};

namespace Ui {
    class log: public Ui_log {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOG_H
