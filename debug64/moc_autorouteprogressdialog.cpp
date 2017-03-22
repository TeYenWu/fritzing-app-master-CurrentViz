/****************************************************************************
** Meta object code from reading C++ file 'autorouteprogressdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/autoroute/autorouteprogressdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'autorouteprogressdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AutorouteProgressDialog_t {
    QByteArrayData data[20];
    char stringdata0[210];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AutorouteProgressDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AutorouteProgressDialog_t qt_meta_stringdata_AutorouteProgressDialog = {
    {
QT_MOC_LITERAL(0, 0, 23), // "AutorouteProgressDialog"
QT_MOC_LITERAL(1, 24, 4), // "skip"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 6), // "cancel"
QT_MOC_LITERAL(4, 37, 4), // "stop"
QT_MOC_LITERAL(5, 42, 4), // "best"
QT_MOC_LITERAL(6, 47, 10), // "spinChange"
QT_MOC_LITERAL(7, 58, 10), // "setMinimum"
QT_MOC_LITERAL(8, 69, 10), // "setMaximum"
QT_MOC_LITERAL(9, 80, 8), // "setValue"
QT_MOC_LITERAL(10, 89, 8), // "sendSkip"
QT_MOC_LITERAL(11, 98, 10), // "sendCancel"
QT_MOC_LITERAL(12, 109, 8), // "sendStop"
QT_MOC_LITERAL(13, 118, 12), // "setSpinLabel"
QT_MOC_LITERAL(14, 131, 10), // "setMessage"
QT_MOC_LITERAL(15, 142, 11), // "setMessage2"
QT_MOC_LITERAL(16, 154, 12), // "setSpinValue"
QT_MOC_LITERAL(17, 167, 14), // "disableButtons"
QT_MOC_LITERAL(18, 182, 8), // "sendBest"
QT_MOC_LITERAL(19, 191, 18) // "internalSpinChange"

    },
    "AutorouteProgressDialog\0skip\0\0cancel\0"
    "stop\0best\0spinChange\0setMinimum\0"
    "setMaximum\0setValue\0sendSkip\0sendCancel\0"
    "sendStop\0setSpinLabel\0setMessage\0"
    "setMessage2\0setSpinValue\0disableButtons\0"
    "sendBest\0internalSpinChange"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AutorouteProgressDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  104,    2, 0x06 /* Public */,
       3,    0,  105,    2, 0x06 /* Public */,
       4,    0,  106,    2, 0x06 /* Public */,
       5,    0,  107,    2, 0x06 /* Public */,
       6,    1,  108,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,  111,    2, 0x0a /* Public */,
       8,    1,  114,    2, 0x0a /* Public */,
       9,    1,  117,    2, 0x0a /* Public */,
      10,    0,  120,    2, 0x0a /* Public */,
      11,    0,  121,    2, 0x0a /* Public */,
      12,    0,  122,    2, 0x0a /* Public */,
      13,    1,  123,    2, 0x0a /* Public */,
      14,    1,  126,    2, 0x0a /* Public */,
      15,    1,  129,    2, 0x0a /* Public */,
      16,    1,  132,    2, 0x0a /* Public */,
      17,    0,  135,    2, 0x0a /* Public */,
      18,    0,  136,    2, 0x0a /* Public */,
      19,    1,  137,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
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
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void AutorouteProgressDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AutorouteProgressDialog *_t = static_cast<AutorouteProgressDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->skip(); break;
        case 1: _t->cancel(); break;
        case 2: _t->stop(); break;
        case 3: _t->best(); break;
        case 4: _t->spinChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setMinimum((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->setMaximum((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->setValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->sendSkip(); break;
        case 9: _t->sendCancel(); break;
        case 10: _t->sendStop(); break;
        case 11: _t->setSpinLabel((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->setMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->setMessage2((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->setSpinValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->disableButtons(); break;
        case 16: _t->sendBest(); break;
        case 17: _t->internalSpinChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AutorouteProgressDialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AutorouteProgressDialog::skip)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (AutorouteProgressDialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AutorouteProgressDialog::cancel)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (AutorouteProgressDialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AutorouteProgressDialog::stop)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (AutorouteProgressDialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AutorouteProgressDialog::best)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (AutorouteProgressDialog::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AutorouteProgressDialog::spinChange)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject AutorouteProgressDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AutorouteProgressDialog.data,
      qt_meta_data_AutorouteProgressDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AutorouteProgressDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AutorouteProgressDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AutorouteProgressDialog.stringdata0))
        return static_cast<void*>(const_cast< AutorouteProgressDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int AutorouteProgressDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void AutorouteProgressDialog::skip()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void AutorouteProgressDialog::cancel()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void AutorouteProgressDialog::stop()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void AutorouteProgressDialog::best()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void AutorouteProgressDialog::spinChange(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
struct qt_meta_stringdata_ArrowButton_t {
    QByteArrayData data[1];
    char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ArrowButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ArrowButton_t qt_meta_stringdata_ArrowButton = {
    {
QT_MOC_LITERAL(0, 0, 11) // "ArrowButton"

    },
    "ArrowButton"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ArrowButton[] = {

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

void ArrowButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject ArrowButton::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_ArrowButton.data,
      qt_meta_data_ArrowButton,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ArrowButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ArrowButton::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ArrowButton.stringdata0))
        return static_cast<void*>(const_cast< ArrowButton*>(this));
    return QLabel::qt_metacast(_clname);
}

int ArrowButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
