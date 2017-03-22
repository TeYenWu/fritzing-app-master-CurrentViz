/****************************************************************************
** Meta object code from reading C++ file 'groundplanegenerator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/svg/groundplanegenerator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'groundplanegenerator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GroundPlaneGenerator_t {
    QByteArrayData data[10];
    char stringdata0[127];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GroundPlaneGenerator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GroundPlaneGenerator_t qt_meta_stringdata_GroundPlaneGenerator = {
    {
QT_MOC_LITERAL(0, 0, 20), // "GroundPlaneGenerator"
QT_MOC_LITERAL(1, 21, 15), // "postImageSignal"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 21), // "GroundPlaneGenerator*"
QT_MOC_LITERAL(4, 60, 7), // "QImage*"
QT_MOC_LITERAL(5, 68, 11), // "copperImage"
QT_MOC_LITERAL(6, 80, 10), // "boardImage"
QT_MOC_LITERAL(7, 91, 14), // "QGraphicsItem*"
QT_MOC_LITERAL(8, 106, 5), // "board"
QT_MOC_LITERAL(9, 112, 14) // "QList<QRectF>*"

    },
    "GroundPlaneGenerator\0postImageSignal\0"
    "\0GroundPlaneGenerator*\0QImage*\0"
    "copperImage\0boardImage\0QGraphicsItem*\0"
    "board\0QList<QRectF>*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GroundPlaneGenerator[] = {

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
       1,    5,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 4, 0x80000000 | 4, 0x80000000 | 7, 0x80000000 | 9,    2,    5,    6,    8,    2,

       0        // eod
};

void GroundPlaneGenerator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GroundPlaneGenerator *_t = static_cast<GroundPlaneGenerator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->postImageSignal((*reinterpret_cast< GroundPlaneGenerator*(*)>(_a[1])),(*reinterpret_cast< QImage*(*)>(_a[2])),(*reinterpret_cast< QImage*(*)>(_a[3])),(*reinterpret_cast< QGraphicsItem*(*)>(_a[4])),(*reinterpret_cast< QList<QRectF>*(*)>(_a[5]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< GroundPlaneGenerator* >(); break;
            case 3:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGraphicsItem* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (GroundPlaneGenerator::*_t)(GroundPlaneGenerator * , QImage * , QImage * , QGraphicsItem * , QList<QRectF> * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GroundPlaneGenerator::postImageSignal)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject GroundPlaneGenerator::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_GroundPlaneGenerator.data,
      qt_meta_data_GroundPlaneGenerator,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *GroundPlaneGenerator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GroundPlaneGenerator::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_GroundPlaneGenerator.stringdata0))
        return static_cast<void*>(const_cast< GroundPlaneGenerator*>(this));
    return QObject::qt_metacast(_clname);
}

int GroundPlaneGenerator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void GroundPlaneGenerator::postImageSignal(GroundPlaneGenerator * _t1, QImage * _t2, QImage * _t3, QGraphicsItem * _t4, QList<QRectF> * _t5)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
