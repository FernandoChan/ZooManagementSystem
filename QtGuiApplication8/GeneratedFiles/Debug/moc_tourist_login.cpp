/****************************************************************************
** Meta object code from reading C++ file 'tourist_login.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../tourist_login.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tourist_login.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_tourist_login_t {
    QByteArrayData data[12];
    char stringdata0[228];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tourist_login_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tourist_login_t qt_meta_stringdata_tourist_login = {
    {
QT_MOC_LITERAL(0, 0, 13), // "tourist_login"
QT_MOC_LITERAL(1, 14, 20), // "getInformation_tiger"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 22), // "getInformation_swallow"
QT_MOC_LITERAL(4, 59, 20), // "getInformation_rabit"
QT_MOC_LITERAL(5, 80, 22), // "getInformation_leopard"
QT_MOC_LITERAL(6, 103, 19), // "getInformation_lion"
QT_MOC_LITERAL(7, 123, 20), // "getInformation_mouse"
QT_MOC_LITERAL(8, 144, 18), // "getInformation_dog"
QT_MOC_LITERAL(9, 163, 20), // "getInformation_eagle"
QT_MOC_LITERAL(10, 184, 24), // "getInformation_crocodile"
QT_MOC_LITERAL(11, 209, 18) // "getInformation_cat"

    },
    "tourist_login\0getInformation_tiger\0\0"
    "getInformation_swallow\0getInformation_rabit\0"
    "getInformation_leopard\0getInformation_lion\0"
    "getInformation_mouse\0getInformation_dog\0"
    "getInformation_eagle\0getInformation_crocodile\0"
    "getInformation_cat"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tourist_login[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    0,   68,    2, 0x08 /* Private */,
       7,    0,   69,    2, 0x08 /* Private */,
       8,    0,   70,    2, 0x08 /* Private */,
       9,    0,   71,    2, 0x08 /* Private */,
      10,    0,   72,    2, 0x08 /* Private */,
      11,    0,   73,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void tourist_login::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        tourist_login *_t = static_cast<tourist_login *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->getInformation_tiger(); break;
        case 1: _t->getInformation_swallow(); break;
        case 2: _t->getInformation_rabit(); break;
        case 3: _t->getInformation_leopard(); break;
        case 4: _t->getInformation_lion(); break;
        case 5: _t->getInformation_mouse(); break;
        case 6: _t->getInformation_dog(); break;
        case 7: _t->getInformation_eagle(); break;
        case 8: _t->getInformation_crocodile(); break;
        case 9: _t->getInformation_cat(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject tourist_login::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_tourist_login.data,
      qt_meta_data_tourist_login,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *tourist_login::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tourist_login::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_tourist_login.stringdata0))
        return static_cast<void*>(const_cast< tourist_login*>(this));
    if (!strcmp(_clname, "Ui::Dialog"))
        return static_cast< Ui::Dialog*>(const_cast< tourist_login*>(this));
    return QDialog::qt_metacast(_clname);
}

int tourist_login::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE