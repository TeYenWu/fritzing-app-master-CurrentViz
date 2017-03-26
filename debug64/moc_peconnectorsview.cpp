/****************************************************************************
** Meta object code from reading C++ file 'peconnectorsview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/partseditor/peconnectorsview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'peconnectorsview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PEConnectorsView_t {
    QByteArrayData data[18];
    char stringdata0[296];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PEConnectorsView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PEConnectorsView_t qt_meta_stringdata_PEConnectorsView = {
    {
QT_MOC_LITERAL(0, 0, 16), // "PEConnectorsView"
QT_MOC_LITERAL(1, 17, 24), // "connectorMetadataChanged"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 18), // "ConnectorMetadata*"
QT_MOC_LITERAL(4, 62, 17), // "removedConnectors"
QT_MOC_LITERAL(5, 80, 26), // "QList<ConnectorMetadata*>&"
QT_MOC_LITERAL(6, 107, 21), // "connectorCountChanged"
QT_MOC_LITERAL(7, 129, 21), // "connectorsTypeChanged"
QT_MOC_LITERAL(8, 151, 24), // "Connector::ConnectorType"
QT_MOC_LITERAL(9, 176, 10), // "smdChanged"
QT_MOC_LITERAL(10, 187, 9), // "nameEntry"
QT_MOC_LITERAL(11, 197, 16), // "descriptionEntry"
QT_MOC_LITERAL(12, 214, 9), // "typeEntry"
QT_MOC_LITERAL(13, 224, 19), // "connectorCountEntry"
QT_MOC_LITERAL(14, 244, 15), // "removeConnector"
QT_MOC_LITERAL(15, 260, 12), // "allTypeEntry"
QT_MOC_LITERAL(16, 273, 8), // "smdEntry"
QT_MOC_LITERAL(17, 282, 13) // "uncheckRadios"

    },
    "PEConnectorsView\0connectorMetadataChanged\0"
    "\0ConnectorMetadata*\0removedConnectors\0"
    "QList<ConnectorMetadata*>&\0"
    "connectorCountChanged\0connectorsTypeChanged\0"
    "Connector::ConnectorType\0smdChanged\0"
    "nameEntry\0descriptionEntry\0typeEntry\0"
    "connectorCountEntry\0removeConnector\0"
    "allTypeEntry\0smdEntry\0uncheckRadios"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PEConnectorsView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,
       4,    1,   82,    2, 0x06 /* Public */,
       6,    1,   85,    2, 0x06 /* Public */,
       7,    1,   88,    2, 0x06 /* Public */,
       9,    1,   91,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,   94,    2, 0x09 /* Protected */,
      11,    0,   95,    2, 0x09 /* Protected */,
      12,    0,   96,    2, 0x09 /* Protected */,
      13,    0,   97,    2, 0x09 /* Protected */,
      14,    0,   98,    2, 0x09 /* Protected */,
      15,    0,   99,    2, 0x09 /* Protected */,
      16,    0,  100,    2, 0x09 /* Protected */,
      17,    0,  101,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PEConnectorsView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PEConnectorsView *_t = static_cast<PEConnectorsView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->connectorMetadataChanged((*reinterpret_cast< ConnectorMetadata*(*)>(_a[1]))); break;
        case 1: _t->removedConnectors((*reinterpret_cast< QList<ConnectorMetadata*>(*)>(_a[1]))); break;
        case 2: _t->connectorCountChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->connectorsTypeChanged((*reinterpret_cast< Connector::ConnectorType(*)>(_a[1]))); break;
        case 4: _t->smdChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->nameEntry(); break;
        case 6: _t->descriptionEntry(); break;
        case 7: _t->typeEntry(); break;
        case 8: _t->connectorCountEntry(); break;
        case 9: _t->removeConnector(); break;
        case 10: _t->allTypeEntry(); break;
        case 11: _t->smdEntry(); break;
        case 12: _t->uncheckRadios(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PEConnectorsView::*_t)(ConnectorMetadata * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PEConnectorsView::connectorMetadataChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (PEConnectorsView::*_t)(QList<struct ConnectorMetadata*> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PEConnectorsView::removedConnectors)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (PEConnectorsView::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PEConnectorsView::connectorCountChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (PEConnectorsView::*_t)(Connector::ConnectorType );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PEConnectorsView::connectorsTypeChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (PEConnectorsView::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PEConnectorsView::smdChanged)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject PEConnectorsView::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_PEConnectorsView.data,
      qt_meta_data_PEConnectorsView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PEConnectorsView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PEConnectorsView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PEConnectorsView.stringdata0))
        return static_cast<void*>(const_cast< PEConnectorsView*>(this));
    return QFrame::qt_metacast(_clname);
}

int PEConnectorsView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void PEConnectorsView::connectorMetadataChanged(ConnectorMetadata * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PEConnectorsView::removedConnectors(QList<struct ConnectorMetadata*> & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PEConnectorsView::connectorCountChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PEConnectorsView::connectorsTypeChanged(Connector::ConnectorType _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void PEConnectorsView::smdChanged(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
