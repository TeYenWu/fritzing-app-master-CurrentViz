/****************************************************************************
** Meta object code from reading C++ file 'partsbiniconview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/partsbinpalette/partsbiniconview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'partsbiniconview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PartsBinIconView_t {
    QByteArrayData data[15];
    char stringdata0[164];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PartsBinIconView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PartsBinIconView_t qt_meta_stringdata_PartsBinIconView = {
    {
QT_MOC_LITERAL(0, 0, 16), // "PartsBinIconView"
QT_MOC_LITERAL(1, 17, 15), // "informItemMoved"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 9), // "fromIndex"
QT_MOC_LITERAL(4, 44, 7), // "toIndex"
QT_MOC_LITERAL(5, 52, 16), // "selectionChanged"
QT_MOC_LITERAL(6, 69, 5), // "index"
QT_MOC_LITERAL(7, 75, 11), // "settingItem"
QT_MOC_LITERAL(8, 87, 11), // "setSelected"
QT_MOC_LITERAL(9, 99, 8), // "position"
QT_MOC_LITERAL(10, 108, 6), // "doEmit"
QT_MOC_LITERAL(11, 115, 18), // "informNewSelection"
QT_MOC_LITERAL(12, 134, 9), // "itemMoved"
QT_MOC_LITERAL(13, 144, 15), // "showContextMenu"
QT_MOC_LITERAL(14, 160, 3) // "pos"

    },
    "PartsBinIconView\0informItemMoved\0\0"
    "fromIndex\0toIndex\0selectionChanged\0"
    "index\0settingItem\0setSelected\0position\0"
    "doEmit\0informNewSelection\0itemMoved\0"
    "showContextMenu\0pos"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PartsBinIconView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   54,    2, 0x06 /* Public */,
       5,    1,   59,    2, 0x06 /* Public */,
       7,    0,   62,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    2,   63,    2, 0x0a /* Public */,
       8,    1,   68,    2, 0x2a /* Public | MethodCloned */,
      11,    0,   71,    2, 0x0a /* Public */,
      12,    2,   72,    2, 0x0a /* Public */,
      13,    1,   77,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    9,   10,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::QPoint,   14,

       0        // eod
};

void PartsBinIconView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PartsBinIconView *_t = static_cast<PartsBinIconView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->informItemMoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->selectionChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->settingItem(); break;
        case 3: _t->setSelected((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: _t->setSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->informNewSelection(); break;
        case 6: _t->itemMoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->showContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PartsBinIconView::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PartsBinIconView::informItemMoved)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (PartsBinIconView::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PartsBinIconView::selectionChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (PartsBinIconView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PartsBinIconView::settingItem)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject PartsBinIconView::staticMetaObject = {
    { &InfoGraphicsView::staticMetaObject, qt_meta_stringdata_PartsBinIconView.data,
      qt_meta_data_PartsBinIconView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PartsBinIconView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PartsBinIconView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PartsBinIconView.stringdata0))
        return static_cast<void*>(const_cast< PartsBinIconView*>(this));
    if (!strcmp(_clname, "PartsBinView"))
        return static_cast< PartsBinView*>(const_cast< PartsBinIconView*>(this));
    return InfoGraphicsView::qt_metacast(_clname);
}

int PartsBinIconView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = InfoGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void PartsBinIconView::informItemMoved(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PartsBinIconView::selectionChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PartsBinIconView::settingItem()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
