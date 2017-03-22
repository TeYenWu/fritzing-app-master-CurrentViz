/****************************************************************************
** Meta object code from reading C++ file 'htmlinfoview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/infoview/htmlinfoview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'htmlinfoview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TagLabel_t {
    QByteArrayData data[1];
    char stringdata0[9];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TagLabel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TagLabel_t qt_meta_stringdata_TagLabel = {
    {
QT_MOC_LITERAL(0, 0, 8) // "TagLabel"

    },
    "TagLabel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TagLabel[] = {

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

void TagLabel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject TagLabel::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_TagLabel.data,
      qt_meta_data_TagLabel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TagLabel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TagLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TagLabel.stringdata0))
        return static_cast<void*>(const_cast< TagLabel*>(this));
    return QLabel::qt_metacast(_clname);
}

int TagLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_HtmlInfoView_t {
    QByteArrayData data[15];
    char stringdata0[199];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HtmlInfoView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HtmlInfoView_t qt_meta_stringdata_HtmlInfoView = {
    {
QT_MOC_LITERAL(0, 0, 12), // "HtmlInfoView"
QT_MOC_LITERAL(1, 13, 19), // "clickObsoleteSignal"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 10), // "setContent"
QT_MOC_LITERAL(4, 45, 16), // "setInstanceTitle"
QT_MOC_LITERAL(5, 62, 18), // "instanceTitleEnter"
QT_MOC_LITERAL(6, 81, 18), // "instanceTitleLeave"
QT_MOC_LITERAL(7, 100, 21), // "instanceTitleEditable"
QT_MOC_LITERAL(8, 122, 8), // "editable"
QT_MOC_LITERAL(9, 131, 10), // "changeLock"
QT_MOC_LITERAL(10, 142, 12), // "changeSticky"
QT_MOC_LITERAL(11, 155, 13), // "clickObsolete"
QT_MOC_LITERAL(12, 169, 7), // "xyEntry"
QT_MOC_LITERAL(13, 177, 12), // "unitsClicked"
QT_MOC_LITERAL(14, 190, 8) // "rotEntry"

    },
    "HtmlInfoView\0clickObsoleteSignal\0\0"
    "setContent\0setInstanceTitle\0"
    "instanceTitleEnter\0instanceTitleLeave\0"
    "instanceTitleEditable\0editable\0"
    "changeLock\0changeSticky\0clickObsolete\0"
    "xyEntry\0unitsClicked\0rotEntry"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HtmlInfoView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   75,    2, 0x09 /* Protected */,
       4,    0,   76,    2, 0x09 /* Protected */,
       5,    0,   77,    2, 0x09 /* Protected */,
       6,    0,   78,    2, 0x09 /* Protected */,
       7,    1,   79,    2, 0x09 /* Protected */,
       9,    1,   82,    2, 0x09 /* Protected */,
      10,    1,   85,    2, 0x09 /* Protected */,
      11,    1,   88,    2, 0x09 /* Protected */,
      12,    0,   91,    2, 0x09 /* Protected */,
      13,    0,   92,    2, 0x09 /* Protected */,
      14,    0,   93,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void HtmlInfoView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HtmlInfoView *_t = static_cast<HtmlInfoView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clickObsoleteSignal(); break;
        case 1: _t->setContent(); break;
        case 2: _t->setInstanceTitle(); break;
        case 3: _t->instanceTitleEnter(); break;
        case 4: _t->instanceTitleLeave(); break;
        case 5: _t->instanceTitleEditable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->changeLock((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->changeSticky((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->clickObsolete((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->xyEntry(); break;
        case 10: _t->unitsClicked(); break;
        case 11: _t->rotEntry(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (HtmlInfoView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HtmlInfoView::clickObsoleteSignal)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject HtmlInfoView::staticMetaObject = {
    { &QScrollArea::staticMetaObject, qt_meta_stringdata_HtmlInfoView.data,
      qt_meta_data_HtmlInfoView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *HtmlInfoView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HtmlInfoView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_HtmlInfoView.stringdata0))
        return static_cast<void*>(const_cast< HtmlInfoView*>(this));
    return QScrollArea::qt_metacast(_clname);
}

int HtmlInfoView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QScrollArea::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void HtmlInfoView::clickObsoleteSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
