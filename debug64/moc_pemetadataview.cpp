/****************************************************************************
** Meta object code from reading C++ file 'pemetadataview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/partseditor/pemetadataview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pemetadataview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PEMetadataView_t {
    QByteArrayData data[18];
    char stringdata0[217];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PEMetadataView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PEMetadataView_t qt_meta_stringdata_PEMetadataView = {
    {
QT_MOC_LITERAL(0, 0, 14), // "PEMetadataView"
QT_MOC_LITERAL(1, 15, 15), // "metadataChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 4), // "name"
QT_MOC_LITERAL(4, 37, 5), // "value"
QT_MOC_LITERAL(5, 43, 17), // "propertiesChanged"
QT_MOC_LITERAL(6, 61, 22), // "QHash<QString,QString>"
QT_MOC_LITERAL(7, 84, 11), // "tagsChanged"
QT_MOC_LITERAL(8, 96, 10), // "titleEntry"
QT_MOC_LITERAL(9, 107, 11), // "authorEntry"
QT_MOC_LITERAL(10, 119, 16), // "descriptionEntry"
QT_MOC_LITERAL(11, 136, 10), // "labelEntry"
QT_MOC_LITERAL(12, 147, 11), // "familyEntry"
QT_MOC_LITERAL(13, 159, 12), // "variantEntry"
QT_MOC_LITERAL(14, 172, 9), // "dateEntry"
QT_MOC_LITERAL(15, 182, 8), // "urlEntry"
QT_MOC_LITERAL(16, 191, 15), // "propertiesEntry"
QT_MOC_LITERAL(17, 207, 9) // "tagsEntry"

    },
    "PEMetadataView\0metadataChanged\0\0name\0"
    "value\0propertiesChanged\0QHash<QString,QString>\0"
    "tagsChanged\0titleEntry\0authorEntry\0"
    "descriptionEntry\0labelEntry\0familyEntry\0"
    "variantEntry\0dateEntry\0urlEntry\0"
    "propertiesEntry\0tagsEntry"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PEMetadataView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   79,    2, 0x06 /* Public */,
       5,    1,   84,    2, 0x06 /* Public */,
       7,    1,   87,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   90,    2, 0x09 /* Protected */,
       9,    0,   91,    2, 0x09 /* Protected */,
      10,    0,   92,    2, 0x09 /* Protected */,
      11,    0,   93,    2, 0x09 /* Protected */,
      12,    0,   94,    2, 0x09 /* Protected */,
      13,    0,   95,    2, 0x09 /* Protected */,
      14,    0,   96,    2, 0x09 /* Protected */,
      15,    0,   97,    2, 0x09 /* Protected */,
      16,    0,   98,    2, 0x09 /* Protected */,
      17,    0,   99,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, QMetaType::QStringList,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PEMetadataView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PEMetadataView *_t = static_cast<PEMetadataView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->metadataChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->propertiesChanged((*reinterpret_cast< const QHash<QString,QString>(*)>(_a[1]))); break;
        case 2: _t->tagsChanged((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 3: _t->titleEntry(); break;
        case 4: _t->authorEntry(); break;
        case 5: _t->descriptionEntry(); break;
        case 6: _t->labelEntry(); break;
        case 7: _t->familyEntry(); break;
        case 8: _t->variantEntry(); break;
        case 9: _t->dateEntry(); break;
        case 10: _t->urlEntry(); break;
        case 11: _t->propertiesEntry(); break;
        case 12: _t->tagsEntry(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PEMetadataView::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PEMetadataView::metadataChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (PEMetadataView::*_t)(const QHash<QString,QString> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PEMetadataView::propertiesChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (PEMetadataView::*_t)(const QStringList & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PEMetadataView::tagsChanged)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject PEMetadataView::staticMetaObject = {
    { &QScrollArea::staticMetaObject, qt_meta_stringdata_PEMetadataView.data,
      qt_meta_data_PEMetadataView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PEMetadataView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PEMetadataView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PEMetadataView.stringdata0))
        return static_cast<void*>(const_cast< PEMetadataView*>(this));
    return QScrollArea::qt_metacast(_clname);
}

int PEMetadataView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QScrollArea::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void PEMetadataView::metadataChanged(const QString & _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PEMetadataView::propertiesChanged(const QHash<QString,QString> & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PEMetadataView::tagsChanged(const QStringList & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
struct qt_meta_stringdata_FocusOutTextEdit_t {
    QByteArrayData data[3];
    char stringdata0[27];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FocusOutTextEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FocusOutTextEdit_t qt_meta_stringdata_FocusOutTextEdit = {
    {
QT_MOC_LITERAL(0, 0, 16), // "FocusOutTextEdit"
QT_MOC_LITERAL(1, 17, 8), // "focusOut"
QT_MOC_LITERAL(2, 26, 0) // ""

    },
    "FocusOutTextEdit\0focusOut\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FocusOutTextEdit[] = {

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
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void FocusOutTextEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FocusOutTextEdit *_t = static_cast<FocusOutTextEdit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->focusOut(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (FocusOutTextEdit::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FocusOutTextEdit::focusOut)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject FocusOutTextEdit::staticMetaObject = {
    { &QTextEdit::staticMetaObject, qt_meta_stringdata_FocusOutTextEdit.data,
      qt_meta_data_FocusOutTextEdit,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FocusOutTextEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FocusOutTextEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FocusOutTextEdit.stringdata0))
        return static_cast<void*>(const_cast< FocusOutTextEdit*>(this));
    return QTextEdit::qt_metacast(_clname);
}

int FocusOutTextEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTextEdit::qt_metacall(_c, _id, _a);
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
void FocusOutTextEdit::focusOut()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
