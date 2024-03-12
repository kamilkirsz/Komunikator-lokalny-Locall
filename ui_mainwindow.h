/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *dregisterButton;
    QLabel *infoLabel;
    QLineEdit *d_registerPass;
    QTextEdit *d_registerLogin;
    QLabel *label_7;
    QPushButton *dloginButton;
    QTextEdit *d_loginLogin;
    QLabel *infoLabel2;
    QLabel *label_5;
    QLineEdit *d_loginPass;
    QLabel *label_2;
    QLabel *label_6;
    QPushButton *infobutton;
    QLabel *labelfooter;
    QLabel *label_8;
    QLabel *label_9;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(679, 324);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        MainWindow->setPalette(palette);
        QIcon icon;
        icon.addFile(QString::fromUtf8("locall.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setAutoFillBackground(true);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 90, 341, 51));
        QPalette palette1;
        QBrush brush2(QColor(0, 246, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        label->setPalette(palette1);
        QFont font;
        font.setPointSize(16);
        label->setFont(font);
        label->setScaledContents(false);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 150, 49, 16));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 190, 49, 16));
        dregisterButton = new QPushButton(centralwidget);
        dregisterButton->setObjectName(QString::fromUtf8("dregisterButton"));
        dregisterButton->setGeometry(QRect(50, 230, 221, 24));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush2);
        QBrush brush3(QColor(0, 0, 0, 128));
        brush3.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush3);
#endif
        dregisterButton->setPalette(palette2);
        dregisterButton->setStyleSheet(QString::fromUtf8("border:1px solid black;background-color:#00f6ff;color:black;border-radius:10px;"));
        infoLabel = new QLabel(centralwidget);
        infoLabel->setObjectName(QString::fromUtf8("infoLabel"));
        infoLabel->setGeometry(QRect(10, 260, 641, 20));
        QFont font1;
        font1.setPointSize(9);
        infoLabel->setFont(font1);
        d_registerPass = new QLineEdit(centralwidget);
        d_registerPass->setObjectName(QString::fromUtf8("d_registerPass"));
        d_registerPass->setGeometry(QRect(50, 180, 221, 31));
        d_registerPass->setStyleSheet(QString::fromUtf8("border:1px solid white;background-color:black;color:white;"));
        d_registerLogin = new QTextEdit(centralwidget);
        d_registerLogin->setObjectName(QString::fromUtf8("d_registerLogin"));
        d_registerLogin->setGeometry(QRect(50, 140, 221, 31));
        d_registerLogin->setStyleSheet(QString::fromUtf8("border:1px solid white;background-color:black;color:white;"));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(290, 0, 101, 101));
        label_7->setPixmap(QPixmap(QString::fromUtf8("locallllll.png")));
        label_7->setScaledContents(true);
        label_7->setWordWrap(false);
        dloginButton = new QPushButton(centralwidget);
        dloginButton->setObjectName(QString::fromUtf8("dloginButton"));
        dloginButton->setGeometry(QRect(400, 230, 221, 24));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush3);
#endif
        dloginButton->setPalette(palette3);
        dloginButton->setStyleSheet(QString::fromUtf8("border:1px solid black;background-color:#00f6ff;color:black;border-radius:10px;"));
        d_loginLogin = new QTextEdit(centralwidget);
        d_loginLogin->setObjectName(QString::fromUtf8("d_loginLogin"));
        d_loginLogin->setGeometry(QRect(400, 140, 221, 31));
        d_loginLogin->setStyleSheet(QString::fromUtf8("border:1px solid white;background-color:black;color:white;"));
        infoLabel2 = new QLabel(centralwidget);
        infoLabel2->setObjectName(QString::fromUtf8("infoLabel2"));
        infoLabel2->setGeometry(QRect(370, 260, 321, 20));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(360, 150, 49, 16));
        d_loginPass = new QLineEdit(centralwidget);
        d_loginPass->setObjectName(QString::fromUtf8("d_loginPass"));
        d_loginPass->setGeometry(QRect(400, 180, 221, 31));
        d_loginPass->setStyleSheet(QString::fromUtf8("border:1px solid white;background-color:black;color:white;"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(460, 90, 341, 51));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        label_2->setPalette(palette4);
        label_2->setFont(font);
        label_2->setScaledContents(false);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(360, 190, 49, 16));
        infobutton = new QPushButton(centralwidget);
        infobutton->setObjectName(QString::fromUtf8("infobutton"));
        infobutton->setGeometry(QRect(40, 30, 201, 24));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
#endif
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush3);
#endif
        infobutton->setPalette(palette5);
        infobutton->setStyleSheet(QString::fromUtf8("border:1px solid black;background-color:#00f6ff;color:black;border-radius:10px;"));
        labelfooter = new QLabel(centralwidget);
        labelfooter->setObjectName(QString::fromUtf8("labelfooter"));
        labelfooter->setGeometry(QRect(180, 280, 791, 20));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(false);
        labelfooter->setFont(font2);
        labelfooter->setLayoutDirection(Qt::LeftToRight);
        labelfooter->setStyleSheet(QString::fromUtf8("color:white;"));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(90, 50, 401, 51));
        label_8->setFont(font);
        label_8->setScaledContents(false);
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(450, 50, 401, 51));
        label_9->setFont(font);
        label_9->setScaledContents(false);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "locall - main", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Rejestracja", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Haslo", nullptr));
        dregisterButton->setText(QCoreApplication::translate("MainWindow", "Zarejestruj sie", nullptr));
        infoLabel->setText(QCoreApplication::translate("MainWindow", "infolabel", nullptr));
        label_7->setText(QString());
        dloginButton->setText(QCoreApplication::translate("MainWindow", "Zaloguj sie", nullptr));
        infoLabel2->setText(QCoreApplication::translate("MainWindow", "infolabel", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Logowanie", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Haslo", nullptr));
        infobutton->setText(QCoreApplication::translate("MainWindow", "Informacje o programie", nullptr));
        labelfooter->setText(QCoreApplication::translate("MainWindow", "locall 2024 by Kamil Kirsz & Kamil \305\273urek IPpp20", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Nie masz konta?", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Masz konto?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
