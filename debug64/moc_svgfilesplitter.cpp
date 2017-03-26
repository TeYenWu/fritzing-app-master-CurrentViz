/****************************************************************************
** Meta object code from reading C++ file 'svgfilesplitter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/svg/svgfilesplitter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'svgfilesplitter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SvgFileSplitter_t {
    QByteArrayData data[12];
    char stringdata0[156];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SvgFileSplitter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SvgFileSplitter_t qt_meta_stringdata_SvgFileSplitter = {
    {
QT_MOC_LITERAL(0, 0, 15), // "SvgFileSplitter"
QT_MOC_LITERAL(1, 16, 20), // "normalizeCommandSlot"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 7), // "command"
QT_MOC_LITERAL(4, 46, 8), // "relative"
QT_MOC_LITERAL(5, 55, 14), // "QList<double>&"
QT_MOC_LITERAL(6, 70, 4), // "args"
QT_MOC_LITERAL(7, 75, 8), // "userData"
QT_MOC_LITERAL(8, 84, 16), // "shiftCommandSlot"
QT_MOC_LITERAL(9, 101, 17), // "rotateCommandSlot"
QT_MOC_LITERAL(10, 119, 22), // "painterPathCommandSlot"
QT_MOC_LITERAL(11, 142, 13) // "convertHVSlot"

    },
    "SvgFileSplitter\0normalizeCommandSlot\0"
    "\0command\0relative\0QList<double>&\0args\0"
    "userData\0shiftCommandSlot\0rotateCommandSlot\0"
    "painterPathCommandSlot\0convertHVSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SvgFileSplitter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    4,   39,    2, 0x09 /* Protected */,
       8,    4,   48,    2, 0x09 /* Protected */,
       9,    4,   57,    2, 0x09 /* Protected */,
      10,    4,   66,    2, 0x09 /* Protected */,
      11,    4,   75,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::QChar, QMetaType::Bool, 0x80000000 | 5, QMetaType::VoidStar,    3,    4,    6,    7,
    QMetaType::Void, QMetaType::QChar, QMetaType::Bool, 0x80000000 | 5, QMetaType::VoidStar,    3,    4,    6,    7,
    QMetaType::Void, QMetaType::QChar, QMetaType::Bool, 0x80000000 | 5, QMetaType::VoidStar,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::QChar, QMetaType::Bool, 0x80000000 | 5, QMetaType::VoidStar,    3,    4,    6,    7,
    QMetaType::Void, QMetaType::QChar, QMetaType::Bool, 0x80000000 | 5, QMetaType::VoidStar,    3,    4,    6,    7,

       0        // eod
};

void SvgFileSplitter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SvgFileSplitter *_t = static_cast<SvgFileSplitter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->normalizeCommandSlot((*reinterpret_cast< QChar(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< QList<double>(*)>(_a[3])),(*reinterpret_cast< void*(*)>(_a[4]))); break;
        case 1: _t->shiftCommandSlot((*reinterpret_cast< QChar(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< QList<double>(*)>(_a[3])),(*reinterpret_cast< void*(*)>(_a[4]))); break;
        case 2: _t->rotateCommandSlot((*reinterpret_cast< QChar(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< QList<double>(*)>(_a[3])),(*reinterpret_cast< void*(*)>(_a[4]))); break;
        case 3: _t->painterPathCommandSlot((*reinterpret_cast< QChar(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< QList<double>(*)>(_a[3])),(*reinterpret_cast< void*(*)>(_a[4]))); break;
        case 4: _t->convertHVSlot((*reinterpret_cast< QChar(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< QList<double>(*)>(_a[3])),(*reinterpret_cast< void*(*)>(_a[4]))); break;
        default: ;
        }
    }
}

const QMetaObject SvgFileSplitter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SvgFileSplitter.data,
      qt_meta_data_SvgFileSplitter,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SvgFileSplitter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SvgFileSplitter::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SvgFileSplitter.stringdata0))
        return static_cast<void*>(const_cast< SvgFileSplitter*>(this));
    return QObject::qt_metacast(_clname);
}

int SvgFileSplitter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
