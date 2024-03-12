#include <QApplication>
#include "chatdialog.h"
#include "mainwindow.h"
#include <QtCore/QSettings>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MainWindow mainwindow;
    mainwindow.show();
    return app.exec();
}
