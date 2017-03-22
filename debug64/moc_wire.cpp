/****************************************************************************
** Meta object code from reading C++ file 'wire.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/items/wire.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wire.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WireAction_t {
    QByteArrayData data[1];
    char stringdata0[11];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WireAction_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WireAction_t qt_meta_stringdata_WireAction = {
    {
QT_MOC_LITERAL(0, 0, 10) // "WireAction"

    },
    "WireAction"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WireAction[] = {

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

void WireAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject WireAction::staticMetaObject = {
    { &QAction::staticMetaObject, qt_meta_stringdata_WireAction.data,
      qt_meta_data_WireAction,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WireAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WireAction::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WireAction.stringdata0))
        return static_cast<void*>(const_cast< WireAction*>(this));
    return QAction::qt_metacast(_clname);
}

int WireAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAction::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_Wire_t {
    QByteArrayData data[23];
    char stringdata0[232];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Wire_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Wire_t qt_meta_stringdata_Wire = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Wire"
QT_MOC_LITERAL(1, 5, 17), // "wireChangedSignal"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 5), // "Wire*"
QT_MOC_LITERAL(4, 30, 2), // "me"
QT_MOC_LITERAL(5, 33, 7), // "oldLine"
QT_MOC_LITERAL(6, 41, 7), // "newLine"
QT_MOC_LITERAL(7, 49, 6), // "oldPos"
QT_MOC_LITERAL(8, 56, 6), // "newPos"
QT_MOC_LITERAL(9, 63, 14), // "ConnectorItem*"
QT_MOC_LITERAL(10, 78, 4), // "from"
QT_MOC_LITERAL(11, 83, 2), // "to"
QT_MOC_LITERAL(12, 86, 22), // "wireChangedCurveSignal"
QT_MOC_LITERAL(13, 109, 13), // "const Bezier*"
QT_MOC_LITERAL(14, 123, 4), // "oldB"
QT_MOC_LITERAL(15, 128, 4), // "newB"
QT_MOC_LITERAL(16, 133, 16), // "triggerFirstTime"
QT_MOC_LITERAL(17, 150, 15), // "wireSplitSignal"
QT_MOC_LITERAL(18, 166, 14), // "wireJoinSignal"
QT_MOC_LITERAL(19, 181, 20), // "clickedConnectorItem"
QT_MOC_LITERAL(20, 202, 10), // "colorEntry"
QT_MOC_LITERAL(21, 213, 4), // "text"
QT_MOC_LITERAL(22, 218, 13) // "setBandedProp"

    },
    "Wire\0wireChangedSignal\0\0Wire*\0me\0"
    "oldLine\0newLine\0oldPos\0newPos\0"
    "ConnectorItem*\0from\0to\0wireChangedCurveSignal\0"
    "const Bezier*\0oldB\0newB\0triggerFirstTime\0"
    "wireSplitSignal\0wireJoinSignal\0"
    "clickedConnectorItem\0colorEntry\0text\0"
    "setBandedProp"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Wire[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    7,   44,    2, 0x06 /* Public */,
      12,    4,   59,    2, 0x06 /* Public */,
      17,    4,   68,    2, 0x06 /* Public */,
      18,    2,   77,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      20,    1,   82,    2, 0x09 /* Protected */,
      22,    1,   85,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QLineF, QMetaType::QLineF, QMetaType::QPointF, QMetaType::QPointF, 0x80000000 | 9, 0x80000000 | 9,    4,    5,    6,    7,    8,   10,   11,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 13, 0x80000000 | 13, QMetaType::Bool,    4,   14,   15,   16,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QPointF, QMetaType::QPointF, QMetaType::QLineF,    4,    8,    7,    5,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 9,    4,   19,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

void Wire::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Wire *_t = static_cast<Wire *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->wireChangedSignal((*reinterpret_cast< Wire*(*)>(_a[1])),(*reinterpret_cast< const QLineF(*)>(_a[2])),(*reinterpret_cast< const QLineF(*)>(_a[3])),(*reinterpret_cast< QPointF(*)>(_a[4])),(*reinterpret_cast< QPointF(*)>(_a[5])),(*reinterpret_cast< ConnectorItem*(*)>(_a[6])),(*reinterpret_cast< ConnectorItem*(*)>(_a[7]))); break;
        case 1: _t->wireChangedCurveSignal((*reinterpret_cast< Wire*(*)>(_a[1])),(*reinterpret_cast< const Bezier*(*)>(_a[2])),(*reinterpret_cast< const Bezier*(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 2: _t->wireSplitSignal((*reinterpret_cast< Wire*(*)>(_a[1])),(*reinterpret_cast< QPointF(*)>(_a[2])),(*reinterpret_cast< QPointF(*)>(_a[3])),(*reinterpret_cast< const QLineF(*)>(_a[4]))); break;
        case 3: _t->wireJoinSignal((*reinterpret_cast< Wire*(*)>(_a[1])),(*reinterpret_cast< ConnectorItem*(*)>(_a[2]))); break;
        case 4: _t->colorEntry((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->setBandedProp((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Wire* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Wire* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Wire* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Wire* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Wire::*_t)(Wire * , const QLineF & , const QLineF & , QPointF , QPointF , ConnectorItem * , ConnectorItem * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Wire::wireChangedSignal)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Wire::*_t)(Wire * , const Bezier * , const Bezier * , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Wire::wireChangedCurveSignal)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Wire::*_t)(Wire * , QPointF , QPointF , const QLineF & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Wire::wireSplitSignal)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Wire::*_t)(Wire * , ConnectorItem * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Wire::wireJoinSignal)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject Wire::staticMetaObject = {
    { &ItemBase::staticMetaObject, qt_meta_stringdata_Wire.data,
      qt_meta_data_Wire,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Wire::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Wire::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Wire.stringdata0))
        return static_cast<void*>(const_cast< Wire*>(this));
    if (!strcmp(_clname, "CursorKeyListener"))
        return static_cast< CursorKeyListener*>(const_cast< Wire*>(this));
    return ItemBase::qt_metacast(_clname);
}

int Wire::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ItemBase::qt_metacall(_c, _id, _a);
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
void Wire::wireChangedSignal(Wire * _t1, const QLineF & _t2, const QLineF & _t3, QPointF _t4, QPointF _t5, ConnectorItem * _t6, ConnectorItem * _t7)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Wire::wireChangedCurveSignal(Wire * _t1, const Bezier * _t2, const Bezier * _t3, bool _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Wire::wireSplitSignal(Wire * _t1, QPointF _t2, QPointF _t3, const QLineF & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Wire::wireJoinSignal(Wire * _t1, ConnectorItem * _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
