/****************************************************************************
** Meta object code from reading C++ file 'hashpopulatewidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/partseditor/hashpopulatewidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hashpopulatewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_HashLineEdit_t {
    QByteArrayData data[3];
    char stringdata0[31];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HashLineEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HashLineEdit_t qt_meta_stringdata_HashLineEdit = {
    {
QT_MOC_LITERAL(0, 0, 12), // "HashLineEdit"
QT_MOC_LITERAL(1, 13, 16), // "updateObjectName"
QT_MOC_LITERAL(2, 30, 0) // ""

    },
    "HashLineEdit\0updateObjectName\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HashLineEdit[] = {

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

void HashLineEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HashLineEdit *_t = static_cast<HashLineEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateObjectName(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject HashLineEdit::staticMetaObject = {
    { &QLineEdit::staticMetaObject, qt_meta_stringdata_HashLineEdit.data,
      qt_meta_data_HashLineEdit,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *HashLineEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HashLineEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_HashLineEdit.stringdata0))
        return static_cast<void*>(const_cast< HashLineEdit*>(this));
    return QLineEdit::qt_metacast(_clname);
}

int HashLineEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_HashRemoveButton_t {
    QByteArrayData data[4];
    char stringdata0[44];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HashRemoveButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HashRemoveButton_t qt_meta_stringdata_HashRemoveButton = {
    {
QT_MOC_LITERAL(0, 0, 16), // "HashRemoveButton"
QT_MOC_LITERAL(1, 17, 7), // "clicked"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 17) // "HashRemoveButton*"

    },
    "HashRemoveButton\0clicked\0\0HashRemoveButton*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HashRemoveButton[] = {

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
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

       0        // eod
};

void HashRemoveButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HashRemoveButton *_t = static_cast<HashRemoveButton *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clicked((*reinterpret_cast< HashRemoveButton*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< HashRemoveButton* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (HashRemoveButton::*_t)(HashRemoveButton * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HashRemoveButton::clicked)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject HashRemoveButton::staticMetaObject = {
    { &BaseRemoveButton::staticMetaObject, qt_meta_stringdata_HashRemoveButton.data,
      qt_meta_data_HashRemoveButton,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *HashRemoveButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HashRemoveButton::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_HashRemoveButton.stringdata0))
        return static_cast<void*>(const_cast< HashRemoveButton*>(this));
    return BaseRemoveButton::qt_metacast(_clname);
}

int HashRemoveButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseRemoveButton::qt_metacall(_c, _id, _a);
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
void HashRemoveButton::clicked(HashRemoveButton * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_HashPopulateWidget_t {
    QByteArrayData data[8];
    char stringdata0[111];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HashPopulateWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HashPopulateWidget_t qt_meta_stringdata_HashPopulateWidget = {
    {
QT_MOC_LITERAL(0, 0, 18), // "HashPopulateWidget"
QT_MOC_LITERAL(1, 19, 14), // "editionStarted"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 7), // "changed"
QT_MOC_LITERAL(4, 43, 23), // "lastRowEditionCompleted"
QT_MOC_LITERAL(5, 67, 9), // "removeRow"
QT_MOC_LITERAL(6, 77, 17), // "HashRemoveButton*"
QT_MOC_LITERAL(7, 95, 15) // "lineEditChanged"

    },
    "HashPopulateWidget\0editionStarted\0\0"
    "changed\0lastRowEditionCompleted\0"
    "removeRow\0HashRemoveButton*\0lineEditChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HashPopulateWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   41,    2, 0x09 /* Protected */,
       5,    1,   42,    2, 0x09 /* Protected */,
       7,    0,   45,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void,

       0        // eod
};

void HashPopulateWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HashPopulateWidget *_t = static_cast<HashPopulateWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->editionStarted(); break;
        case 1: _t->changed(); break;
        case 2: _t->lastRowEditionCompleted(); break;
        case 3: _t->removeRow((*reinterpret_cast< HashRemoveButton*(*)>(_a[1]))); break;
        case 4: _t->lineEditChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< HashRemoveButton* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (HashPopulateWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HashPopulateWidget::editionStarted)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (HashPopulateWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HashPopulateWidget::changed)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject HashPopulateWidget::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_HashPopulateWidget.data,
      qt_meta_data_HashPopulateWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *HashPopulateWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HashPopulateWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_HashPopulateWidget.stringdata0))
        return static_cast<void*>(const_cast< HashPopulateWidget*>(this));
    return QFrame::qt_metacast(_clname);
}

int HashPopulateWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void HashPopulateWidget::editionStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void HashPopulateWidget::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
