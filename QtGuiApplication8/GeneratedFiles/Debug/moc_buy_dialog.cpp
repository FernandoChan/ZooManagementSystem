/****************************************************************************
** Meta object code from reading C++ file 'buy_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../buy_dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'buy_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_buy_dialog_t {
    QByteArrayData data[8];
    char stringdata0[62];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_buy_dialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_buy_dialog_t qt_meta_stringdata_buy_dialog = {
    {
QT_MOC_LITERAL(0, 0, 10), // "buy_dialog"
QT_MOC_LITERAL(1, 11, 7), // "set_ice"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 7), // "set_sau"
QT_MOC_LITERAL(4, 28, 8), // "set_post"
QT_MOC_LITERAL(5, 37, 7), // "set_pen"
QT_MOC_LITERAL(6, 45, 7), // "set_mas"
QT_MOC_LITERAL(7, 53, 8) // "get_cost"

    },
    "buy_dialog\0set_ice\0\0set_sau\0set_post\0"
    "set_pen\0set_mas\0get_cost"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_buy_dialog[] = {

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
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void buy_dialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        buy_dialog *_t = static_cast<buy_dialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->set_ice(); break;
        case 1: _t->set_sau(); break;
        case 2: _t->set_post(); break;
        case 3: _t->set_pen(); break;
        case 4: _t->set_mas(); break;
        case 5: _t->get_cost(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject buy_dialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_buy_dialog.data,
      qt_meta_data_buy_dialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *buy_dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *buy_dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_buy_dialog.stringdata0))
        return static_cast<void*>(const_cast< buy_dialog*>(this));
    if (!strcmp(_clname, "Ui::Dialogbuy"))
        return static_cast< Ui::Dialogbuy*>(const_cast< buy_dialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int buy_dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
