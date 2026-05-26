/****************************************************************************
** Meta object code from reading C++ file 'updaterepair.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../WarnDialog/updaterepair.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'updaterepair.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UpDateRepair_t {
    QByteArrayData data[13];
    char stringdata0[191];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UpDateRepair_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UpDateRepair_t qt_meta_stringdata_UpDateRepair = {
    {
QT_MOC_LITERAL(0, 0, 12), // "UpDateRepair"
QT_MOC_LITERAL(1, 13, 22), // "on_CloseButton_clicked"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 18), // "on_NewHong_clicked"
QT_MOC_LITERAL(4, 56, 14), // "SlotAutoRepair"
QT_MOC_LITERAL(5, 71, 5), // "index"
QT_MOC_LITERAL(6, 77, 22), // "SlotAutoRepairProgress"
QT_MOC_LITERAL(7, 100, 18), // "SlotChangeLanguage"
QT_MOC_LITERAL(8, 119, 12), // "SlotProgress"
QT_MOC_LITERAL(9, 132, 7), // "schedue"
QT_MOC_LITERAL(10, 140, 7), // "Discrib"
QT_MOC_LITERAL(11, 148, 20), // "on_NewHong_2_clicked"
QT_MOC_LITERAL(12, 169, 21) // "SlotRepairCheckUpdate"

    },
    "UpDateRepair\0on_CloseButton_clicked\0"
    "\0on_NewHong_clicked\0SlotAutoRepair\0"
    "index\0SlotAutoRepairProgress\0"
    "SlotChangeLanguage\0SlotProgress\0schedue\0"
    "Discrib\0on_NewHong_2_clicked\0"
    "SlotRepairCheckUpdate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UpDateRepair[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    1,   56,    2, 0x08 /* Private */,
       6,    1,   59,    2, 0x08 /* Private */,
       7,    1,   62,    2, 0x08 /* Private */,
       8,    2,   65,    2, 0x08 /* Private */,
      11,    0,   70,    2, 0x08 /* Private */,
      12,    0,   71,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    9,   10,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void UpDateRepair::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UpDateRepair *_t = static_cast<UpDateRepair *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_CloseButton_clicked(); break;
        case 1: _t->on_NewHong_clicked(); break;
        case 2: _t->SlotAutoRepair((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->SlotAutoRepairProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->SlotChangeLanguage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->SlotProgress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->on_NewHong_2_clicked(); break;
        case 7: _t->SlotRepairCheckUpdate(); break;
        default: ;
        }
    }
}

const QMetaObject UpDateRepair::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_UpDateRepair.data,
      qt_meta_data_UpDateRepair,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *UpDateRepair::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UpDateRepair::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UpDateRepair.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int UpDateRepair::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
