/****************************************************************************
** Meta object code from reading C++ file 'modelbase.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/model/modelbase.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'modelbase.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ModelBase_t {
    QByteArrayData data[19];
    char stringdata0[227];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ModelBase_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ModelBase_t qt_meta_stringdata_ModelBase = {
    {
QT_MOC_LITERAL(0, 0, 9), // "ModelBase"
QT_MOC_LITERAL(1, 10, 11), // "loadedViews"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 10), // "ModelBase*"
QT_MOC_LITERAL(4, 34, 12), // "QDomElement&"
QT_MOC_LITERAL(5, 47, 5), // "views"
QT_MOC_LITERAL(6, 53, 10), // "loadedRoot"
QT_MOC_LITERAL(7, 64, 8), // "fileName"
QT_MOC_LITERAL(8, 73, 4), // "root"
QT_MOC_LITERAL(9, 78, 16), // "loadingInstances"
QT_MOC_LITERAL(10, 95, 9), // "instances"
QT_MOC_LITERAL(11, 105, 15), // "loadingInstance"
QT_MOC_LITERAL(12, 121, 8), // "instance"
QT_MOC_LITERAL(13, 130, 15), // "loadedInstances"
QT_MOC_LITERAL(14, 146, 28), // "obsoleteSMDOrientationSignal"
QT_MOC_LITERAL(15, 175, 19), // "oldSchematicsSignal"
QT_MOC_LITERAL(16, 195, 8), // "filename"
QT_MOC_LITERAL(17, 204, 5), // "bool&"
QT_MOC_LITERAL(18, 210, 16) // "useOldSchematics"

    },
    "ModelBase\0loadedViews\0\0ModelBase*\0"
    "QDomElement&\0views\0loadedRoot\0fileName\0"
    "root\0loadingInstances\0instances\0"
    "loadingInstance\0instance\0loadedInstances\0"
    "obsoleteSMDOrientationSignal\0"
    "oldSchematicsSignal\0filename\0bool&\0"
    "useOldSchematics"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ModelBase[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   49,    2, 0x06 /* Public */,
       6,    3,   54,    2, 0x06 /* Public */,
       9,    2,   61,    2, 0x06 /* Public */,
      11,    2,   66,    2, 0x06 /* Public */,
      13,    2,   71,    2, 0x06 /* Public */,
      14,    0,   76,    2, 0x06 /* Public */,
      15,    2,   77,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 4,    2,    5,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 3, 0x80000000 | 4,    7,    2,    8,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 4,    2,   10,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 4,    2,   12,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 4,    2,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 17,   16,   18,

       0        // eod
};

void ModelBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ModelBase *_t = static_cast<ModelBase *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loadedViews((*reinterpret_cast< ModelBase*(*)>(_a[1])),(*reinterpret_cast< QDomElement(*)>(_a[2]))); break;
        case 1: _t->loadedRoot((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< ModelBase*(*)>(_a[2])),(*reinterpret_cast< QDomElement(*)>(_a[3]))); break;
        case 2: _t->loadingInstances((*reinterpret_cast< ModelBase*(*)>(_a[1])),(*reinterpret_cast< QDomElement(*)>(_a[2]))); break;
        case 3: _t->loadingInstance((*reinterpret_cast< ModelBase*(*)>(_a[1])),(*reinterpret_cast< QDomElement(*)>(_a[2]))); break;
        case 4: _t->loadedInstances((*reinterpret_cast< ModelBase*(*)>(_a[1])),(*reinterpret_cast< QDomElement(*)>(_a[2]))); break;
        case 5: _t->obsoleteSMDOrientationSignal(); break;
        case 6: _t->oldSchematicsSignal((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ModelBase* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ModelBase* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ModelBase* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ModelBase* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ModelBase* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ModelBase::*_t)(ModelBase * , QDomElement & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ModelBase::loadedViews)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ModelBase::*_t)(const QString & , ModelBase * , QDomElement & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ModelBase::loadedRoot)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (ModelBase::*_t)(ModelBase * , QDomElement & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ModelBase::loadingInstances)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (ModelBase::*_t)(ModelBase * , QDomElement & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ModelBase::loadingInstance)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (ModelBase::*_t)(ModelBase * , QDomElement & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ModelBase::loadedInstances)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (ModelBase::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ModelBase::obsoleteSMDOrientationSignal)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (ModelBase::*_t)(const QString & , bool & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ModelBase::oldSchematicsSignal)) {
                *result = 6;
                return;
            }
        }
    }
}

const QMetaObject ModelBase::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ModelBase.data,
      qt_meta_data_ModelBase,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ModelBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ModelBase::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ModelBase.stringdata0))
        return static_cast<void*>(const_cast< ModelBase*>(this));
    return QObject::qt_metacast(_clname);
}

int ModelBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void ModelBase::loadedViews(ModelBase * _t1, QDomElement & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ModelBase::loadedRoot(const QString & _t1, ModelBase * _t2, QDomElement & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ModelBase::loadingInstances(ModelBase * _t1, QDomElement & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ModelBase::loadingInstance(ModelBase * _t1, QDomElement & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ModelBase::loadedInstances(ModelBase * _t1, QDomElement & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ModelBase::obsoleteSMDOrientationSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void ModelBase::oldSchematicsSignal(const QString & _t1, bool & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE
