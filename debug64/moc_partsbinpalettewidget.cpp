/****************************************************************************
** Meta object code from reading C++ file 'partsbinpalettewidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/partsbinpalette/partsbinpalettewidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'partsbinpalettewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PartsBinPaletteWidget_t {
    QByteArrayData data[23];
    char stringdata0[293];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PartsBinPaletteWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PartsBinPaletteWidget_t qt_meta_stringdata_PartsBinPaletteWidget = {
    {
QT_MOC_LITERAL(0, 0, 21), // "PartsBinPaletteWidget"
QT_MOC_LITERAL(1, 22, 5), // "saved"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 19), // "hasPartsFromBundled"
QT_MOC_LITERAL(4, 49, 15), // "fileNameUpdated"
QT_MOC_LITERAL(5, 65, 22), // "PartsBinPaletteWidget*"
QT_MOC_LITERAL(6, 88, 11), // "newFileName"
QT_MOC_LITERAL(7, 100, 11), // "oldFilename"
QT_MOC_LITERAL(8, 112, 7), // "focused"
QT_MOC_LITERAL(9, 120, 14), // "addPartCommand"
QT_MOC_LITERAL(10, 135, 8), // "moduleID"
QT_MOC_LITERAL(11, 144, 16), // "removeAlienParts"
QT_MOC_LITERAL(12, 161, 9), // "itemMoved"
QT_MOC_LITERAL(13, 171, 10), // "toIconView"
QT_MOC_LITERAL(14, 182, 10), // "toListView"
QT_MOC_LITERAL(15, 193, 4), // "save"
QT_MOC_LITERAL(16, 198, 6), // "saveAs"
QT_MOC_LITERAL(17, 205, 15), // "changeIconColor"
QT_MOC_LITERAL(18, 221, 21), // "undoStackCleanChanged"
QT_MOC_LITERAL(19, 243, 7), // "isClean"
QT_MOC_LITERAL(20, 251, 17), // "addSketchPartToMe"
QT_MOC_LITERAL(21, 269, 6), // "search"
QT_MOC_LITERAL(22, 276, 16) // "focusSearchAfter"

    },
    "PartsBinPaletteWidget\0saved\0\0"
    "hasPartsFromBundled\0fileNameUpdated\0"
    "PartsBinPaletteWidget*\0newFileName\0"
    "oldFilename\0focused\0addPartCommand\0"
    "moduleID\0removeAlienParts\0itemMoved\0"
    "toIconView\0toListView\0save\0saveAs\0"
    "changeIconColor\0undoStackCleanChanged\0"
    "isClean\0addSketchPartToMe\0search\0"
    "focusSearchAfter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PartsBinPaletteWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x06 /* Public */,
       4,    3,   92,    2, 0x06 /* Public */,
       8,    1,   99,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,  102,    2, 0x0a /* Public */,
      11,    0,  105,    2, 0x0a /* Public */,
      12,    0,  106,    2, 0x0a /* Public */,
      13,    0,  107,    2, 0x0a /* Public */,
      14,    0,  108,    2, 0x0a /* Public */,
      15,    0,  109,    2, 0x0a /* Public */,
      16,    0,  110,    2, 0x0a /* Public */,
      17,    0,  111,    2, 0x0a /* Public */,
      18,    1,  112,    2, 0x09 /* Protected */,
      20,    0,  115,    2, 0x09 /* Protected */,
      21,    0,  116,    2, 0x09 /* Protected */,
      22,    0,  117,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, 0x80000000 | 5, QMetaType::QString, QMetaType::QString,    2,    6,    7,
    QMetaType::Void, 0x80000000 | 5,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PartsBinPaletteWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PartsBinPaletteWidget *_t = static_cast<PartsBinPaletteWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->saved((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->fileNameUpdated((*reinterpret_cast< PartsBinPaletteWidget*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 2: _t->focused((*reinterpret_cast< PartsBinPaletteWidget*(*)>(_a[1]))); break;
        case 3: _t->addPartCommand((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->removeAlienParts(); break;
        case 5: _t->itemMoved(); break;
        case 6: _t->toIconView(); break;
        case 7: _t->toListView(); break;
        case 8: { bool _r = _t->save();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->saveAs();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: _t->changeIconColor(); break;
        case 11: _t->undoStackCleanChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->addSketchPartToMe(); break;
        case 13: _t->search(); break;
        case 14: _t->focusSearchAfter(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PartsBinPaletteWidget* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PartsBinPaletteWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PartsBinPaletteWidget::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PartsBinPaletteWidget::saved)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (PartsBinPaletteWidget::*_t)(PartsBinPaletteWidget * , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PartsBinPaletteWidget::fileNameUpdated)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (PartsBinPaletteWidget::*_t)(PartsBinPaletteWidget * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PartsBinPaletteWidget::focused)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject PartsBinPaletteWidget::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_PartsBinPaletteWidget.data,
      qt_meta_data_PartsBinPaletteWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PartsBinPaletteWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PartsBinPaletteWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PartsBinPaletteWidget.stringdata0))
        return static_cast<void*>(const_cast< PartsBinPaletteWidget*>(this));
    if (!strcmp(_clname, "Bundler"))
        return static_cast< Bundler*>(const_cast< PartsBinPaletteWidget*>(this));
    return QFrame::qt_metacast(_clname);
}

int PartsBinPaletteWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void PartsBinPaletteWidget::saved(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PartsBinPaletteWidget::fileNameUpdated(PartsBinPaletteWidget * _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PartsBinPaletteWidget::focused(PartsBinPaletteWidget * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
