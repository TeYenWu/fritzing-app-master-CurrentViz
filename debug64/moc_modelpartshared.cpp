/****************************************************************************
** Meta object code from reading C++ file 'modelpartshared.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/model/modelpartshared.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'modelpartshared.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ModelPartShared_t {
    QByteArrayData data[3];
    char stringdata0[29];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ModelPartShared_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ModelPartShared_t qt_meta_stringdata_ModelPartShared = {
    {
QT_MOC_LITERAL(0, 0, 15), // "ModelPartShared"
QT_MOC_LITERAL(1, 16, 11), // "removeOwner"
QT_MOC_LITERAL(2, 28, 0) // ""

    },
    "ModelPartShared\0removeOwner\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ModelPartShared[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void ModelPartShared::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ModelPartShared *_t = static_cast<ModelPartShared *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->removeOwner(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ModelPartShared::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ModelPartShared.data,
      qt_meta_data_ModelPartShared,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ModelPartShared::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ModelPartShared::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ModelPartShared.stringdata0))
        return static_cast<void*>(const_cast< ModelPartShared*>(this));
    return QObject::qt_metacast(_clname);
}

int ModelPartShared::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_ModelPartSharedRoot_t {
    QByteArrayData data[1];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ModelPartSharedRoot_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ModelPartSharedRoot_t qt_meta_stringdata_ModelPartSharedRoot = {
    {
QT_MOC_LITERAL(0, 0, 19) // "ModelPartSharedRoot"

    },
    "ModelPartSharedRoot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ModelPartSharedRoot[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void ModelPartSharedRoot::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject ModelPartSharedRoot::staticMetaObject = {
    { &ModelPartShared::staticMetaObject, qt_meta_stringdata_ModelPartSharedRoot.data,
      qt_meta_data_ModelPartSharedRoot,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ModelPartSharedRoot::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ModelPartSharedRoot::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ModelPartSharedRoot.stringdata0))
        return static_cast<void*>(const_cast< ModelPartSharedRoot*>(this));
    return ModelPartShared::qt_metacast(_clname);
}

int ModelPartSharedRoot::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ModelPartShared::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
