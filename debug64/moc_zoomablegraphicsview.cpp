/****************************************************************************
** Meta object code from reading C++ file 'zoomablegraphicsview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/sketch/zoomablegraphicsview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'zoomablegraphicsview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ZoomableGraphicsView_t {
    QByteArrayData data[6];
    char stringdata0[66];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ZoomableGraphicsView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ZoomableGraphicsView_t qt_meta_stringdata_ZoomableGraphicsView = {
    {
QT_MOC_LITERAL(0, 0, 20), // "ZoomableGraphicsView"
QT_MOC_LITERAL(1, 21, 11), // "zoomChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 4), // "zoom"
QT_MOC_LITERAL(4, 39, 14), // "zoomOutOfRange"
QT_MOC_LITERAL(5, 54, 11) // "wheelSignal"

    },
    "ZoomableGraphicsView\0zoomChanged\0\0"
    "zoom\0zoomOutOfRange\0wheelSignal"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ZoomableGraphicsView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    1,   32,    2, 0x06 /* Public */,
       5,    0,   35,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void,

       0        // eod
};

void ZoomableGraphicsView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ZoomableGraphicsView *_t = static_cast<ZoomableGraphicsView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->zoomChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->zoomOutOfRange((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->wheelSignal(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ZoomableGraphicsView::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ZoomableGraphicsView::zoomChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ZoomableGraphicsView::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ZoomableGraphicsView::zoomOutOfRange)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (ZoomableGraphicsView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ZoomableGraphicsView::wheelSignal)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject ZoomableGraphicsView::staticMetaObject = {
    { &QGraphicsView::staticMetaObject, qt_meta_stringdata_ZoomableGraphicsView.data,
      qt_meta_data_ZoomableGraphicsView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ZoomableGraphicsView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ZoomableGraphicsView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ZoomableGraphicsView.stringdata0))
        return static_cast<void*>(const_cast< ZoomableGraphicsView*>(this));
    return QGraphicsView::qt_metacast(_clname);
}

int ZoomableGraphicsView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void ZoomableGraphicsView::zoomChanged(double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ZoomableGraphicsView::zoomOutOfRange(double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ZoomableGraphicsView::wheelSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
