/****************************************************************************
** Meta object code from reading C++ file 'fapplication.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/fapplication.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fapplication.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_FServer_t {
    QByteArrayData data[4];
    char stringdata0[40];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FServer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FServer_t qt_meta_stringdata_FServer = {
    {
QT_MOC_LITERAL(0, 0, 7), // "FServer"
QT_MOC_LITERAL(1, 8, 13), // "newConnection"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 16) // "socketDescriptor"

    },
    "FServer\0newConnection\0\0socketDescriptor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FServer[] = {

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
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void FServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FServer *_t = static_cast<FServer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newConnection((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (FServer::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FServer::newConnection)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject FServer::staticMetaObject = {
    { &QTcpServer::staticMetaObject, qt_meta_stringdata_FServer.data,
      qt_meta_data_FServer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FServer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FServer.stringdata0))
        return static_cast<void*>(const_cast< FServer*>(this));
    return QTcpServer::qt_metacast(_clname);
}

int FServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpServer::qt_metacall(_c, _id, _a);
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
void FServer::newConnection(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_FServerThread_t {
    QByteArrayData data[12];
    char stringdata0[110];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FServerThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FServerThread_t qt_meta_stringdata_FServerThread = {
    {
QT_MOC_LITERAL(0, 0, 13), // "FServerThread"
QT_MOC_LITERAL(1, 14, 5), // "error"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 23), // "QTcpSocket::SocketError"
QT_MOC_LITERAL(4, 45, 11), // "socketError"
QT_MOC_LITERAL(5, 57, 9), // "doCommand"
QT_MOC_LITERAL(6, 67, 7), // "command"
QT_MOC_LITERAL(7, 75, 6), // "params"
QT_MOC_LITERAL(8, 82, 8), // "QString&"
QT_MOC_LITERAL(9, 91, 6), // "result"
QT_MOC_LITERAL(10, 98, 4), // "int&"
QT_MOC_LITERAL(11, 103, 6) // "status"

    },
    "FServerThread\0error\0\0QTcpSocket::SocketError\0"
    "socketError\0doCommand\0command\0params\0"
    "QString&\0result\0int&\0status"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FServerThread[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       5,    4,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 8, 0x80000000 | 10,    6,    7,    9,   11,

       0        // eod
};

void FServerThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FServerThread *_t = static_cast<FServerThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->error((*reinterpret_cast< QTcpSocket::SocketError(*)>(_a[1]))); break;
        case 1: _t->doCommand((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (FServerThread::*_t)(QTcpSocket::SocketError );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FServerThread::error)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (FServerThread::*_t)(const QString & , const QString & , QString & , int & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FServerThread::doCommand)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject FServerThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_FServerThread.data,
      qt_meta_data_FServerThread,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FServerThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FServerThread::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FServerThread.stringdata0))
        return static_cast<void*>(const_cast< FServerThread*>(this));
    return QThread::qt_metacast(_clname);
}

int FServerThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void FServerThread::error(QTcpSocket::SocketError _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FServerThread::doCommand(const QString & _t1, const QString & _t2, QString & _t3, int & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_FApplication_t {
    QByteArrayData data[36];
    char stringdata0[446];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FApplication_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FApplication_t qt_meta_stringdata_FApplication = {
    {
QT_MOC_LITERAL(0, 0, 12), // "FApplication"
QT_MOC_LITERAL(1, 13, 23), // "spaceBarIsPressedSignal"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 11), // "preferences"
QT_MOC_LITERAL(4, 50, 16), // "preferencesAfter"
QT_MOC_LITERAL(5, 67, 15), // "checkForUpdates"
QT_MOC_LITERAL(6, 83, 13), // "atUserRequest"
QT_MOC_LITERAL(7, 97, 18), // "enableCheckUpdates"
QT_MOC_LITERAL(8, 116, 7), // "enabled"
QT_MOC_LITERAL(9, 124, 34), // "createUserDataStoreFolderStru..."
QT_MOC_LITERAL(10, 159, 16), // "changeActivation"
QT_MOC_LITERAL(11, 176, 8), // "activate"
QT_MOC_LITERAL(12, 185, 8), // "QWidget*"
QT_MOC_LITERAL(13, 194, 10), // "originator"
QT_MOC_LITERAL(14, 205, 16), // "updateActivation"
QT_MOC_LITERAL(15, 222, 23), // "topLevelWidgetDestroyed"
QT_MOC_LITERAL(16, 246, 16), // "closeAllWindows2"
QT_MOC_LITERAL(17, 263, 10), // "loadedPart"
QT_MOC_LITERAL(18, 274, 6), // "loaded"
QT_MOC_LITERAL(19, 281, 5), // "total"
QT_MOC_LITERAL(20, 287, 19), // "externalProcessSlot"
QT_MOC_LITERAL(21, 307, 8), // "QString&"
QT_MOC_LITERAL(22, 316, 4), // "name"
QT_MOC_LITERAL(23, 321, 4), // "path"
QT_MOC_LITERAL(24, 326, 12), // "QStringList&"
QT_MOC_LITERAL(25, 339, 4), // "args"
QT_MOC_LITERAL(26, 344, 11), // "gotOrderFab"
QT_MOC_LITERAL(27, 356, 14), // "QNetworkReply*"
QT_MOC_LITERAL(28, 371, 13), // "newConnection"
QT_MOC_LITERAL(29, 385, 16), // "socketDescriptor"
QT_MOC_LITERAL(30, 402, 9), // "doCommand"
QT_MOC_LITERAL(31, 412, 7), // "command"
QT_MOC_LITERAL(32, 420, 6), // "params"
QT_MOC_LITERAL(33, 427, 6), // "result"
QT_MOC_LITERAL(34, 434, 4), // "int&"
QT_MOC_LITERAL(35, 439, 6) // "status"

    },
    "FApplication\0spaceBarIsPressedSignal\0"
    "\0preferences\0preferencesAfter\0"
    "checkForUpdates\0atUserRequest\0"
    "enableCheckUpdates\0enabled\0"
    "createUserDataStoreFolderStructure\0"
    "changeActivation\0activate\0QWidget*\0"
    "originator\0updateActivation\0"
    "topLevelWidgetDestroyed\0closeAllWindows2\0"
    "loadedPart\0loaded\0total\0externalProcessSlot\0"
    "QString&\0name\0path\0QStringList&\0args\0"
    "gotOrderFab\0QNetworkReply*\0newConnection\0"
    "socketDescriptor\0doCommand\0command\0"
    "params\0result\0int&\0status"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FApplication[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   97,    2, 0x0a /* Public */,
       4,    0,   98,    2, 0x0a /* Public */,
       5,    0,   99,    2, 0x0a /* Public */,
       5,    1,  100,    2, 0x0a /* Public */,
       7,    1,  103,    2, 0x0a /* Public */,
       9,    0,  106,    2, 0x0a /* Public */,
      10,    2,  107,    2, 0x0a /* Public */,
      14,    0,  112,    2, 0x0a /* Public */,
      15,    1,  113,    2, 0x0a /* Public */,
      16,    0,  116,    2, 0x0a /* Public */,
      17,    2,  117,    2, 0x0a /* Public */,
      20,    3,  122,    2, 0x0a /* Public */,
      26,    1,  129,    2, 0x0a /* Public */,
      28,    1,  132,    2, 0x0a /* Public */,
      30,    4,  135,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 12,   11,   13,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QObjectStar,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   18,   19,
    QMetaType::Void, 0x80000000 | 21, 0x80000000 | 21, 0x80000000 | 24,   22,   23,   25,
    QMetaType::Void, 0x80000000 | 27,    2,
    QMetaType::Void, QMetaType::Int,   29,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 21, 0x80000000 | 34,   31,   32,   33,   35,

       0        // eod
};

void FApplication::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FApplication *_t = static_cast<FApplication *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->spaceBarIsPressedSignal((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->preferences(); break;
        case 2: _t->preferencesAfter(); break;
        case 3: _t->checkForUpdates(); break;
        case 4: _t->checkForUpdates((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->enableCheckUpdates((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->createUserDataStoreFolderStructure(); break;
        case 7: _t->changeActivation((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        case 8: _t->updateActivation(); break;
        case 9: _t->topLevelWidgetDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 10: _t->closeAllWindows2(); break;
        case 11: _t->loadedPart((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 12: _t->externalProcessSlot((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QStringList(*)>(_a[3]))); break;
        case 13: _t->gotOrderFab((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 14: _t->newConnection((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->doCommand((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        case 13:
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
            typedef void (FApplication::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FApplication::spaceBarIsPressedSignal)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject FApplication::staticMetaObject = {
    { &QApplication::staticMetaObject, qt_meta_stringdata_FApplication.data,
      qt_meta_data_FApplication,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FApplication::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FApplication::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FApplication.stringdata0))
        return static_cast<void*>(const_cast< FApplication*>(this));
    return QApplication::qt_metacast(_clname);
}

int FApplication::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QApplication::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void FApplication::spaceBarIsPressedSignal(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
