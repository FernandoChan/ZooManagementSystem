/****************************************************************************
** Meta object code from reading C++ file 'QtGuiApplication8.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../QtGuiApplication8.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QtGuiApplication8.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QtGuiApp_t {
    QByteArrayData data[4];
    char stringdata0[29];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtGuiApp_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtGuiApp_t qt_meta_stringdata_QtGuiApp = {
    {
QT_MOC_LITERAL(0, 0, 8), // "QtGuiApp"
QT_MOC_LITERAL(1, 9, 9), // "can_login"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 8) // "Register"

    },
    "QtGuiApp\0can_login\0\0Register"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtGuiApp[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x08 /* Private */,
       3,    0,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QtGuiApp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QtGuiApp *_t = static_cast<QtGuiApp *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->can_login(); break;
        case 1: _t->Register(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QtGuiApp::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QtGuiApp.data,
      qt_meta_data_QtGuiApp,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QtGuiApp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtGuiApp::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QtGuiApp.stringdata0))
        return static_cast<void*>(const_cast< QtGuiApp*>(this));
    if (!strcmp(_clname, "Ui::QtGuiApplication8Class"))
        return static_cast< Ui::QtGuiApplication8Class*>(const_cast< QtGuiApp*>(this));
    return QDialog::qt_metacast(_clname);
}

int QtGuiApp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
