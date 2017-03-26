/****************************************************************************
** Meta object code from reading C++ file 'infographicsview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/sketch/infographicsview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'infographicsview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_InfoGraphicsView_t {
    QByteArrayData data[26];
    char stringdata0[299];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_InfoGraphicsView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_InfoGraphicsView_t qt_meta_stringdata_InfoGraphicsView = {
    {
QT_MOC_LITERAL(0, 0, 16), // "InfoGraphicsView"
QT_MOC_LITERAL(1, 17, 16), // "setVoltageSignal"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 6), // "doEmit"
QT_MOC_LITERAL(4, 42, 10), // "swapSignal"
QT_MOC_LITERAL(5, 53, 6), // "family"
QT_MOC_LITERAL(6, 60, 4), // "prop"
QT_MOC_LITERAL(7, 65, 22), // "QMap<QString,QString>&"
QT_MOC_LITERAL(8, 88, 8), // "propsMap"
QT_MOC_LITERAL(9, 97, 9), // "ItemBase*"
QT_MOC_LITERAL(10, 107, 21), // "changePinLabelsSignal"
QT_MOC_LITERAL(11, 129, 9), // "singleRow"
QT_MOC_LITERAL(12, 139, 19), // "setActiveWireSignal"
QT_MOC_LITERAL(13, 159, 5), // "Wire*"
QT_MOC_LITERAL(14, 165, 28), // "setActiveConnectorItemSignal"
QT_MOC_LITERAL(15, 194, 14), // "ConnectorItem*"
QT_MOC_LITERAL(16, 209, 13), // "newWireSignal"
QT_MOC_LITERAL(17, 223, 10), // "setVoltage"
QT_MOC_LITERAL(18, 234, 11), // "resizeBoard"
QT_MOC_LITERAL(19, 246, 1), // "w"
QT_MOC_LITERAL(20, 248, 1), // "h"
QT_MOC_LITERAL(21, 250, 16), // "setInstanceTitle"
QT_MOC_LITERAL(22, 267, 2), // "id"
QT_MOC_LITERAL(23, 270, 8), // "oldTitle"
QT_MOC_LITERAL(24, 279, 8), // "newTitle"
QT_MOC_LITERAL(25, 288, 10) // "isUndoable"

    },
    "InfoGraphicsView\0setVoltageSignal\0\0"
    "doEmit\0swapSignal\0family\0prop\0"
    "QMap<QString,QString>&\0propsMap\0"
    "ItemBase*\0changePinLabelsSignal\0"
    "singleRow\0setActiveWireSignal\0Wire*\0"
    "setActiveConnectorItemSignal\0"
    "ConnectorItem*\0newWireSignal\0setVoltage\0"
    "resizeBoard\0w\0h\0setInstanceTitle\0id\0"
    "oldTitle\0newTitle\0isUndoable"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InfoGraphicsView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   59,    2, 0x06 /* Public */,
       4,    4,   64,    2, 0x06 /* Public */,
      10,    2,   73,    2, 0x06 /* Public */,
      12,    1,   78,    2, 0x06 /* Public */,
      14,    1,   81,    2, 0x06 /* Public */,
      16,    1,   84,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      17,    2,   87,    2, 0x0a /* Public */,
      18,    3,   92,    2, 0x0a /* Public */,
      21,    5,   99,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Bool,    2,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 7, 0x80000000 | 9,    5,    6,    8,    2,
    QMetaType::Void, 0x80000000 | 9, QMetaType::Bool,    2,   11,
    QMetaType::Void, 0x80000000 | 13,    2,
    QMetaType::Void, 0x80000000 | 15,    2,
    QMetaType::Void, 0x80000000 | 13,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Bool,    2,    3,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Bool,   19,   20,    3,
    QMetaType::Void, QMetaType::Long, QMetaType::QString, QMetaType::QString, QMetaType::Bool, QMetaType::Bool,   22,   23,   24,   25,    3,

       0        // eod
};

void InfoGraphicsView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        InfoGraphicsView *_t = static_cast<InfoGraphicsView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setVoltageSignal((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->swapSignal((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QMap<QString,QString>(*)>(_a[3])),(*reinterpret_cast< ItemBase*(*)>(_a[4]))); break;
        case 2: _t->changePinLabelsSignal((*reinterpret_cast< ItemBase*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->setActiveWireSignal((*reinterpret_cast< Wire*(*)>(_a[1]))); break;
        case 4: _t->setActiveConnectorItemSignal((*reinterpret_cast< ConnectorItem*(*)>(_a[1]))); break;
        case 5: _t->newWireSignal((*reinterpret_cast< Wire*(*)>(_a[1]))); break;
        case 6: _t->setVoltage((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 7: _t->resizeBoard((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 8: _t->setInstanceTitle((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 3:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ItemBase* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ItemBase* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ConnectorItem* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (InfoGraphicsView::*_t)(double , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&InfoGraphicsView::setVoltageSignal)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (InfoGraphicsView::*_t)(const QString & , const QString & , QMap<QString,QString> & , ItemBase * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&InfoGraphicsView::swapSignal)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (InfoGraphicsView::*_t)(ItemBase * , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&InfoGraphicsView::changePinLabelsSignal)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (InfoGraphicsView::*_t)(Wire * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&InfoGraphicsView::setActiveWireSignal)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (InfoGraphicsView::*_t)(ConnectorItem * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&InfoGraphicsView::setActiveConnectorItemSignal)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (InfoGraphicsView::*_t)(Wire * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&InfoGraphicsView::newWireSignal)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject InfoGraphicsView::staticMetaObject = {
    { &ZoomableGraphicsView::staticMetaObject, qt_meta_stringdata_InfoGraphicsView.data,
      qt_meta_data_InfoGraphicsView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *InfoGraphicsView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InfoGraphicsView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_InfoGraphicsView.stringdata0))
        return static_cast<void*>(const_cast< InfoGraphicsView*>(this));
    return ZoomableGraphicsView::qt_metacast(_clname);
}

int InfoGraphicsView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ZoomableGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void InfoGraphicsView::setVoltageSignal(double _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void InfoGraphicsView::swapSignal(const QString & _t1, const QString & _t2, QMap<QString,QString> & _t3, ItemBase * _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void InfoGraphicsView::changePinLabelsSignal(ItemBase * _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void InfoGraphicsView::setActiveWireSignal(Wire * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void InfoGraphicsView::setActiveConnectorItemSignal(ConnectorItem * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void InfoGraphicsView::newWireSignal(Wire * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
