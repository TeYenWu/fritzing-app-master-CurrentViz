/****************************************************************************
** Meta object code from reading C++ file 'programtab.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/program/programtab.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'programtab.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SerialPortComboBox_t {
    QByteArrayData data[3];
    char stringdata0[32];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SerialPortComboBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SerialPortComboBox_t qt_meta_stringdata_SerialPortComboBox = {
    {
QT_MOC_LITERAL(0, 0, 18), // "SerialPortComboBox"
QT_MOC_LITERAL(1, 19, 11), // "aboutToShow"
QT_MOC_LITERAL(2, 31, 0) // ""

    },
    "SerialPortComboBox\0aboutToShow\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SerialPortComboBox[] = {

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

void SerialPortComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SerialPortComboBox *_t = static_cast<SerialPortComboBox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->aboutToShow(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SerialPortComboBox::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SerialPortComboBox::aboutToShow)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject SerialPortComboBox::staticMetaObject = {
    { &QComboBox::staticMetaObject, qt_meta_stringdata_SerialPortComboBox.data,
      qt_meta_data_SerialPortComboBox,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SerialPortComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SerialPortComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SerialPortComboBox.stringdata0))
        return static_cast<void*>(const_cast< SerialPortComboBox*>(this));
    return QComboBox::qt_metacast(_clname);
}

int SerialPortComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QComboBox::qt_metacall(_c, _id, _a);
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
void SerialPortComboBox::aboutToShow()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
struct qt_meta_stringdata_ProgramTab_t {
    QByteArrayData data[55];
    char stringdata0[631];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ProgramTab_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ProgramTab_t qt_meta_stringdata_ProgramTab = {
    {
QT_MOC_LITERAL(0, 0, 10), // "ProgramTab"
QT_MOC_LITERAL(1, 11, 10), // "wantToSave"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 12), // "wantToSaveAs"
QT_MOC_LITERAL(4, 36, 12), // "wantToRename"
QT_MOC_LITERAL(5, 49, 12), // "wantToDelete"
QT_MOC_LITERAL(6, 62, 10), // "deleteFile"
QT_MOC_LITERAL(7, 73, 15), // "platformChanged"
QT_MOC_LITERAL(8, 89, 9), // "Platform*"
QT_MOC_LITERAL(9, 99, 11), // "newPlatform"
QT_MOC_LITERAL(10, 111, 26), // "programWindowUpdateRequest"
QT_MOC_LITERAL(11, 138, 13), // "programEnable"
QT_MOC_LITERAL(12, 152, 10), // "undoEnable"
QT_MOC_LITERAL(13, 163, 10), // "redoEnable"
QT_MOC_LITERAL(14, 174, 9), // "cutEnable"
QT_MOC_LITERAL(15, 184, 10), // "copyEnable"
QT_MOC_LITERAL(16, 195, 11), // "pasteEnable"
QT_MOC_LITERAL(17, 207, 8), // "platform"
QT_MOC_LITERAL(18, 216, 4), // "port"
QT_MOC_LITERAL(19, 221, 5), // "board"
QT_MOC_LITERAL(20, 227, 8), // "filename"
QT_MOC_LITERAL(21, 236, 11), // "setPlatform"
QT_MOC_LITERAL(22, 248, 15), // "newPlatformName"
QT_MOC_LITERAL(23, 264, 7), // "setPort"
QT_MOC_LITERAL(24, 272, 8), // "setBoard"
QT_MOC_LITERAL(25, 281, 15), // "loadProgramFile"
QT_MOC_LITERAL(26, 297, 11), // "textChanged"
QT_MOC_LITERAL(27, 309, 4), // "undo"
QT_MOC_LITERAL(28, 314, 10), // "enableUndo"
QT_MOC_LITERAL(29, 325, 6), // "enable"
QT_MOC_LITERAL(30, 332, 4), // "redo"
QT_MOC_LITERAL(31, 337, 10), // "enableRedo"
QT_MOC_LITERAL(32, 348, 3), // "cut"
QT_MOC_LITERAL(33, 352, 9), // "enableCut"
QT_MOC_LITERAL(34, 362, 4), // "copy"
QT_MOC_LITERAL(35, 367, 10), // "enableCopy"
QT_MOC_LITERAL(36, 378, 5), // "paste"
QT_MOC_LITERAL(37, 384, 11), // "enablePaste"
QT_MOC_LITERAL(38, 396, 9), // "selectAll"
QT_MOC_LITERAL(39, 406, 9), // "deleteTab"
QT_MOC_LITERAL(40, 416, 4), // "save"
QT_MOC_LITERAL(41, 421, 6), // "saveAs"
QT_MOC_LITERAL(42, 428, 6), // "rename"
QT_MOC_LITERAL(43, 435, 13), // "serialMonitor"
QT_MOC_LITERAL(44, 449, 11), // "sendProgram"
QT_MOC_LITERAL(45, 461, 22), // "programProcessFinished"
QT_MOC_LITERAL(46, 484, 8), // "exitCode"
QT_MOC_LITERAL(47, 493, 20), // "QProcess::ExitStatus"
QT_MOC_LITERAL(48, 514, 10), // "exitStatus"
QT_MOC_LITERAL(49, 525, 23), // "programProcessReadyRead"
QT_MOC_LITERAL(50, 549, 10), // "updateMenu"
QT_MOC_LITERAL(51, 560, 17), // "updateSerialPorts"
QT_MOC_LITERAL(52, 578, 12), // "updateBoards"
QT_MOC_LITERAL(53, 591, 19), // "enableProgramButton"
QT_MOC_LITERAL(54, 611, 19) // "enableMonitorButton"

    },
    "ProgramTab\0wantToSave\0\0wantToSaveAs\0"
    "wantToRename\0wantToDelete\0deleteFile\0"
    "platformChanged\0Platform*\0newPlatform\0"
    "programWindowUpdateRequest\0programEnable\0"
    "undoEnable\0redoEnable\0cutEnable\0"
    "copyEnable\0pasteEnable\0platform\0port\0"
    "board\0filename\0setPlatform\0newPlatformName\0"
    "setPort\0setBoard\0loadProgramFile\0"
    "textChanged\0undo\0enableUndo\0enable\0"
    "redo\0enableRedo\0cut\0enableCut\0copy\0"
    "enableCopy\0paste\0enablePaste\0selectAll\0"
    "deleteTab\0save\0saveAs\0rename\0serialMonitor\0"
    "sendProgram\0programProcessFinished\0"
    "exitCode\0QProcess::ExitStatus\0exitStatus\0"
    "programProcessReadyRead\0updateMenu\0"
    "updateSerialPorts\0updateBoards\0"
    "enableProgramButton\0enableMonitorButton"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ProgramTab[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      36,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  194,    2, 0x06 /* Public */,
       3,    1,  197,    2, 0x06 /* Public */,
       4,    1,  200,    2, 0x06 /* Public */,
       5,    2,  203,    2, 0x06 /* Public */,
       7,    1,  208,    2, 0x06 /* Public */,
      10,   10,  211,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      21,    1,  232,    2, 0x0a /* Public */,
      21,    1,  235,    2, 0x0a /* Public */,
      23,    1,  238,    2, 0x0a /* Public */,
      24,    1,  241,    2, 0x0a /* Public */,
      25,    0,  244,    2, 0x0a /* Public */,
      26,    0,  245,    2, 0x0a /* Public */,
      27,    0,  246,    2, 0x0a /* Public */,
      28,    1,  247,    2, 0x0a /* Public */,
      30,    0,  250,    2, 0x0a /* Public */,
      31,    1,  251,    2, 0x0a /* Public */,
      32,    0,  254,    2, 0x0a /* Public */,
      33,    1,  255,    2, 0x0a /* Public */,
      34,    0,  258,    2, 0x0a /* Public */,
      35,    1,  259,    2, 0x0a /* Public */,
      36,    0,  262,    2, 0x0a /* Public */,
      37,    1,  263,    2, 0x0a /* Public */,
      38,    0,  266,    2, 0x0a /* Public */,
      39,    0,  267,    2, 0x0a /* Public */,
      40,    0,  268,    2, 0x0a /* Public */,
      41,    0,  269,    2, 0x0a /* Public */,
      42,    0,  270,    2, 0x0a /* Public */,
      43,    0,  271,    2, 0x0a /* Public */,
      44,    0,  272,    2, 0x0a /* Public */,
      45,    2,  273,    2, 0x0a /* Public */,
      49,    0,  278,    2, 0x0a /* Public */,
      50,    0,  279,    2, 0x0a /* Public */,
      51,    0,  280,    2, 0x0a /* Public */,
      52,    0,  281,    2, 0x0a /* Public */,
      53,    0,  282,    2, 0x09 /* Protected */,
      54,    0,  283,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    2,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool, 0x80000000 | 8, QMetaType::QString, QMetaType::QString, QMetaType::QString,   11,   12,   13,   14,   15,   16,   17,   18,   19,   20,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   22,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   29,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   29,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   29,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   29,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   29,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 47,   46,   48,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ProgramTab::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ProgramTab *_t = static_cast<ProgramTab *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->wantToSave((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->wantToSaveAs((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->wantToRename((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->wantToDelete((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: _t->platformChanged((*reinterpret_cast< Platform*(*)>(_a[1]))); break;
        case 5: _t->programWindowUpdateRequest((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6])),(*reinterpret_cast< Platform*(*)>(_a[7])),(*reinterpret_cast< const QString(*)>(_a[8])),(*reinterpret_cast< const QString(*)>(_a[9])),(*reinterpret_cast< const QString(*)>(_a[10]))); break;
        case 6: _t->setPlatform((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->setPlatform((*reinterpret_cast< Platform*(*)>(_a[1]))); break;
        case 8: _t->setPort((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->setBoard((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: { bool _r = _t->loadProgramFile();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: _t->textChanged(); break;
        case 12: _t->undo(); break;
        case 13: _t->enableUndo((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->redo(); break;
        case 15: _t->enableRedo((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->cut(); break;
        case 17: _t->enableCut((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->copy(); break;
        case 19: _t->enableCopy((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->paste(); break;
        case 21: _t->enablePaste((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: _t->selectAll(); break;
        case 23: _t->deleteTab(); break;
        case 24: _t->save(); break;
        case 25: _t->saveAs(); break;
        case 26: _t->rename(); break;
        case 27: _t->serialMonitor(); break;
        case 28: _t->sendProgram(); break;
        case 29: _t->programProcessFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        case 30: _t->programProcessReadyRead(); break;
        case 31: _t->updateMenu(); break;
        case 32: _t->updateSerialPorts(); break;
        case 33: _t->updateBoards(); break;
        case 34: _t->enableProgramButton(); break;
        case 35: _t->enableMonitorButton(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Platform* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 6:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Platform* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Platform* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ProgramTab::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ProgramTab::wantToSave)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ProgramTab::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ProgramTab::wantToSaveAs)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (ProgramTab::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ProgramTab::wantToRename)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (ProgramTab::*_t)(int , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ProgramTab::wantToDelete)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (ProgramTab::*_t)(Platform * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ProgramTab::platformChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (ProgramTab::*_t)(bool , bool , bool , bool , bool , bool , Platform * , const QString & , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ProgramTab::programWindowUpdateRequest)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject ProgramTab::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_ProgramTab.data,
      qt_meta_data_ProgramTab,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ProgramTab::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ProgramTab::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ProgramTab.stringdata0))
        return static_cast<void*>(const_cast< ProgramTab*>(this));
    return QFrame::qt_metacast(_clname);
}

int ProgramTab::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 36)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 36;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 36)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 36;
    }
    return _id;
}

// SIGNAL 0
void ProgramTab::wantToSave(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ProgramTab::wantToSaveAs(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ProgramTab::wantToRename(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ProgramTab::wantToDelete(int _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ProgramTab::platformChanged(Platform * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ProgramTab::programWindowUpdateRequest(bool _t1, bool _t2, bool _t3, bool _t4, bool _t5, bool _t6, Platform * _t7, const QString & _t8, const QString & _t9, const QString & _t10)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)), const_cast<void*>(reinterpret_cast<const void*>(&_t8)), const_cast<void*>(reinterpret_cast<const void*>(&_t9)), const_cast<void*>(reinterpret_cast<const void*>(&_t10)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
struct qt_meta_stringdata_DeleteDialog_t {
    QByteArrayData data[5];
    char stringdata0[52];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DeleteDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DeleteDialog_t qt_meta_stringdata_DeleteDialog = {
    {
QT_MOC_LITERAL(0, 0, 12), // "DeleteDialog"
QT_MOC_LITERAL(1, 13, 13), // "buttonClicked"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 16), // "QAbstractButton*"
QT_MOC_LITERAL(4, 45, 6) // "button"

    },
    "DeleteDialog\0buttonClicked\0\0"
    "QAbstractButton*\0button"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DeleteDialog[] = {

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
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void DeleteDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DeleteDialog *_t = static_cast<DeleteDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->buttonClicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractButton* >(); break;
            }
            break;
        }
    }
}

const QMetaObject DeleteDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DeleteDialog.data,
      qt_meta_data_DeleteDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DeleteDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DeleteDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DeleteDialog.stringdata0))
        return static_cast<void*>(const_cast< DeleteDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int DeleteDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
