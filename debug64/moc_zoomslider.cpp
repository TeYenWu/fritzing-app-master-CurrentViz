/****************************************************************************
** Meta object code from reading C++ file 'zoomslider.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/utils/zoomslider.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'zoomslider.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ZoomLabel_t {
    QByteArrayData data[4];
    char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ZoomLabel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ZoomLabel_t qt_meta_stringdata_ZoomLabel = {
    {
QT_MOC_LITERAL(0, 0, 9), // "ZoomLabel"
QT_MOC_LITERAL(1, 10, 7), // "clicked"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 6) // "repeat"

    },
    "ZoomLabel\0clicked\0\0repeat"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ZoomLabel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   25,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void ZoomLabel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ZoomLabel *_t = static_cast<ZoomLabel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clicked(); break;
        case 1: _t->repeat(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ZoomLabel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ZoomLabel::clicked)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ZoomLabel::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_ZoomLabel.data,
      qt_meta_data_ZoomLabel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ZoomLabel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ZoomLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ZoomLabel.stringdata0))
        return static_cast<void*>(const_cast< ZoomLabel*>(this));
    return QLabel::qt_metacast(_clname);
}

int ZoomLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void ZoomLabel::clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
struct qt_meta_stringdata_ZoomSlider_t {
    QByteArrayData data[10];
    char stringdata0[110];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ZoomSlider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ZoomSlider_t qt_meta_stringdata_ZoomSlider = {
    {
QT_MOC_LITERAL(0, 0, 10), // "ZoomSlider"
QT_MOC_LITERAL(1, 11, 11), // "zoomChanged"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 7), // "newZoom"
QT_MOC_LITERAL(4, 32, 18), // "sliderValueChanged"
QT_MOC_LITERAL(5, 51, 8), // "newValue"
QT_MOC_LITERAL(6, 60, 16), // "sliderTextEdited"
QT_MOC_LITERAL(7, 77, 7), // "newText"
QT_MOC_LITERAL(8, 85, 12), // "minusClicked"
QT_MOC_LITERAL(9, 98, 11) // "plusClicked"

    },
    "ZoomSlider\0zoomChanged\0\0newZoom\0"
    "sliderValueChanged\0newValue\0"
    "sliderTextEdited\0newText\0minusClicked\0"
    "plusClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ZoomSlider[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   42,    2, 0x09 /* Protected */,
       6,    1,   45,    2, 0x09 /* Protected */,
       8,    0,   48,    2, 0x09 /* Protected */,
       9,    0,   49,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ZoomSlider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ZoomSlider *_t = static_cast<ZoomSlider *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->zoomChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->sliderValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->sliderTextEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->minusClicked(); break;
        case 4: _t->plusClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ZoomSlider::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ZoomSlider::zoomChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject ZoomSlider::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_ZoomSlider.data,
      qt_meta_data_ZoomSlider,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ZoomSlider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ZoomSlider::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ZoomSlider.stringdata0))
        return static_cast<void*>(const_cast< ZoomSlider*>(this));
    return QFrame::qt_metacast(_clname);
}

int ZoomSlider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void ZoomSlider::zoomChanged(double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
