/****************************************************************************
** Meta object code from reading C++ file 'autorouter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/autoroute/autorouter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'autorouter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Autorouter_t {
    QByteArrayData data[17];
    char stringdata0[233];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Autorouter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Autorouter_t qt_meta_stringdata_Autorouter = {
    {
QT_MOC_LITERAL(0, 0, 10), // "Autorouter"
QT_MOC_LITERAL(1, 11, 18), // "setMaximumProgress"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 16), // "setProgressValue"
QT_MOC_LITERAL(4, 48, 14), // "wantTopVisible"
QT_MOC_LITERAL(5, 63, 17), // "wantBottomVisible"
QT_MOC_LITERAL(6, 81, 15), // "wantBothVisible"
QT_MOC_LITERAL(7, 97, 18), // "setProgressMessage"
QT_MOC_LITERAL(8, 116, 19), // "setProgressMessage2"
QT_MOC_LITERAL(9, 136, 15), // "setCycleMessage"
QT_MOC_LITERAL(10, 152, 13), // "setCycleCount"
QT_MOC_LITERAL(11, 166, 14), // "disableButtons"
QT_MOC_LITERAL(12, 181, 6), // "cancel"
QT_MOC_LITERAL(13, 188, 11), // "cancelTrace"
QT_MOC_LITERAL(14, 200, 11), // "stopTracing"
QT_MOC_LITERAL(15, 212, 7), // "useBest"
QT_MOC_LITERAL(16, 220, 12) // "setMaxCycles"

    },
    "Autorouter\0setMaximumProgress\0\0"
    "setProgressValue\0wantTopVisible\0"
    "wantBottomVisible\0wantBothVisible\0"
    "setProgressMessage\0setProgressMessage2\0"
    "setCycleMessage\0setCycleCount\0"
    "disableButtons\0cancel\0cancelTrace\0"
    "stopTracing\0useBest\0setMaxCycles"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Autorouter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x06 /* Public */,
       3,    1,   92,    2, 0x06 /* Public */,
       4,    0,   95,    2, 0x06 /* Public */,
       5,    0,   96,    2, 0x06 /* Public */,
       6,    0,   97,    2, 0x06 /* Public */,
       7,    1,   98,    2, 0x06 /* Public */,
       8,    1,  101,    2, 0x06 /* Public */,
       9,    1,  104,    2, 0x06 /* Public */,
      10,    1,  107,    2, 0x06 /* Public */,
      11,    0,  110,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    0,  111,    2, 0x0a /* Public */,
      13,    0,  112,    2, 0x0a /* Public */,
      14,    0,  113,    2, 0x0a /* Public */,
      15,    0,  114,    2, 0x0a /* Public */,
      16,    1,  115,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void Autorouter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Autorouter *_t = static_cast<Autorouter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setMaximumProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setProgressValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->wantTopVisible(); break;
        case 3: _t->wantBottomVisible(); break;
        case 4: _t->wantBothVisible(); break;
        case 5: _t->setProgressMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->setProgressMessage2((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->setCycleMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->setCycleCount((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->disableButtons(); break;
        case 10: _t->cancel(); break;
        case 11: _t->cancelTrace(); break;
        case 12: _t->stopTracing(); break;
        case 13: _t->useBest(); break;
        case 14: _t->setMaxCycles((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Autorouter::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Autorouter::setMaximumProgress)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Autorouter::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Autorouter::setProgressValue)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Autorouter::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Autorouter::wantTopVisible)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Autorouter::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Autorouter::wantBottomVisible)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (Autorouter::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Autorouter::wantBothVisible)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (Autorouter::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Autorouter::setProgressMessage)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (Autorouter::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Autorouter::setProgressMessage2)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (Autorouter::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Autorouter::setCycleMessage)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (Autorouter::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Autorouter::setCycleCount)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (Autorouter::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Autorouter::disableButtons)) {
                *result = 9;
                return;
            }
        }
    }
}

const QMetaObject Autorouter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Autorouter.data,
      qt_meta_data_Autorouter,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Autorouter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Autorouter::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Autorouter.stringdata0))
        return static_cast<void*>(const_cast< Autorouter*>(this));
    return QObject::qt_metacast(_clname);
}

int Autorouter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void Autorouter::setMaximumProgress(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Autorouter::setProgressValue(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Autorouter::wantTopVisible()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void Autorouter::wantBottomVisible()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void Autorouter::wantBothVisible()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void Autorouter::setProgressMessage(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Autorouter::setProgressMessage2(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Autorouter::setCycleMessage(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Autorouter::setCycleCount(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Autorouter::disableButtons()
{
    QMetaObject::activate(this, &staticMetaObject, 9, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
