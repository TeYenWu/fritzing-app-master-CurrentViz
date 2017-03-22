/****************************************************************************
** Meta object code from reading C++ file 'petoolview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/partseditor/petoolview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'petoolview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PEDoubleSpinBox_t {
    QByteArrayData data[4];
    char stringdata0[39];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PEDoubleSpinBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PEDoubleSpinBox_t qt_meta_stringdata_PEDoubleSpinBox = {
    {
QT_MOC_LITERAL(0, 0, 15), // "PEDoubleSpinBox"
QT_MOC_LITERAL(1, 16, 13), // "getSpinAmount"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 7) // "double&"

    },
    "PEDoubleSpinBox\0getSpinAmount\0\0double&"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PEDoubleSpinBox[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

       0        // eod
};

void PEDoubleSpinBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PEDoubleSpinBox *_t = static_cast<PEDoubleSpinBox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->getSpinAmount((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PEDoubleSpinBox::*_t)(double & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PEDoubleSpinBox::getSpinAmount)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject PEDoubleSpinBox::staticMetaObject = {
    { &QDoubleSpinBox::staticMetaObject, qt_meta_stringdata_PEDoubleSpinBox.data,
      qt_meta_data_PEDoubleSpinBox,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PEDoubleSpinBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PEDoubleSpinBox::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PEDoubleSpinBox.stringdata0))
        return static_cast<void*>(const_cast< PEDoubleSpinBox*>(this));
    return QDoubleSpinBox::qt_metacast(_clname);
}

int PEDoubleSpinBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDoubleSpinBox::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void PEDoubleSpinBox::getSpinAmount(double & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_PEToolView_t {
    QByteArrayData data[28];
    char stringdata0[398];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PEToolView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PEToolView_t qt_meta_stringdata_PEToolView = {
    {
QT_MOC_LITERAL(0, 0, 10), // "PEToolView"
QT_MOC_LITERAL(1, 11, 17), // "switchedConnector"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 16), // "removedConnector"
QT_MOC_LITERAL(4, 47, 11), // "QDomElement"
QT_MOC_LITERAL(5, 59, 15), // "pickModeChanged"
QT_MOC_LITERAL(6, 75, 14), // "busModeChanged"
QT_MOC_LITERAL(7, 90, 20), // "terminalPointChanged"
QT_MOC_LITERAL(8, 111, 3), // "how"
QT_MOC_LITERAL(9, 115, 5), // "coord"
QT_MOC_LITERAL(10, 121, 5), // "value"
QT_MOC_LITERAL(11, 127, 13), // "getSpinAmount"
QT_MOC_LITERAL(12, 141, 7), // "double&"
QT_MOC_LITERAL(13, 149, 24), // "connectorMetadataChanged"
QT_MOC_LITERAL(14, 174, 18), // "ConnectorMetadata*"
QT_MOC_LITERAL(15, 193, 15), // "switchConnector"
QT_MOC_LITERAL(16, 209, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(17, 226, 7), // "current"
QT_MOC_LITERAL(18, 234, 8), // "previous"
QT_MOC_LITERAL(19, 243, 19), // "pickModeChangedSlot"
QT_MOC_LITERAL(20, 263, 18), // "busModeChangedSlot"
QT_MOC_LITERAL(21, 282, 16), // "descriptionEntry"
QT_MOC_LITERAL(22, 299, 9), // "typeEntry"
QT_MOC_LITERAL(23, 309, 9), // "nameEntry"
QT_MOC_LITERAL(24, 319, 25), // "buttonChangeTerminalPoint"
QT_MOC_LITERAL(25, 345, 18), // "terminalPointEntry"
QT_MOC_LITERAL(26, 364, 17), // "getSpinAmountSlot"
QT_MOC_LITERAL(27, 382, 15) // "removeConnector"

    },
    "PEToolView\0switchedConnector\0\0"
    "removedConnector\0QDomElement\0"
    "pickModeChanged\0busModeChanged\0"
    "terminalPointChanged\0how\0coord\0value\0"
    "getSpinAmount\0double&\0connectorMetadataChanged\0"
    "ConnectorMetadata*\0switchConnector\0"
    "QTreeWidgetItem*\0current\0previous\0"
    "pickModeChangedSlot\0busModeChangedSlot\0"
    "descriptionEntry\0typeEntry\0nameEntry\0"
    "buttonChangeTerminalPoint\0terminalPointEntry\0"
    "getSpinAmountSlot\0removeConnector"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PEToolView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  104,    2, 0x06 /* Public */,
       3,    1,  107,    2, 0x06 /* Public */,
       5,    1,  110,    2, 0x06 /* Public */,
       6,    1,  113,    2, 0x06 /* Public */,
       7,    1,  116,    2, 0x06 /* Public */,
       7,    2,  119,    2, 0x06 /* Public */,
      11,    1,  124,    2, 0x06 /* Public */,
      13,    1,  127,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    2,  130,    2, 0x09 /* Protected */,
      19,    0,  135,    2, 0x09 /* Protected */,
      20,    1,  136,    2, 0x09 /* Protected */,
      21,    0,  139,    2, 0x09 /* Protected */,
      22,    0,  140,    2, 0x09 /* Protected */,
      23,    0,  141,    2, 0x09 /* Protected */,
      24,    0,  142,    2, 0x09 /* Protected */,
      25,    0,  143,    2, 0x09 /* Protected */,
      26,    1,  144,    2, 0x09 /* Protected */,
      27,    0,  147,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString, QMetaType::Double,    9,   10,
    QMetaType::Void, 0x80000000 | 12,    2,
    QMetaType::Void, 0x80000000 | 14,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 16, 0x80000000 | 16,   17,   18,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,    2,
    QMetaType::Void,

       0        // eod
};

void PEToolView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PEToolView *_t = static_cast<PEToolView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->switchedConnector((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->removedConnector((*reinterpret_cast< const QDomElement(*)>(_a[1]))); break;
        case 2: _t->pickModeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->busModeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->terminalPointChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->terminalPointChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 6: _t->getSpinAmount((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->connectorMetadataChanged((*reinterpret_cast< ConnectorMetadata*(*)>(_a[1]))); break;
        case 8: _t->switchConnector((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTreeWidgetItem*(*)>(_a[2]))); break;
        case 9: _t->pickModeChangedSlot(); break;
        case 10: _t->busModeChangedSlot((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->descriptionEntry(); break;
        case 12: _t->typeEntry(); break;
        case 13: _t->nameEntry(); break;
        case 14: _t->buttonChangeTerminalPoint(); break;
        case 15: _t->terminalPointEntry(); break;
        case 16: _t->getSpinAmountSlot((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 17: _t->removeConnector(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PEToolView::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PEToolView::switchedConnector)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (PEToolView::*_t)(const QDomElement & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PEToolView::removedConnector)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (PEToolView::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PEToolView::pickModeChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (PEToolView::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PEToolView::busModeChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (PEToolView::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PEToolView::terminalPointChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (PEToolView::*_t)(const QString & , double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PEToolView::terminalPointChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (PEToolView::*_t)(double & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PEToolView::getSpinAmount)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (PEToolView::*_t)(ConnectorMetadata * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PEToolView::connectorMetadataChanged)) {
                *result = 7;
                return;
            }
        }
    }
}

const QMetaObject PEToolView::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_PEToolView.data,
      qt_meta_data_PEToolView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PEToolView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PEToolView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PEToolView.stringdata0))
        return static_cast<void*>(const_cast< PEToolView*>(this));
    return QFrame::qt_metacast(_clname);
}

int PEToolView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void PEToolView::switchedConnector(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PEToolView::removedConnector(const QDomElement & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PEToolView::pickModeChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PEToolView::busModeChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void PEToolView::terminalPointChanged(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void PEToolView::terminalPointChanged(const QString & _t1, double _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void PEToolView::getSpinAmount(double & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void PEToolView::connectorMetadataChanged(ConnectorMetadata * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_END_MOC_NAMESPACE
