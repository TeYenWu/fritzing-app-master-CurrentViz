/****************************************************************************
** Meta object code from reading C++ file 'pad.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/items/pad.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pad.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Pad_t {
    QByteArrayData data[3];
    char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Pad_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Pad_t qt_meta_stringdata_Pad = {
    {
QT_MOC_LITERAL(0, 0, 3), // "Pad"
QT_MOC_LITERAL(1, 4, 18), // "terminalPointEntry"
QT_MOC_LITERAL(2, 23, 0) // ""

    },
    "Pad\0terminalPointEntry\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Pad[] = {

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
       1,    1,   19,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void Pad::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Pad *_t = static_cast<Pad *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->terminalPointEntry((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Pad::staticMetaObject = {
    { &ResizableBoard::staticMetaObject, qt_meta_stringdata_Pad.data,
      qt_meta_data_Pad,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Pad::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Pad::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Pad.stringdata0))
        return static_cast<void*>(const_cast< Pad*>(this));
    return ResizableBoard::qt_metacast(_clname);
}

int Pad::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ResizableBoard::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_CopperBlocker_t {
    QByteArrayData data[1];
    char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CopperBlocker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CopperBlocker_t qt_meta_stringdata_CopperBlocker = {
    {
QT_MOC_LITERAL(0, 0, 13) // "CopperBlocker"

    },
    "CopperBlocker"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CopperBlocker[] = {

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

void CopperBlocker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject CopperBlocker::staticMetaObject = {
    { &Pad::staticMetaObject, qt_meta_stringdata_CopperBlocker.data,
      qt_meta_data_CopperBlocker,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CopperBlocker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CopperBlocker::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CopperBlocker.stringdata0))
        return static_cast<void*>(const_cast< CopperBlocker*>(this));
    return Pad::qt_metacast(_clname);
}

int CopperBlocker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Pad::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
