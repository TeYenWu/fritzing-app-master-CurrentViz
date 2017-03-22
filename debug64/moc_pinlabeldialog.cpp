/****************************************************************************
** Meta object code from reading C++ file 'pinlabeldialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/dialogs/pinlabeldialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pinlabeldialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PinLabelDialog_t {
    QByteArrayData data[7];
    char stringdata0[84];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PinLabelDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PinLabelDialog_t qt_meta_stringdata_PinLabelDialog = {
    {
QT_MOC_LITERAL(0, 0, 14), // "PinLabelDialog"
QT_MOC_LITERAL(1, 15, 12), // "labelChanged"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 13), // "buttonClicked"
QT_MOC_LITERAL(4, 43, 16), // "QAbstractButton*"
QT_MOC_LITERAL(5, 60, 11), // "undoChanged"
QT_MOC_LITERAL(6, 72, 11) // "labelEdited"

    },
    "PinLabelDialog\0labelChanged\0\0buttonClicked\0"
    "QAbstractButton*\0undoChanged\0labelEdited"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PinLabelDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x09 /* Protected */,
       3,    1,   35,    2, 0x09 /* Protected */,
       5,    1,   38,    2, 0x09 /* Protected */,
       6,    1,   41,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void PinLabelDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PinLabelDialog *_t = static_cast<PinLabelDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->labelChanged(); break;
        case 1: _t->buttonClicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 2: _t->undoChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->labelEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractButton* >(); break;
            }
            break;
        }
    }
}

const QMetaObject PinLabelDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_PinLabelDialog.data,
      qt_meta_data_PinLabelDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PinLabelDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PinLabelDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PinLabelDialog.stringdata0))
        return static_cast<void*>(const_cast< PinLabelDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int PinLabelDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
