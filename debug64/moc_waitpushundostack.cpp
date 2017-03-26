/****************************************************************************
** Meta object code from reading C++ file 'waitpushundostack.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/waitpushundostack.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'waitpushundostack.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WaitPushUndoStack_t {
    QByteArrayData data[1];
    char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WaitPushUndoStack_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WaitPushUndoStack_t qt_meta_stringdata_WaitPushUndoStack = {
    {
QT_MOC_LITERAL(0, 0, 17) // "WaitPushUndoStack"

    },
    "WaitPushUndoStack"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WaitPushUndoStack[] = {

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

void WaitPushUndoStack::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject WaitPushUndoStack::staticMetaObject = {
    { &QUndoStack::staticMetaObject, qt_meta_stringdata_WaitPushUndoStack.data,
      qt_meta_data_WaitPushUndoStack,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WaitPushUndoStack::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WaitPushUndoStack::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WaitPushUndoStack.stringdata0))
        return static_cast<void*>(const_cast< WaitPushUndoStack*>(this));
    return QUndoStack::qt_metacast(_clname);
}

int WaitPushUndoStack::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QUndoStack::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_CommandTimer_t {
    QByteArrayData data[3];
    char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CommandTimer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CommandTimer_t qt_meta_stringdata_CommandTimer = {
    {
QT_MOC_LITERAL(0, 0, 12), // "CommandTimer"
QT_MOC_LITERAL(1, 13, 8), // "timedout"
QT_MOC_LITERAL(2, 22, 0) // ""

    },
    "CommandTimer\0timedout\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CommandTimer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void CommandTimer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CommandTimer *_t = static_cast<CommandTimer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->timedout(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject CommandTimer::staticMetaObject = {
    { &QTimer::staticMetaObject, qt_meta_stringdata_CommandTimer.data,
      qt_meta_data_CommandTimer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CommandTimer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CommandTimer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CommandTimer.stringdata0))
        return static_cast<void*>(const_cast< CommandTimer*>(this));
    return QTimer::qt_metacast(_clname);
}

int CommandTimer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTimer::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
