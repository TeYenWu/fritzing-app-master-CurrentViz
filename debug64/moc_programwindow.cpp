/****************************************************************************
** Meta object code from reading C++ file 'programwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/program/programwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'programwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PTabWidget_t {
    QByteArrayData data[4];
    char stringdata0[29];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PTabWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PTabWidget_t qt_meta_stringdata_PTabWidget = {
    {
QT_MOC_LITERAL(0, 0, 10), // "PTabWidget"
QT_MOC_LITERAL(1, 11, 10), // "tabChanged"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 5) // "index"

    },
    "PTabWidget\0tabChanged\0\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PTabWidget[] = {

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
       1,    1,   19,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void PTabWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PTabWidget *_t = static_cast<PTabWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->tabChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject PTabWidget::staticMetaObject = {
    { &QTabWidget::staticMetaObject, qt_meta_stringdata_PTabWidget.data,
      qt_meta_data_PTabWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PTabWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PTabWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PTabWidget.stringdata0))
        return static_cast<void*>(const_cast< PTabWidget*>(this));
    return QTabWidget::qt_metacast(_clname);
}

int PTabWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTabWidget::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_ProgramWindow_t {
    QByteArrayData data[59];
    char stringdata0[622];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ProgramWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ProgramWindow_t qt_meta_stringdata_ProgramWindow = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ProgramWindow"
QT_MOC_LITERAL(1, 14, 6), // "closed"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 22), // "changeActivationSignal"
QT_MOC_LITERAL(4, 45, 8), // "activate"
QT_MOC_LITERAL(5, 54, 8), // "QWidget*"
QT_MOC_LITERAL(6, 63, 10), // "originator"
QT_MOC_LITERAL(7, 74, 17), // "linkToProgramFile"
QT_MOC_LITERAL(8, 92, 8), // "filename"
QT_MOC_LITERAL(9, 101, 9), // "Platform*"
QT_MOC_LITERAL(10, 111, 8), // "platform"
QT_MOC_LITERAL(11, 120, 7), // "addlink"
QT_MOC_LITERAL(12, 128, 6), // "strong"
QT_MOC_LITERAL(13, 135, 7), // "saveAll"
QT_MOC_LITERAL(14, 143, 15), // "loadProgramFile"
QT_MOC_LITERAL(15, 159, 6), // "addTab"
QT_MOC_LITERAL(16, 166, 11), // "ProgramTab*"
QT_MOC_LITERAL(17, 178, 15), // "closeCurrentTab"
QT_MOC_LITERAL(18, 194, 8), // "closeTab"
QT_MOC_LITERAL(19, 203, 5), // "index"
QT_MOC_LITERAL(20, 209, 14), // "saveCurrentTab"
QT_MOC_LITERAL(21, 224, 7), // "tabSave"
QT_MOC_LITERAL(22, 232, 9), // "tabSaveAs"
QT_MOC_LITERAL(23, 242, 9), // "tabRename"
QT_MOC_LITERAL(24, 252, 12), // "duplicateTab"
QT_MOC_LITERAL(25, 265, 16), // "tabBeforeClosing"
QT_MOC_LITERAL(26, 282, 5), // "bool&"
QT_MOC_LITERAL(27, 288, 2), // "ok"
QT_MOC_LITERAL(28, 291, 9), // "tabDelete"
QT_MOC_LITERAL(29, 301, 10), // "deleteFile"
QT_MOC_LITERAL(30, 312, 10), // "updateMenu"
QT_MOC_LITERAL(31, 323, 13), // "programEnable"
QT_MOC_LITERAL(32, 337, 10), // "undoEnable"
QT_MOC_LITERAL(33, 348, 10), // "redoEnable"
QT_MOC_LITERAL(34, 359, 9), // "cutEnable"
QT_MOC_LITERAL(35, 369, 10), // "copyEnable"
QT_MOC_LITERAL(36, 380, 11), // "pasteEnable"
QT_MOC_LITERAL(37, 392, 4), // "port"
QT_MOC_LITERAL(38, 397, 5), // "board"
QT_MOC_LITERAL(39, 403, 17), // "updateSerialPorts"
QT_MOC_LITERAL(40, 421, 19), // "portProcessFinished"
QT_MOC_LITERAL(41, 441, 8), // "exitCode"
QT_MOC_LITERAL(42, 450, 20), // "QProcess::ExitStatus"
QT_MOC_LITERAL(43, 471, 10), // "exitStatus"
QT_MOC_LITERAL(44, 482, 20), // "portProcessReadyRead"
QT_MOC_LITERAL(45, 503, 12), // "updateBoards"
QT_MOC_LITERAL(46, 516, 11), // "setPlatform"
QT_MOC_LITERAL(47, 528, 8), // "QAction*"
QT_MOC_LITERAL(48, 537, 7), // "setPort"
QT_MOC_LITERAL(49, 545, 8), // "setBoard"
QT_MOC_LITERAL(50, 554, 6), // "rename"
QT_MOC_LITERAL(51, 561, 4), // "undo"
QT_MOC_LITERAL(52, 566, 4), // "redo"
QT_MOC_LITERAL(53, 571, 3), // "cut"
QT_MOC_LITERAL(54, 575, 4), // "copy"
QT_MOC_LITERAL(55, 580, 5), // "paste"
QT_MOC_LITERAL(56, 586, 9), // "selectAll"
QT_MOC_LITERAL(57, 596, 13), // "serialMonitor"
QT_MOC_LITERAL(58, 610, 11) // "sendProgram"

    },
    "ProgramWindow\0closed\0\0changeActivationSignal\0"
    "activate\0QWidget*\0originator\0"
    "linkToProgramFile\0filename\0Platform*\0"
    "platform\0addlink\0strong\0saveAll\0"
    "loadProgramFile\0addTab\0ProgramTab*\0"
    "closeCurrentTab\0closeTab\0index\0"
    "saveCurrentTab\0tabSave\0tabSaveAs\0"
    "tabRename\0duplicateTab\0tabBeforeClosing\0"
    "bool&\0ok\0tabDelete\0deleteFile\0updateMenu\0"
    "programEnable\0undoEnable\0redoEnable\0"
    "cutEnable\0copyEnable\0pasteEnable\0port\0"
    "board\0updateSerialPorts\0portProcessFinished\0"
    "exitCode\0QProcess::ExitStatus\0exitStatus\0"
    "portProcessReadyRead\0updateBoards\0"
    "setPlatform\0QAction*\0setPort\0setBoard\0"
    "rename\0undo\0redo\0cut\0copy\0paste\0"
    "selectAll\0serialMonitor\0sendProgram"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ProgramWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      32,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  174,    2, 0x06 /* Public */,
       3,    2,  175,    2, 0x06 /* Public */,
       7,    4,  180,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    0,  189,    2, 0x0a /* Public */,
      14,    0,  190,    2, 0x09 /* Protected */,
      15,    0,  191,    2, 0x09 /* Protected */,
      17,    0,  192,    2, 0x09 /* Protected */,
      18,    1,  193,    2, 0x09 /* Protected */,
      20,    0,  196,    2, 0x09 /* Protected */,
      21,    1,  197,    2, 0x09 /* Protected */,
      22,    1,  200,    2, 0x09 /* Protected */,
      23,    1,  203,    2, 0x09 /* Protected */,
      24,    0,  206,    2, 0x09 /* Protected */,
      25,    2,  207,    2, 0x09 /* Protected */,
      28,    2,  212,    2, 0x09 /* Protected */,
      30,   10,  217,    2, 0x09 /* Protected */,
      39,    0,  238,    2, 0x09 /* Protected */,
      40,    2,  239,    2, 0x09 /* Protected */,
      44,    0,  244,    2, 0x09 /* Protected */,
      45,    0,  245,    2, 0x09 /* Protected */,
      46,    1,  246,    2, 0x09 /* Protected */,
      48,    1,  249,    2, 0x09 /* Protected */,
      49,    1,  252,    2, 0x09 /* Protected */,
      50,    0,  255,    2, 0x09 /* Protected */,
      51,    0,  256,    2, 0x09 /* Protected */,
      52,    0,  257,    2, 0x09 /* Protected */,
      53,    0,  258,    2, 0x09 /* Protected */,
      54,    0,  259,    2, 0x09 /* Protected */,
      55,    0,  260,    2, 0x09 /* Protected */,
      56,    0,  261,    2, 0x09 /* Protected */,
      57,    0,  262,    2, 0x09 /* Protected */,
      58,    0,  263,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 5,    4,    6,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 9, QMetaType::Bool, QMetaType::Bool,    8,   10,   11,   12,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 16,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 26,    2,   27,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   19,   29,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool, 0x80000000 | 9, QMetaType::QString, QMetaType::QString, QMetaType::QString,   31,   32,   33,   34,   35,   36,   10,   37,   38,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 42,   41,   43,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 47,    2,
    QMetaType::Void, 0x80000000 | 47,    2,
    QMetaType::Void, 0x80000000 | 47,    2,
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

void ProgramWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ProgramWindow *_t = static_cast<ProgramWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->closed(); break;
        case 1: _t->changeActivationSignal((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        case 2: _t->linkToProgramFile((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< Platform*(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 3: _t->saveAll(); break;
        case 4: _t->loadProgramFile(); break;
        case 5: { ProgramTab* _r = _t->addTab();
            if (_a[0]) *reinterpret_cast< ProgramTab**>(_a[0]) = _r; }  break;
        case 6: _t->closeCurrentTab(); break;
        case 7: _t->closeTab((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->saveCurrentTab(); break;
        case 9: _t->tabSave((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->tabSaveAs((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->tabRename((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->duplicateTab(); break;
        case 13: _t->tabBeforeClosing((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 14: _t->tabDelete((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 15: _t->updateMenu((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6])),(*reinterpret_cast< Platform*(*)>(_a[7])),(*reinterpret_cast< const QString(*)>(_a[8])),(*reinterpret_cast< const QString(*)>(_a[9])),(*reinterpret_cast< const QString(*)>(_a[10]))); break;
        case 16: _t->updateSerialPorts(); break;
        case 17: _t->portProcessFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        case 18: _t->portProcessReadyRead(); break;
        case 19: _t->updateBoards(); break;
        case 20: _t->setPlatform((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 21: _t->setPort((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 22: _t->setBoard((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 23: _t->rename(); break;
        case 24: _t->undo(); break;
        case 25: _t->redo(); break;
        case 26: _t->cut(); break;
        case 27: _t->copy(); break;
        case 28: _t->paste(); break;
        case 29: _t->selectAll(); break;
        case 30: _t->serialMonitor(); break;
        case 31: _t->sendProgram(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Platform* >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 6:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Platform* >(); break;
            }
            break;
        case 20:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        case 21:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        case 22:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ProgramWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ProgramWindow::closed)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ProgramWindow::*_t)(bool , QWidget * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ProgramWindow::changeActivationSignal)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (ProgramWindow::*_t)(const QString & , Platform * , bool , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ProgramWindow::linkToProgramFile)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject ProgramWindow::staticMetaObject = {
    { &FritzingWindow::staticMetaObject, qt_meta_stringdata_ProgramWindow.data,
      qt_meta_data_ProgramWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ProgramWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ProgramWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ProgramWindow.stringdata0))
        return static_cast<void*>(const_cast< ProgramWindow*>(this));
    return FritzingWindow::qt_metacast(_clname);
}

int ProgramWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FritzingWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 32)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 32;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 32)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 32;
    }
    return _id;
}

// SIGNAL 0
void ProgramWindow::closed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void ProgramWindow::changeActivationSignal(bool _t1, QWidget * _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ProgramWindow::linkToProgramFile(const QString & _t1, Platform * _t2, bool _t3, bool _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
