QT       += core gui sql network


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    chatdialog.cpp \
    client.cpp \
    connection.cpp \
    log.cpp \
    main.cpp \
    mainwindow.cpp \
    peermanager.cpp \
    server.cpp

HEADERS += \
    chatdialog.h \
    client.h \
    connection.h \
    log.h \
    mainwindow.h \
    peermanager.h \
    server.h

FORMS += \
    chatdialog.ui \
    log.ui \
     mainwindow.ui \


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    locallllll.png
