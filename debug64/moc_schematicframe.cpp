/****************************************************************************
** Meta object code from reading C++ file 'schematicframe.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/items/schematicframe.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'schematicframe.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SchematicFrame_t {
    QByteArrayData data[5];
    char stringdata0[51];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SchematicFrame_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SchematicFrame_t qt_meta_stringdata_SchematicFrame = {
    {
QT_MOC_LITERAL(0, 0, 14), // "SchematicFrame"
QT_MOC_LITERAL(1, 15, 9), // "propEntry"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 13), // "dateTimeEntry"
QT_MOC_LITERAL(4, 40, 10) // "sheetEntry"

    },
    "SchematicFrame\0propEntry\0\0dateTimeEntry\0"
    "sheetEntry"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SchematicFrame[] = {

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
       3,    1,   30,    2, 0x09 /* Protected */,
       4,    1,   33,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QDateTime,    2,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void SchematicFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SchematicFrame *_t = static_cast<SchematicFrame *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->propEntry(); break;
        case 1: _t->dateTimeEntry((*reinterpret_cast< QDateTime(*)>(_a[1]))); break;
        case 2: _t->sheetEntry((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject SchematicFrame::staticMetaObject = {
    { &ResizableBoard::staticMetaObject, qt_meta_stringdata_SchematicFrame.data,
      qt_meta_data_SchematicFrame,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SchematicFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SchematicFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SchematicFrame.stringdata0))
        return static_cast<void*>(const_cast< SchematicFrame*>(this));
    return ResizableBoard::qt_metacast(_clname);
}

int SchematicFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
