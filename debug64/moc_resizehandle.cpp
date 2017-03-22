/****************************************************************************
** Meta object code from reading C++ file 'resizehandle.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/utils/resizehandle.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'resizehandle.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ResizeHandle_t {
    QByteArrayData data[11];
    char stringdata0[152];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ResizeHandle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ResizeHandle_t qt_meta_stringdata_ResizeHandle = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ResizeHandle"
QT_MOC_LITERAL(1, 13, 16), // "mousePressSignal"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 25), // "QGraphicsSceneMouseEvent*"
QT_MOC_LITERAL(4, 57, 5), // "event"
QT_MOC_LITERAL(5, 63, 13), // "ResizeHandle*"
QT_MOC_LITERAL(6, 77, 15), // "mouseMoveSignal"
QT_MOC_LITERAL(7, 93, 18), // "mouseReleaseSignal"
QT_MOC_LITERAL(8, 112, 17), // "zoomChangedSignal"
QT_MOC_LITERAL(9, 130, 5), // "scale"
QT_MOC_LITERAL(10, 136, 15) // "zoomChangedSlot"

    },
    "ResizeHandle\0mousePressSignal\0\0"
    "QGraphicsSceneMouseEvent*\0event\0"
    "ResizeHandle*\0mouseMoveSignal\0"
    "mouseReleaseSignal\0zoomChangedSignal\0"
    "scale\0zoomChangedSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ResizeHandle[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x06 /* Public */,
       6,    2,   44,    2, 0x06 /* Public */,
       7,    2,   49,    2, 0x06 /* Public */,
       8,    1,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,   57,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    2,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    2,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    2,
    QMetaType::Void, QMetaType::Double,    9,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    9,

       0        // eod
};

void ResizeHandle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ResizeHandle *_t = static_cast<ResizeHandle *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mousePressSignal((*reinterpret_cast< QGraphicsSceneMouseEvent*(*)>(_a[1])),(*reinterpret_cast< ResizeHandle*(*)>(_a[2]))); break;
        case 1: _t->mouseMoveSignal((*reinterpret_cast< QGraphicsSceneMouseEvent*(*)>(_a[1])),(*reinterpret_cast< ResizeHandle*(*)>(_a[2]))); break;
        case 2: _t->mouseReleaseSignal((*reinterpret_cast< QGraphicsSceneMouseEvent*(*)>(_a[1])),(*reinterpret_cast< ResizeHandle*(*)>(_a[2]))); break;
        case 3: _t->zoomChangedSignal((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->zoomChangedSlot((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ResizeHandle* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ResizeHandle* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ResizeHandle* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ResizeHandle::*_t)(QGraphicsSceneMouseEvent * , ResizeHandle * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ResizeHandle::mousePressSignal)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ResizeHandle::*_t)(QGraphicsSceneMouseEvent * , ResizeHandle * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ResizeHandle::mouseMoveSignal)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (ResizeHandle::*_t)(QGraphicsSceneMouseEvent * , ResizeHandle * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ResizeHandle::mouseReleaseSignal)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (ResizeHandle::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ResizeHandle::zoomChangedSignal)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject ResizeHandle::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ResizeHandle.data,
      qt_meta_data_ResizeHandle,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ResizeHandle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ResizeHandle::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ResizeHandle.stringdata0))
        return static_cast<void*>(const_cast< ResizeHandle*>(this));
    if (!strcmp(_clname, "QGraphicsPixmapItem"))
        return static_cast< QGraphicsPixmapItem*>(const_cast< ResizeHandle*>(this));
    return QObject::qt_metacast(_clname);
}

int ResizeHandle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void ResizeHandle::mousePressSignal(QGraphicsSceneMouseEvent * _t1, ResizeHandle * _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ResizeHandle::mouseMoveSignal(QGraphicsSceneMouseEvent * _t1, ResizeHandle * _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ResizeHandle::mouseReleaseSignal(QGraphicsSceneMouseEvent * _t1, ResizeHandle * _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ResizeHandle::zoomChangedSignal(double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
