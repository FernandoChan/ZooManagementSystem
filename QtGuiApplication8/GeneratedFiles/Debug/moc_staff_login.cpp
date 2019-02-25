/****************************************************************************
** Meta object code from reading C++ file 'staff_login.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../staff_login.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'staff_login.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_staff_login_t {
    QByteArrayData data[13];
    char stringdata0[235];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_staff_login_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_staff_login_t qt_meta_stringdata_staff_login = {
    {
QT_MOC_LITERAL(0, 0, 11), // "staff_login"
QT_MOC_LITERAL(1, 12, 18), // "getImformation_dog"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 18), // "getImformation_cat"
QT_MOC_LITERAL(4, 51, 20), // "getImformation_tiger"
QT_MOC_LITERAL(5, 72, 19), // "getImformation_lion"
QT_MOC_LITERAL(6, 92, 22), // "getImformation_leopard"
QT_MOC_LITERAL(7, 115, 24), // "getImformation_crocodile"
QT_MOC_LITERAL(8, 140, 20), // "getImformation_eagle"
QT_MOC_LITERAL(9, 161, 20), // "getImformation_rabit"
QT_MOC_LITERAL(10, 182, 22), // "getImformation_swallow"
QT_MOC_LITERAL(11, 205, 20), // "getImformation_mouse"
QT_MOC_LITERAL(12, 226, 8) // "get_boss"

    },
    "staff_login\0getImformation_dog\0\0"
    "getImformation_cat\0getImformation_tiger\0"
    "getImformation_lion\0getImformation_leopard\0"
    "getImformation_crocodile\0getImformation_eagle\0"
    "getImformation_rabit\0getImformation_swallow\0"
    "getImformation_mouse\0get_boss"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_staff_login[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    0,   72,    2, 0x08 /* Private */,
       6,    0,   73,    2, 0x08 /* Private */,
       7,    0,   74,    2, 0x08 /* Private */,
       8,    0,   75,    2, 0x08 /* Private */,
       9,    0,   76,    2, 0x08 /* Private */,
      10,    0,   77,    2, 0x08 /* Private */,
      11,    0,   78,    2, 0x08 /* Private */,
      12,    0,   79,    2, 0x08 /* Private */,

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
    QMetaType::Void,

       0        // eod
};

void staff_login::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        staff_login *_t = static_cast<staff_login *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->getImformation_dog(); break;
        case 1: _t->getImformation_cat(); break;
        case 2: _t->getImformation_tiger(); break;
        case 3: _t->getImformation_lion(); break;
        case 4: _t->getImformation_leopard(); break;
        case 5: _t->getImformation_crocodile(); break;
        case 6: _t->getImformation_eagle(); break;
        case 7: _t->getImformation_rabit(); break;
        case 8: _t->getImformation_swallow(); break;
        case 9: _t->getImformation_mouse(); break;
        case 10: _t->get_boss(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject staff_login::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_staff_login.data,
      qt_meta_data_staff_login,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *staff_login::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *staff_login::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_staff_login.stringdata0))
        return static_cast<void*>(const_cast< staff_login*>(this));
    if (!strcmp(_clname, "Ui::Dialogstaff"))
        return static_cast< Ui::Dialogstaff*>(const_cast< staff_login*>(this));
    return QDialog::qt_metacast(_clname);
}

int staff_login::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
