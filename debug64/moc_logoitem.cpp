/****************************************************************************
** Meta object code from reading C++ file 'logoitem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/items/logoitem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'logoitem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_LogoItem_t {
    QByteArrayData data[5];
    char stringdata0[43];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LogoItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LogoItem_t qt_meta_stringdata_LogoItem = {
    {
QT_MOC_LITERAL(0, 0, 8), // "LogoItem"
QT_MOC_LITERAL(1, 9, 9), // "logoEntry"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 10), // "widthEntry"
QT_MOC_LITERAL(4, 31, 11) // "heightEntry"

    },
    "LogoItem\0logoEntry\0\0widthEntry\0"
    "heightEntry"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LogoItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x09 /* Protected */,
       3,    0,   30,    2, 0x09 /* Protected */,
       4,    0,   31,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void LogoItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LogoItem *_t = static_cast<LogoItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->logoEntry(); break;
        case 1: _t->widthEntry(); break;
        case 2: _t->heightEntry(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject LogoItem::staticMetaObject = {
    { &ResizableBoard::staticMetaObject, qt_meta_stringdata_LogoItem.data,
      qt_meta_data_LogoItem,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LogoItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LogoItem::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LogoItem.stringdata0))
        return static_cast<void*>(const_cast< LogoItem*>(this));
    return ResizableBoard::qt_metacast(_clname);
}

int LogoItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ResizableBoard::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_CopperLogoItem_t {
    QByteArrayData data[1];
    char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CopperLogoItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CopperLogoItem_t qt_meta_stringdata_CopperLogoItem = {
    {
QT_MOC_LITERAL(0, 0, 14) // "CopperLogoItem"

    },
    "CopperLogoItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CopperLogoItem[] = {

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

void CopperLogoItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject CopperLogoItem::staticMetaObject = {
    { &LogoItem::staticMetaObject, qt_meta_stringdata_CopperLogoItem.data,
      qt_meta_data_CopperLogoItem,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CopperLogoItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CopperLogoItem::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CopperLogoItem.stringdata0))
        return static_cast<void*>(const_cast< CopperLogoItem*>(this));
    return LogoItem::qt_metacast(_clname);
}

int CopperLogoItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = LogoItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_SchematicLogoItem_t {
    QByteArrayData data[1];
    char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SchematicLogoItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SchematicLogoItem_t qt_meta_stringdata_SchematicLogoItem = {
    {
QT_MOC_LITERAL(0, 0, 17) // "SchematicLogoItem"

    },
    "SchematicLogoItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SchematicLogoItem[] = {

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

void SchematicLogoItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject SchematicLogoItem::staticMetaObject = {
    { &LogoItem::staticMetaObject, qt_meta_stringdata_SchematicLogoItem.data,
      qt_meta_data_SchematicLogoItem,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SchematicLogoItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SchematicLogoItem::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SchematicLogoItem.stringdata0))
        return static_cast<void*>(const_cast< SchematicLogoItem*>(this));
    return LogoItem::qt_metacast(_clname);
}

int SchematicLogoItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = LogoItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_BreadboardLogoItem_t {
    QByteArrayData data[3];
    char stringdata0[36];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BreadboardLogoItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BreadboardLogoItem_t qt_meta_stringdata_BreadboardLogoItem = {
    {
QT_MOC_LITERAL(0, 0, 18), // "BreadboardLogoItem"
QT_MOC_LITERAL(1, 19, 15), // "changeTextColor"
QT_MOC_LITERAL(2, 35, 0) // ""

    },
    "BreadboardLogoItem\0changeTextColor\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BreadboardLogoItem[] = {

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
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void BreadboardLogoItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BreadboardLogoItem *_t = static_cast<BreadboardLogoItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changeTextColor(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject BreadboardLogoItem::staticMetaObject = {
    { &LogoItem::staticMetaObject, qt_meta_stringdata_BreadboardLogoItem.data,
      qt_meta_data_BreadboardLogoItem,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *BreadboardLogoItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BreadboardLogoItem::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_BreadboardLogoItem.stringdata0))
        return static_cast<void*>(const_cast< BreadboardLogoItem*>(this));
    return LogoItem::qt_metacast(_clname);
}

int BreadboardLogoItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = LogoItem::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_BoardLogoItem_t {
    QByteArrayData data[1];
    char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BoardLogoItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BoardLogoItem_t qt_meta_stringdata_BoardLogoItem = {
    {
QT_MOC_LITERAL(0, 0, 13) // "BoardLogoItem"

    },
    "BoardLogoItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BoardLogoItem[] = {

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

void BoardLogoItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject BoardLogoItem::staticMetaObject = {
    { &LogoItem::staticMetaObject, qt_meta_stringdata_BoardLogoItem.data,
      qt_meta_data_BoardLogoItem,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *BoardLogoItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BoardLogoItem::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_BoardLogoItem.stringdata0))
        return static_cast<void*>(const_cast< BoardLogoItem*>(this));
    return LogoItem::qt_metacast(_clname);
}

int BoardLogoItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = LogoItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
