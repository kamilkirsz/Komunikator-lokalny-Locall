/****************************************************************************
** Meta object code from reading C++ file 'log.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../log.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'log.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_log_t {
    uint offsetsAndSizes[20];
    char stringdata0[4];
    char stringdata1[20];
    char stringdata2[1];
    char stringdata3[14];
    char stringdata4[9];
    char stringdata5[24];
    char stringdata6[23];
    char stringdata7[22];
    char stringdata8[28];
    char stringdata9[24];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_log_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_log_t qt_meta_stringdata_log = {
    {
        QT_MOC_LITERAL(0, 3),  // "log"
        QT_MOC_LITERAL(4, 19),  // "on_openChat_clicked"
        QT_MOC_LITERAL(24, 0),  // ""
        QT_MOC_LITERAL(25, 13),  // "on_userJoined"
        QT_MOC_LITERAL(39, 8),  // "username"
        QT_MOC_LITERAL(48, 23),  // "on_LogoutButton_clicked"
        QT_MOC_LITERAL(72, 22),  // "on_changeLogin_clicked"
        QT_MOC_LITERAL(95, 21),  // "on_changePass_clicked"
        QT_MOC_LITERAL(117, 27),  // "on_addContactButton_clicked"
        QT_MOC_LITERAL(145, 23)   // "on_changeAvatar_clicked"
    },
    "log",
    "on_openChat_clicked",
    "",
    "on_userJoined",
    "username",
    "on_LogoutButton_clicked",
    "on_changeLogin_clicked",
    "on_changePass_clicked",
    "on_addContactButton_clicked",
    "on_changeAvatar_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_log[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x08,    1 /* Private */,
       3,    1,   57,    2, 0x08,    2 /* Private */,
       5,    0,   60,    2, 0x08,    4 /* Private */,
       6,    0,   61,    2, 0x08,    5 /* Private */,
       7,    0,   62,    2, 0x08,    6 /* Private */,
       8,    0,   63,    2, 0x08,    7 /* Private */,
       9,    0,   64,    2, 0x08,    8 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void log::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<log *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_openChat_clicked(); break;
        case 1: _t->on_userJoined((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->on_LogoutButton_clicked(); break;
        case 3: _t->on_changeLogin_clicked(); break;
        case 4: _t->on_changePass_clicked(); break;
        case 5: _t->on_addContactButton_clicked(); break;
        case 6: _t->on_changeAvatar_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject log::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_log.offsetsAndSizes,
    qt_meta_data_log,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_log_t
, QtPrivate::TypeAndForceComplete<log, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *log::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *log::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_log.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int log::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
