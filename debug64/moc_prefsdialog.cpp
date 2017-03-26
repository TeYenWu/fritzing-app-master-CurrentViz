/****************************************************************************
** Meta object code from reading C++ file 'prefsdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/dialogs/prefsdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'prefsdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PrefsDialog_t {
    QByteArrayData data[11];
    char stringdata0[158];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PrefsDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PrefsDialog_t qt_meta_stringdata_PrefsDialog = {
    {
QT_MOC_LITERAL(0, 0, 11), // "PrefsDialog"
QT_MOC_LITERAL(1, 12, 14), // "changeLanguage"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 5), // "clear"
QT_MOC_LITERAL(4, 34, 17), // "setConnectedColor"
QT_MOC_LITERAL(5, 52, 19), // "setUnconnectedColor"
QT_MOC_LITERAL(6, 72, 19), // "changeWheelBehavior"
QT_MOC_LITERAL(7, 92, 14), // "toggleAutosave"
QT_MOC_LITERAL(8, 107, 20), // "changeAutosavePeriod"
QT_MOC_LITERAL(9, 128, 12), // "curvyChanged"
QT_MOC_LITERAL(10, 141, 16) // "chooseProgrammer"

    },
    "PrefsDialog\0changeLanguage\0\0clear\0"
    "setConnectedColor\0setUnconnectedColor\0"
    "changeWheelBehavior\0toggleAutosave\0"
    "changeAutosavePeriod\0curvyChanged\0"
    "chooseProgrammer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PrefsDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x09 /* Protected */,
       3,    0,   62,    2, 0x09 /* Protected */,
       4,    0,   63,    2, 0x09 /* Protected */,
       5,    0,   64,    2, 0x09 /* Protected */,
       6,    0,   65,    2, 0x09 /* Protected */,
       7,    1,   66,    2, 0x09 /* Protected */,
       8,    1,   69,    2, 0x09 /* Protected */,
       9,    0,   72,    2, 0x09 /* Protected */,
      10,    0,   73,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PrefsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PrefsDialog *_t = static_cast<PrefsDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changeLanguage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->clear(); break;
        case 2: _t->setConnectedColor(); break;
        case 3: _t->setUnconnectedColor(); break;
        case 4: _t->changeWheelBehavior(); break;
        case 5: _t->toggleAutosave((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->changeAutosavePeriod((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->curvyChanged(); break;
        case 8: _t->chooseProgrammer(); break;
        default: ;
        }
    }
}

const QMetaObject PrefsDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_PrefsDialog.data,
      qt_meta_data_PrefsDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PrefsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PrefsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PrefsDialog.stringdata0))
        return static_cast<void*>(const_cast< PrefsDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int PrefsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
