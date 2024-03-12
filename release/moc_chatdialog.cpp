/****************************************************************************
** Meta object code from reading C++ file 'chatdialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../chatdialog.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chatdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ChatDialog_t {
    uint offsetsAndSizes[24];
    char stringdata0[11];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[5];
    char stringdata4[8];
    char stringdata5[12];
    char stringdata6[9];
    char stringdata7[14];
    char stringdata8[15];
    char stringdata9[5];
    char stringdata10[16];
    char stringdata11[21];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_ChatDialog_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_ChatDialog_t qt_meta_stringdata_ChatDialog = {
    {
        QT_MOC_LITERAL(0, 10),  // "ChatDialog"
        QT_MOC_LITERAL(11, 13),  // "appendMessage"
        QT_MOC_LITERAL(25, 0),  // ""
        QT_MOC_LITERAL(26, 4),  // "from"
        QT_MOC_LITERAL(31, 7),  // "message"
        QT_MOC_LITERAL(39, 11),  // "setUserName"
        QT_MOC_LITERAL(51, 8),  // "userName"
        QT_MOC_LITERAL(60, 13),  // "returnPressed"
        QT_MOC_LITERAL(74, 14),  // "newParticipant"
        QT_MOC_LITERAL(89, 4),  // "nick"
        QT_MOC_LITERAL(94, 15),  // "participantLeft"
        QT_MOC_LITERAL(110, 20)   // "on_leaveChat_clicked"
    },
    "ChatDialog",
    "appendMessage",
    "",
    "from",
    "message",
    "setUserName",
    "userName",
    "returnPressed",
    "newParticipant",
    "nick",
    "participantLeft",
    "on_leaveChat_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ChatDialog[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   50,    2, 0x0a,    1 /* Public */,
       5,    1,   55,    2, 0x0a,    4 /* Public */,
       7,    0,   58,    2, 0x08,    6 /* Private */,
       8,    1,   59,    2, 0x08,    7 /* Private */,
      10,    1,   62,    2, 0x08,    9 /* Private */,
      11,    0,   65,    2, 0x08,   11 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,

       0        // eod
};

void ChatDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ChatDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->appendMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 1: _t->setUserName((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->returnPressed(); break;
        case 3: _t->newParticipant((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->participantLeft((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->on_leaveChat_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject ChatDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_ChatDialog.offsetsAndSizes,
    qt_meta_data_ChatDialog,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_ChatDialog_t
, QtPrivate::TypeAndForceComplete<ChatDialog, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *ChatDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChatDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ChatDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ChatDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
