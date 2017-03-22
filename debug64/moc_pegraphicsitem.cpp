/****************************************************************************
** Meta object code from reading C++ file 'pegraphicsitem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/partseditor/pegraphicsitem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pegraphicsitem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PEGraphicsItem_t {
    QByteArrayData data[13];
    char stringdata0[166];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PEGraphicsItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PEGraphicsItem_t qt_meta_stringdata_PEGraphicsItem = {
    {
QT_MOC_LITERAL(0, 0, 14), // "PEGraphicsItem"
QT_MOC_LITERAL(1, 15, 15), // "highlightSignal"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 15), // "PEGraphicsItem*"
QT_MOC_LITERAL(4, 48, 18), // "mousePressedSignal"
QT_MOC_LITERAL(5, 67, 5), // "bool&"
QT_MOC_LITERAL(6, 73, 6), // "ignore"
QT_MOC_LITERAL(7, 80, 19), // "mouseReleasedSignal"
QT_MOC_LITERAL(8, 100, 18), // "terminalPointMoved"
QT_MOC_LITERAL(9, 119, 20), // "terminalPointChanged"
QT_MOC_LITERAL(10, 140, 6), // "before"
QT_MOC_LITERAL(11, 147, 5), // "after"
QT_MOC_LITERAL(12, 153, 12) // "restoreColor"

    },
    "PEGraphicsItem\0highlightSignal\0\0"
    "PEGraphicsItem*\0mousePressedSignal\0"
    "bool&\0ignore\0mouseReleasedSignal\0"
    "terminalPointMoved\0terminalPointChanged\0"
    "before\0after\0restoreColor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PEGraphicsItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    2,   47,    2, 0x06 /* Public */,
       7,    1,   52,    2, 0x06 /* Public */,
       8,    2,   55,    2, 0x06 /* Public */,
       9,    3,   60,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    0,   67,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    2,    6,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QPointF,    2,    2,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QPointF, QMetaType::QPointF,    2,   10,   11,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void PEGraphicsItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PEGraphicsItem *_t = static_cast<PEGraphicsItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->highlightSignal((*reinterpret_cast< PEGraphicsItem*(*)>(_a[1]))); break;
        case 1: _t->mousePressedSignal((*reinterpret_cast< PEGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->mouseReleasedSignal((*reinterpret_cast< PEGraphicsItem*(*)>(_a[1]))); break;
        case 3: _t->terminalPointMoved((*reinterpret_cast< PEGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< QPointF(*)>(_a[2]))); break;
        case 4: _t->terminalPointChanged((*reinterpret_cast< PEGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< QPointF(*)>(_a[2])),(*reinterpret_cast< QPointF(*)>(_a[3]))); break;
        case 5: _t->restoreColor(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PEGraphicsItem* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PEGraphicsItem* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PEGraphicsItem* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PEGraphicsItem* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PEGraphicsItem* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PEGraphicsItem::*_t)(PEGraphicsItem * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PEGraphicsItem::highlightSignal)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (PEGraphicsItem::*_t)(PEGraphicsItem * , bool & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PEGraphicsItem::mousePressedSignal)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (PEGraphicsItem::*_t)(PEGraphicsItem * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PEGraphicsItem::mouseReleasedSignal)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (PEGraphicsItem::*_t)(PEGraphicsItem * , QPointF );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PEGraphicsItem::terminalPointMoved)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (PEGraphicsItem::*_t)(PEGraphicsItem * , QPointF , QPointF );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PEGraphicsItem::terminalPointChanged)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject PEGraphicsItem::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PEGraphicsItem.data,
      qt_meta_data_PEGraphicsItem,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PEGraphicsItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PEGraphicsItem::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PEGraphicsItem.stringdata0))
        return static_cast<void*>(const_cast< PEGraphicsItem*>(this));
    if (!strcmp(_clname, "QGraphicsRectItem"))
        return static_cast< QGraphicsRectItem*>(const_cast< PEGraphicsItem*>(this));
    return QObject::qt_metacast(_clname);
}

int PEGraphicsItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void PEGraphicsItem::highlightSignal(PEGraphicsItem * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PEGraphicsItem::mousePressedSignal(PEGraphicsItem * _t1, bool & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PEGraphicsItem::mouseReleasedSignal(PEGraphicsItem * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PEGraphicsItem::terminalPointMoved(PEGraphicsItem * _t1, QPointF _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void PEGraphicsItem::terminalPointChanged(PEGraphicsItem * _t1, QPointF _t2, QPointF _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
