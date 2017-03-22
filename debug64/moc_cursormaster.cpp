/****************************************************************************
** Meta object code from reading C++ file 'cursormaster.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/utils/cursormaster.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cursormaster.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CursorMaster_t {
    QByteArrayData data[4];
    char stringdata0[38];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CursorMaster_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CursorMaster_t qt_meta_stringdata_CursorMaster = {
    {
QT_MOC_LITERAL(0, 0, 12), // "CursorMaster"
QT_MOC_LITERAL(1, 13, 12), // "deleteCursor"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 10) // "moveCursor"

    },
    "CursorMaster\0deleteCursor\0\0moveCursor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CursorMaster[] = {

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
       1,    1,   24,    2, 0x09 /* Protected */,
       3,    0,   27,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::QObjectStar,    2,
    QMetaType::Void,

       0        // eod
};

void CursorMaster::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CursorMaster *_t = static_cast<CursorMaster *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->deleteCursor((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 1: _t->moveCursor(); break;
        default: ;
        }
    }
}

const QMetaObject CursorMaster::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CursorMaster.data,
      qt_meta_data_CursorMaster,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CursorMaster::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CursorMaster::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CursorMaster.stringdata0))
        return static_cast<void*>(const_cast< CursorMaster*>(this));
    return QObject::qt_metacast(_clname);
}

int CursorMaster::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
