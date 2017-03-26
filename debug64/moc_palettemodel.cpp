/****************************************************************************
** Meta object code from reading C++ file 'palettemodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/model/palettemodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'palettemodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PaletteModel_t {
    QByteArrayData data[7];
    char stringdata0[60];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PaletteModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PaletteModel_t qt_meta_stringdata_PaletteModel = {
    {
QT_MOC_LITERAL(0, 0, 12), // "PaletteModel"
QT_MOC_LITERAL(1, 13, 10), // "loadedPart"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 1), // "i"
QT_MOC_LITERAL(4, 27, 5), // "total"
QT_MOC_LITERAL(5, 33, 9), // "incSearch"
QT_MOC_LITERAL(6, 43, 16) // "addSearchMaximum"

    },
    "PaletteModel\0loadedPart\0\0i\0total\0"
    "incSearch\0addSearchMaximum"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PaletteModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x06 /* Public */,
       5,    0,   34,    2, 0x06 /* Public */,
       6,    1,   35,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void PaletteModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PaletteModel *_t = static_cast<PaletteModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loadedPart((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->incSearch(); break;
        case 2: _t->addSearchMaximum((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PaletteModel::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PaletteModel::loadedPart)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (PaletteModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PaletteModel::incSearch)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (PaletteModel::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PaletteModel::addSearchMaximum)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject PaletteModel::staticMetaObject = {
    { &ModelBase::staticMetaObject, qt_meta_stringdata_PaletteModel.data,
      qt_meta_data_PaletteModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PaletteModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PaletteModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PaletteModel.stringdata0))
        return static_cast<void*>(const_cast< PaletteModel*>(this));
    return ModelBase::qt_metacast(_clname);
}

int PaletteModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ModelBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void PaletteModel::loadedPart(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PaletteModel::incSearch()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void PaletteModel::addSearchMaximum(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
