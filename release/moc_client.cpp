/****************************************************************************
** Meta object code from reading C++ file 'client.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../client.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'client.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Client_t {
    uint offsetsAndSizes[44];
    char stringdata0[7];
    char stringdata1[11];
    char stringdata2[1];
    char stringdata3[5];
    char stringdata4[8];
    char stringdata5[15];
    char stringdata6[5];
    char stringdata7[16];
    char stringdata8[17];
    char stringdata9[13];
    char stringdata10[17];
    char stringdata11[9];
    char stringdata12[14];
    char stringdata13[12];
    char stringdata14[11];
    char stringdata15[16];
    char stringdata16[29];
    char stringdata17[12];
    char stringdata18[13];
    char stringdata19[12];
    char stringdata20[27];
    char stringdata21[19];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_Client_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_Client_t qt_meta_stringdata_Client = {
    {
        QT_MOC_LITERAL(0, 6),  // "Client"
        QT_MOC_LITERAL(7, 10),  // "newMessage"
        QT_MOC_LITERAL(18, 0),  // ""
        QT_MOC_LITERAL(19, 4),  // "from"
        QT_MOC_LITERAL(24, 7),  // "message"
        QT_MOC_LITERAL(32, 14),  // "newParticipant"
        QT_MOC_LITERAL(47, 4),  // "nick"
        QT_MOC_LITERAL(52, 15),  // "participantLeft"
        QT_MOC_LITERAL(68, 16),  // "userLoginFetched"
        QT_MOC_LITERAL(85, 12),  // "fetchedLogin"
        QT_MOC_LITERAL(98, 16),  // "userLoginChanged"
        QT_MOC_LITERAL(115, 8),  // "newLogin"
        QT_MOC_LITERAL(124, 13),  // "newConnection"
        QT_MOC_LITERAL(138, 11),  // "Connection*"
        QT_MOC_LITERAL(150, 10),  // "connection"
        QT_MOC_LITERAL(161, 15),  // "connectionError"
        QT_MOC_LITERAL(177, 28),  // "QAbstractSocket::SocketError"
        QT_MOC_LITERAL(206, 11),  // "socketError"
        QT_MOC_LITERAL(218, 12),  // "disconnected"
        QT_MOC_LITERAL(231, 11),  // "readyForUse"
        QT_MOC_LITERAL(243, 26),  // "fetchUserLoginFromDatabase"
        QT_MOC_LITERAL(270, 18)   // "onUserLoginFetched"
    },
    "Client",
    "newMessage",
    "",
    "from",
    "message",
    "newParticipant",
    "nick",
    "participantLeft",
    "userLoginFetched",
    "fetchedLogin",
    "userLoginChanged",
    "newLogin",
    "newConnection",
    "Connection*",
    "connection",
    "connectionError",
    "QAbstractSocket::SocketError",
    "socketError",
    "disconnected",
    "readyForUse",
    "fetchUserLoginFromDatabase",
    "onUserLoginFetched"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Client[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   80,    2, 0x06,    1 /* Public */,
       5,    1,   85,    2, 0x06,    4 /* Public */,
       7,    1,   88,    2, 0x06,    6 /* Public */,
       8,    1,   91,    2, 0x06,    8 /* Public */,
      10,    1,   94,    2, 0x06,   10 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      12,    1,   97,    2, 0x08,   12 /* Private */,
      15,    1,  100,    2, 0x08,   14 /* Private */,
      18,    0,  103,    2, 0x08,   16 /* Private */,
      19,    0,  104,    2, 0x08,   17 /* Private */,
      20,    0,  105,    2, 0x08,   18 /* Private */,
      21,    1,  106,    2, 0x08,   19 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,   11,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,

       0        // eod
};

void Client::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Client *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->newMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 1: _t->newParticipant((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->participantLeft((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->userLoginFetched((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->userLoginChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->newConnection((*reinterpret_cast< std::add_pointer_t<Connection*>>(_a[1]))); break;
        case 6: _t->connectionError((*reinterpret_cast< std::add_pointer_t<QAbstractSocket::SocketError>>(_a[1]))); break;
        case 7: _t->disconnected(); break;
        case 8: _t->readyForUse(); break;
        case 9: _t->fetchUserLoginFromDatabase(); break;
        case 10: _t->onUserLoginFetched((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Client::*)(const QString & , const QString & );
            if (_t _q_method = &Client::newMessage; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Client::*)(const QString & );
            if (_t _q_method = &Client::newParticipant; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Client::*)(const QString & );
            if (_t _q_method = &Client::participantLeft; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Client::*)(const QString & );
            if (_t _q_method = &Client::userLoginFetched; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Client::*)(const QString & );
            if (_t _q_method = &Client::userLoginChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject Client::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Client.offsetsAndSizes,
    qt_meta_data_Client,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Client_t
, QtPrivate::TypeAndForceComplete<Client, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Connection *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QAbstractSocket::SocketError, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>


>,
    nullptr
} };


const QMetaObject *Client::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Client::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Client.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Client::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void Client::newMessage(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Client::newParticipant(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Client::participantLeft(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Client::userLoginFetched(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Client::userLoginChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
