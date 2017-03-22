/****************************************************************************
** Meta object code from reading C++ file 'note.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/items/note.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'note.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Note_t {
    QByteArrayData data[17];
    char stringdata0[240];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Note_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Note_t qt_meta_stringdata_Note = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Note"
QT_MOC_LITERAL(1, 5, 18), // "contentsChangeSlot"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 8), // "position"
QT_MOC_LITERAL(4, 34, 10), // "charsAdded"
QT_MOC_LITERAL(5, 45, 12), // "charsRemoved"
QT_MOC_LITERAL(6, 58, 19), // "contentsChangedSlot"
QT_MOC_LITERAL(7, 78, 10), // "linkDialog"
QT_MOC_LITERAL(8, 89, 21), // "handleZoomChangedSlot"
QT_MOC_LITERAL(9, 111, 5), // "scale"
QT_MOC_LITERAL(10, 117, 20), // "handleMousePressSlot"
QT_MOC_LITERAL(11, 138, 25), // "QGraphicsSceneMouseEvent*"
QT_MOC_LITERAL(12, 164, 5), // "event"
QT_MOC_LITERAL(13, 170, 13), // "ResizeHandle*"
QT_MOC_LITERAL(14, 184, 12), // "resizeHandle"
QT_MOC_LITERAL(15, 197, 19), // "handleMouseMoveSlot"
QT_MOC_LITERAL(16, 217, 22) // "handleMouseReleaseSlot"

    },
    "Note\0contentsChangeSlot\0\0position\0"
    "charsAdded\0charsRemoved\0contentsChangedSlot\0"
    "linkDialog\0handleZoomChangedSlot\0scale\0"
    "handleMousePressSlot\0QGraphicsSceneMouseEvent*\0"
    "event\0ResizeHandle*\0resizeHandle\0"
    "handleMouseMoveSlot\0handleMouseReleaseSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Note[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   49,    2, 0x09 /* Protected */,
       6,    0,   56,    2, 0x09 /* Protected */,
       7,    0,   57,    2, 0x09 /* Protected */,
       8,    1,   58,    2, 0x09 /* Protected */,
      10,    2,   61,    2, 0x09 /* Protected */,
      15,    2,   66,    2, 0x09 /* Protected */,
      16,    2,   71,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    3,    4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    9,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 13,   12,   14,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 13,   12,   14,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 13,   12,   14,

       0        // eod
};

void Note::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Note *_t = static_cast<Note *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->contentsChangeSlot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->contentsChangedSlot(); break;
        case 2: _t->linkDialog(); break;
        case 3: _t->handleZoomChangedSlot((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->handleMousePressSlot((*reinterpret_cast< QGraphicsSceneMouseEvent*(*)>(_a[1])),(*reinterpret_cast< ResizeHandle*(*)>(_a[2]))); break;
        case 5: _t->handleMouseMoveSlot((*reinterpret_cast< QGraphicsSceneMouseEvent*(*)>(_a[1])),(*reinterpret_cast< ResizeHandle*(*)>(_a[2]))); break;
        case 6: _t->handleMouseReleaseSlot((*reinterpret_cast< QGraphicsSceneMouseEvent*(*)>(_a[1])),(*reinterpret_cast< ResizeHandle*(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject Note::staticMetaObject = {
    { &ItemBase::staticMetaObject, qt_meta_stringdata_Note.data,
      qt_meta_data_Note,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Note::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Note::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Note.stringdata0))
        return static_cast<void*>(const_cast< Note*>(this));
    return ItemBase::qt_metacast(_clname);
}

int Note::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ItemBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
struct qt_meta_stringdata_LinkDialog_t {
    QByteArrayData data[1];
    char stringdata0[11];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LinkDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LinkDialog_t qt_meta_stringdata_LinkDialog = {
    {
QT_MOC_LITERAL(0, 0, 10) // "LinkDialog"

    },
    "LinkDialog"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LinkDialog[] = {

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

void LinkDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject LinkDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_LinkDialog.data,
      qt_meta_data_LinkDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LinkDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LinkDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LinkDialog.stringdata0))
        return static_cast<void*>(const_cast< LinkDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int LinkDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
