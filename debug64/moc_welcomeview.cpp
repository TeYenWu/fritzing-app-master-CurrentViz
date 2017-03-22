/****************************************************************************
** Meta object code from reading C++ file 'welcomeview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/sketch/welcomeview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'welcomeview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_BlogListWidget_t {
    QByteArrayData data[15];
    char stringdata0[249];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BlogListWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BlogListWidget_t qt_meta_stringdata_BlogListWidget = {
    {
QT_MOC_LITERAL(0, 0, 14), // "BlogListWidget"
QT_MOC_LITERAL(1, 15, 15), // "itemEnteredSlot"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(4, 49, 14), // "titleTextColor"
QT_MOC_LITERAL(5, 64, 19), // "titleTextFontFamily"
QT_MOC_LITERAL(6, 84, 17), // "titleTextFontSize"
QT_MOC_LITERAL(7, 102, 21), // "titleTextExtraLeading"
QT_MOC_LITERAL(8, 124, 14), // "introTextColor"
QT_MOC_LITERAL(9, 139, 19), // "introTextFontFamily"
QT_MOC_LITERAL(10, 159, 17), // "introTextFontSize"
QT_MOC_LITERAL(11, 177, 21), // "introTextExtraLeading"
QT_MOC_LITERAL(12, 199, 13), // "dateTextColor"
QT_MOC_LITERAL(13, 213, 18), // "dateTextFontFamily"
QT_MOC_LITERAL(14, 232, 16) // "dateTextFontSize"

    },
    "BlogListWidget\0itemEnteredSlot\0\0"
    "QListWidgetItem*\0titleTextColor\0"
    "titleTextFontFamily\0titleTextFontSize\0"
    "titleTextExtraLeading\0introTextColor\0"
    "introTextFontFamily\0introTextFontSize\0"
    "introTextExtraLeading\0dateTextColor\0"
    "dateTextFontFamily\0dateTextFontSize"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BlogListWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
      11,   22, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // properties: name, type, flags
       4, QMetaType::QColor, 0x00095103,
       5, QMetaType::QString, 0x00095103,
       6, QMetaType::QString, 0x00095103,
       7, QMetaType::QString, 0x00095103,
       8, QMetaType::QColor, 0x00095103,
       9, QMetaType::QString, 0x00095103,
      10, QMetaType::QString, 0x00095103,
      11, QMetaType::QString, 0x00095103,
      12, QMetaType::QColor, 0x00095103,
      13, QMetaType::QString, 0x00095103,
      14, QMetaType::QString, 0x00095103,

       0        // eod
};

void BlogListWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BlogListWidget *_t = static_cast<BlogListWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->itemEnteredSlot((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        BlogListWidget *_t = static_cast<BlogListWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = _t->titleTextColor(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->titleTextFontFamily(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->titleTextFontSize(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->titleTextExtraLeading(); break;
        case 4: *reinterpret_cast< QColor*>(_v) = _t->introTextColor(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->introTextFontFamily(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->introTextFontSize(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->introTextExtraLeading(); break;
        case 8: *reinterpret_cast< QColor*>(_v) = _t->dateTextColor(); break;
        case 9: *reinterpret_cast< QString*>(_v) = _t->dateTextFontFamily(); break;
        case 10: *reinterpret_cast< QString*>(_v) = _t->dateTextFontSize(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        BlogListWidget *_t = static_cast<BlogListWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTitleTextColor(*reinterpret_cast< QColor*>(_v)); break;
        case 1: _t->setTitleTextFontFamily(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setTitleTextFontSize(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setTitleTextExtraLeading(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setIntroTextColor(*reinterpret_cast< QColor*>(_v)); break;
        case 5: _t->setIntroTextFontFamily(*reinterpret_cast< QString*>(_v)); break;
        case 6: _t->setIntroTextFontSize(*reinterpret_cast< QString*>(_v)); break;
        case 7: _t->setIntroTextExtraLeading(*reinterpret_cast< QString*>(_v)); break;
        case 8: _t->setDateTextColor(*reinterpret_cast< QColor*>(_v)); break;
        case 9: _t->setDateTextFontFamily(*reinterpret_cast< QString*>(_v)); break;
        case 10: _t->setDateTextFontSize(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject BlogListWidget::staticMetaObject = {
    { &QListWidget::staticMetaObject, qt_meta_stringdata_BlogListWidget.data,
      qt_meta_data_BlogListWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *BlogListWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BlogListWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_BlogListWidget.stringdata0))
        return static_cast<void*>(const_cast< BlogListWidget*>(this));
    return QListWidget::qt_metacast(_clname);
}

int BlogListWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListWidget::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 11;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_WelcomeView_t {
    QByteArrayData data[16];
    char stringdata0[191];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WelcomeView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WelcomeView_t qt_meta_stringdata_WelcomeView = {
    {
QT_MOC_LITERAL(0, 0, 11), // "WelcomeView"
QT_MOC_LITERAL(1, 12, 9), // "newSketch"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 10), // "openSketch"
QT_MOC_LITERAL(4, 34, 12), // "recentSketch"
QT_MOC_LITERAL(5, 47, 8), // "filename"
QT_MOC_LITERAL(6, 56, 10), // "actionText"
QT_MOC_LITERAL(7, 67, 11), // "clickRecent"
QT_MOC_LITERAL(8, 79, 14), // "gotBlogSnippet"
QT_MOC_LITERAL(9, 94, 14), // "QNetworkReply*"
QT_MOC_LITERAL(10, 109, 12), // "gotBlogImage"
QT_MOC_LITERAL(11, 122, 9), // "clickBlog"
QT_MOC_LITERAL(12, 132, 17), // "recentItemClicked"
QT_MOC_LITERAL(13, 150, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(14, 167, 15), // "blogItemClicked"
QT_MOC_LITERAL(15, 183, 7) // "nextTip"

    },
    "WelcomeView\0newSketch\0\0openSketch\0"
    "recentSketch\0filename\0actionText\0"
    "clickRecent\0gotBlogSnippet\0QNetworkReply*\0"
    "gotBlogImage\0clickBlog\0recentItemClicked\0"
    "QListWidgetItem*\0blogItemClicked\0"
    "nextTip"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WelcomeView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    0,   65,    2, 0x06 /* Public */,
       4,    2,   66,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   71,    2, 0x09 /* Protected */,
       8,    1,   74,    2, 0x09 /* Protected */,
      10,    1,   77,    2, 0x09 /* Protected */,
      11,    1,   80,    2, 0x09 /* Protected */,
      12,    1,   83,    2, 0x09 /* Protected */,
      14,    1,   86,    2, 0x09 /* Protected */,
      15,    0,   89,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    5,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 9,    2,
    QMetaType::Void, 0x80000000 | 9,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 13,    2,
    QMetaType::Void, 0x80000000 | 13,    2,
    QMetaType::Void,

       0        // eod
};

void WelcomeView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WelcomeView *_t = static_cast<WelcomeView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newSketch(); break;
        case 1: _t->openSketch(); break;
        case 2: _t->recentSketch((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->clickRecent((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->gotBlogSnippet((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 5: _t->gotBlogImage((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 6: _t->clickBlog((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->recentItemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 8: _t->blogItemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 9: _t->nextTip(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WelcomeView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WelcomeView::newSketch)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (WelcomeView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WelcomeView::openSketch)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (WelcomeView::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WelcomeView::recentSketch)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject WelcomeView::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_WelcomeView.data,
      qt_meta_data_WelcomeView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WelcomeView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WelcomeView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WelcomeView.stringdata0))
        return static_cast<void*>(const_cast< WelcomeView*>(this));
    return QFrame::qt_metacast(_clname);
}

int WelcomeView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void WelcomeView::newSketch()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void WelcomeView::openSketch()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void WelcomeView::recentSketch(const QString & _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
