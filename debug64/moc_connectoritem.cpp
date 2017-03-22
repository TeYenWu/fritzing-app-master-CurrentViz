/****************************************************************************
** Meta object code from reading C++ file 'connectoritem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/connectors/connectoritem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'connectoritem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ConnectorItemAction_t {
    QByteArrayData data[1];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ConnectorItemAction_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ConnectorItemAction_t qt_meta_stringdata_ConnectorItemAction = {
    {
QT_MOC_LITERAL(0, 0, 19) // "ConnectorItemAction"

    },
    "ConnectorItemAction"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ConnectorItemAction[] = {

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

void ConnectorItemAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject ConnectorItemAction::staticMetaObject = {
    { &QAction::staticMetaObject, qt_meta_stringdata_ConnectorItemAction.data,
      qt_meta_data_ConnectorItemAction,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ConnectorItemAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ConnectorItemAction::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ConnectorItemAction.stringdata0))
        return static_cast<void*>(const_cast< ConnectorItemAction*>(this));
    return QAction::qt_metacast(_clname);
}

int ConnectorItemAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAction::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_ConnectorItem_t {
    QByteArrayData data[1];
    char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ConnectorItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ConnectorItem_t qt_meta_stringdata_ConnectorItem = {
    {
QT_MOC_LITERAL(0, 0, 13) // "ConnectorItem"

    },
    "ConnectorItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ConnectorItem[] = {

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

void ConnectorItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject ConnectorItem::staticMetaObject = {
    { &NonConnectorItem::staticMetaObject, qt_meta_stringdata_ConnectorItem.data,
      qt_meta_data_ConnectorItem,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ConnectorItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ConnectorItem::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ConnectorItem.stringdata0))
        return static_cast<void*>(const_cast< ConnectorItem*>(this));
    if (!strcmp(_clname, "CursorKeyListener"))
        return static_cast< CursorKeyListener*>(const_cast< ConnectorItem*>(this));
    return NonConnectorItem::qt_metacast(_clname);
}

int ConnectorItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = NonConnectorItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
