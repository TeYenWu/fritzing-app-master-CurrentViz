/****************************************************************************
** Meta object code from reading C++ file 'svgpathrunner.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/svg/svgpathrunner.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'svgpathrunner.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SVGPathRunner_t {
    QByteArrayData data[8];
    char stringdata0[75];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SVGPathRunner_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SVGPathRunner_t qt_meta_stringdata_SVGPathRunner = {
    {
QT_MOC_LITERAL(0, 0, 13), // "SVGPathRunner"
QT_MOC_LITERAL(1, 14, 13), // "commandSignal"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 7), // "command"
QT_MOC_LITERAL(4, 37, 8), // "relative"
QT_MOC_LITERAL(5, 46, 14), // "QList<double>&"
QT_MOC_LITERAL(6, 61, 4), // "args"
QT_MOC_LITERAL(7, 66, 8) // "userData"

    },
    "SVGPathRunner\0commandSignal\0\0command\0"
    "relative\0QList<double>&\0args\0userData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SVGPathRunner[] = {

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
       1,    4,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QChar, QMetaType::Bool, 0x80000000 | 5, QMetaType::VoidStar,    3,    4,    6,    7,

       0        // eod
};

void SVGPathRunner::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SVGPathRunner *_t = static_cast<SVGPathRunner *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->commandSignal((*reinterpret_cast< QChar(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< QList<double>(*)>(_a[3])),(*reinterpret_cast< void*(*)>(_a[4]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SVGPathRunner::*_t)(QChar , bool , QList<double> & , void * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SVGPathRunner::commandSignal)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject SVGPathRunner::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SVGPathRunner.data,
      qt_meta_data_SVGPathRunner,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SVGPathRunner::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SVGPathRunner::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SVGPathRunner.stringdata0))
        return static_cast<void*>(const_cast< SVGPathRunner*>(this));
    return QObject::qt_metacast(_clname);
}

int SVGPathRunner::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void SVGPathRunner::commandSignal(QChar _t1, bool _t2, QList<double> & _t3, void * _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
