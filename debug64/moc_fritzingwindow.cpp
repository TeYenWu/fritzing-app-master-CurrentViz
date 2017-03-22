/****************************************************************************
** Meta object code from reading C++ file 'fritzingwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/mainwindow/fritzingwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fritzingwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_FritzingWindow_t {
    QByteArrayData data[8];
    char stringdata0[85];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FritzingWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FritzingWindow_t qt_meta_stringdata_FritzingWindow = {
    {
QT_MOC_LITERAL(0, 0, 14), // "FritzingWindow"
QT_MOC_LITERAL(1, 15, 15), // "readOnlyChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 10), // "isReadOnly"
QT_MOC_LITERAL(4, 43, 21), // "undoStackCleanChanged"
QT_MOC_LITERAL(5, 65, 7), // "isClean"
QT_MOC_LITERAL(6, 73, 4), // "save"
QT_MOC_LITERAL(7, 78, 6) // "saveAs"

    },
    "FritzingWindow\0readOnlyChanged\0\0"
    "isReadOnly\0undoStackCleanChanged\0"
    "isClean\0save\0saveAs"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FritzingWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   37,    2, 0x09 /* Protected */,
       6,    0,   40,    2, 0x09 /* Protected */,
       7,    0,   41,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Bool,
    QMetaType::Bool,

       0        // eod
};

void FritzingWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FritzingWindow *_t = static_cast<FritzingWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->readOnlyChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->undoStackCleanChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: { bool _r = _t->save();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { bool _r = _t->saveAs();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (FritzingWindow::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FritzingWindow::readOnlyChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject FritzingWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_FritzingWindow.data,
      qt_meta_data_FritzingWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FritzingWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FritzingWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FritzingWindow.stringdata0))
        return static_cast<void*>(const_cast< FritzingWindow*>(this));
    if (!strcmp(_clname, "Bundler"))
        return static_cast< Bundler*>(const_cast< FritzingWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int FritzingWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void FritzingWindow::readOnlyChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
