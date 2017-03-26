/****************************************************************************
** Meta object code from reading C++ file 'autoroutersettingsdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/autoroute/autoroutersettingsdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'autoroutersettingsdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AutorouterSettingsDialog_t {
    QByteArrayData data[11];
    char stringdata0[133];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AutorouterSettingsDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AutorouterSettingsDialog_t qt_meta_stringdata_AutorouterSettingsDialog = {
    {
QT_MOC_LITERAL(0, 0, 24), // "AutorouterSettingsDialog"
QT_MOC_LITERAL(1, 25, 10), // "production"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 10), // "widthEntry"
QT_MOC_LITERAL(4, 48, 11), // "changeUnits"
QT_MOC_LITERAL(5, 60, 14), // "changeHoleSize"
QT_MOC_LITERAL(6, 75, 14), // "changeDiameter"
QT_MOC_LITERAL(7, 90, 15), // "changeThickness"
QT_MOC_LITERAL(8, 106, 8), // "toInches"
QT_MOC_LITERAL(9, 115, 4), // "toMM"
QT_MOC_LITERAL(10, 120, 12) // "keepoutEntry"

    },
    "AutorouterSettingsDialog\0production\0"
    "\0widthEntry\0changeUnits\0changeHoleSize\0"
    "changeDiameter\0changeThickness\0toInches\0"
    "toMM\0keepoutEntry"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AutorouterSettingsDialog[] = {

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
       3,    1,   62,    2, 0x09 /* Protected */,
       4,    1,   65,    2, 0x09 /* Protected */,
       5,    1,   68,    2, 0x09 /* Protected */,
       6,    0,   71,    2, 0x09 /* Protected */,
       7,    0,   72,    2, 0x09 /* Protected */,
       8,    0,   73,    2, 0x09 /* Protected */,
       9,    0,   74,    2, 0x09 /* Protected */,
      10,    0,   75,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AutorouterSettingsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AutorouterSettingsDialog *_t = static_cast<AutorouterSettingsDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->production((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->widthEntry((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->changeUnits((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->changeHoleSize((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->changeDiameter(); break;
        case 5: _t->changeThickness(); break;
        case 6: _t->toInches(); break;
        case 7: _t->toMM(); break;
        case 8: _t->keepoutEntry(); break;
        default: ;
        }
    }
}

const QMetaObject AutorouterSettingsDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AutorouterSettingsDialog.data,
      qt_meta_data_AutorouterSettingsDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AutorouterSettingsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AutorouterSettingsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AutorouterSettingsDialog.stringdata0))
        return static_cast<void*>(const_cast< AutorouterSettingsDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int AutorouterSettingsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
