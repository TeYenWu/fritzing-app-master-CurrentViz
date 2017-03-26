/****************************************************************************
** Meta object code from reading C++ file 'drc.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/autoroute/drc.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'drc.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DRC_t {
    QByteArrayData data[10];
    char stringdata0[129];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DRC_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DRC_t qt_meta_stringdata_DRC = {
    {
QT_MOC_LITERAL(0, 0, 3), // "DRC"
QT_MOC_LITERAL(1, 4, 12), // "hideProgress"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 18), // "setMaximumProgress"
QT_MOC_LITERAL(4, 37, 16), // "setProgressValue"
QT_MOC_LITERAL(5, 54, 14), // "wantTopVisible"
QT_MOC_LITERAL(6, 69, 17), // "wantBottomVisible"
QT_MOC_LITERAL(7, 87, 15), // "wantBothVisible"
QT_MOC_LITERAL(8, 103, 18), // "setProgressMessage"
QT_MOC_LITERAL(9, 122, 6) // "cancel"

    },
    "DRC\0hideProgress\0\0setMaximumProgress\0"
    "setProgressValue\0wantTopVisible\0"
    "wantBottomVisible\0wantBothVisible\0"
    "setProgressMessage\0cancel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DRC[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    1,   55,    2, 0x06 /* Public */,
       4,    1,   58,    2, 0x06 /* Public */,
       5,    0,   61,    2, 0x06 /* Public */,
       6,    0,   62,    2, 0x06 /* Public */,
       7,    0,   63,    2, 0x06 /* Public */,
       8,    1,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   67,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void DRC::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DRC *_t = static_cast<DRC *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->hideProgress(); break;
        case 1: _t->setMaximumProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setProgressValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->wantTopVisible(); break;
        case 4: _t->wantBottomVisible(); break;
        case 5: _t->wantBothVisible(); break;
        case 6: _t->setProgressMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->cancel(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (DRC::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DRC::hideProgress)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (DRC::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DRC::setMaximumProgress)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (DRC::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DRC::setProgressValue)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (DRC::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DRC::wantTopVisible)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (DRC::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DRC::wantBottomVisible)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (DRC::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DRC::wantBothVisible)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (DRC::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&DRC::setProgressMessage)) {
                *result = 6;
                return;
            }
        }
    }
}

const QMetaObject DRC::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DRC.data,
      qt_meta_data_DRC,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DRC::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DRC::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DRC.stringdata0))
        return static_cast<void*>(const_cast< DRC*>(this));
    return QObject::qt_metacast(_clname);
}

int DRC::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void DRC::hideProgress()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void DRC::setMaximumProgress(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DRC::setProgressValue(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DRC::wantTopVisible()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void DRC::wantBottomVisible()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void DRC::wantBothVisible()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void DRC::setProgressMessage(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
struct qt_meta_stringdata_DRCResultsDialog_t {
    QByteArrayData data[5];
    char stringdata0[60];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DRCResultsDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DRCResultsDialog_t qt_meta_stringdata_DRCResultsDialog = {
    {
QT_MOC_LITERAL(0, 0, 16), // "DRCResultsDialog"
QT_MOC_LITERAL(1, 17, 11), // "pressedSlot"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(4, 47, 12) // "releasedSlot"

    },
    "DRCResultsDialog\0pressedSlot\0\0"
    "QListWidgetItem*\0releasedSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DRCResultsDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x09 /* Protected */,
       4,    1,   27,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,

       0        // eod
};

void DRCResultsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DRCResultsDialog *_t = static_cast<DRCResultsDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pressedSlot((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 1: _t->releasedSlot((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject DRCResultsDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DRCResultsDialog.data,
      qt_meta_data_DRCResultsDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DRCResultsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DRCResultsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DRCResultsDialog.stringdata0))
        return static_cast<void*>(const_cast< DRCResultsDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int DRCResultsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
