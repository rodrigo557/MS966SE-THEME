/****************************************************************************
** Meta object code from reading C++ file 'groupkey.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../WarnDialog/groupkey.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'groupkey.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GroupKey_t {
    QByteArrayData data[13];
    char stringdata0[166];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GroupKey_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GroupKey_t qt_meta_stringdata_GroupKey = {
    {
QT_MOC_LITERAL(0, 0, 8), // "GroupKey"
QT_MOC_LITERAL(1, 9, 22), // "on_CloseButton_clicked"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 20), // "on_NewHong_2_clicked"
QT_MOC_LITERAL(4, 54, 18), // "on_NewHong_clicked"
QT_MOC_LITERAL(5, 73, 17), // "UpdateCapslockTip"
QT_MOC_LITERAL(6, 91, 7), // "keyCode"
QT_MOC_LITERAL(7, 99, 8), // "downOrUp"
QT_MOC_LITERAL(8, 108, 4), // "aotu"
QT_MOC_LITERAL(9, 113, 22), // "on_lineEdit_textEdited"
QT_MOC_LITERAL(10, 136, 4), // "arg1"
QT_MOC_LITERAL(11, 141, 18), // "SlotChangeLanguage"
QT_MOC_LITERAL(12, 160, 5) // "index"

    },
    "GroupKey\0on_CloseButton_clicked\0\0"
    "on_NewHong_2_clicked\0on_NewHong_clicked\0"
    "UpdateCapslockTip\0keyCode\0downOrUp\0"
    "aotu\0on_lineEdit_textEdited\0arg1\0"
    "SlotChangeLanguage\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GroupKey[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    3,   47,    2, 0x08 /* Private */,
       9,    1,   54,    2, 0x08 /* Private */,
      11,    1,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool, QMetaType::Bool,    6,    7,    8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::Int,   12,

       0        // eod
};

void GroupKey::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GroupKey *_t = static_cast<GroupKey *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_CloseButton_clicked(); break;
        case 1: _t->on_NewHong_2_clicked(); break;
        case 2: _t->on_NewHong_clicked(); break;
        case 3: _t->UpdateCapslockTip((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 4: _t->on_lineEdit_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->SlotChangeLanguage((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject GroupKey::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_GroupKey.data,
      qt_meta_data_GroupKey,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *GroupKey::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GroupKey::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GroupKey.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int GroupKey::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
