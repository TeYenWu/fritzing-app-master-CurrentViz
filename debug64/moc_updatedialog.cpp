/****************************************************************************
** Meta object code from reading C++ file 'updatedialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/version/updatedialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'updatedialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_UpdateDialog_t {
    QByteArrayData data[11];
    char stringdata0[160];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UpdateDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UpdateDialog_t qt_meta_stringdata_UpdateDialog = {
    {
QT_MOC_LITERAL(0, 0, 12), // "UpdateDialog"
QT_MOC_LITERAL(1, 13, 17), // "enableAgainSignal"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 6), // "enable"
QT_MOC_LITERAL(4, 39, 21), // "releasesAvailableSlot"
QT_MOC_LITERAL(5, 61, 12), // "xmlErrorSlot"
QT_MOC_LITERAL(6, 74, 23), // "QXmlStreamReader::Error"
QT_MOC_LITERAL(7, 98, 9), // "errorCode"
QT_MOC_LITERAL(8, 108, 13), // "httpErrorSlot"
QT_MOC_LITERAL(9, 122, 27), // "QNetworkReply::NetworkError"
QT_MOC_LITERAL(10, 150, 9) // "stopClose"

    },
    "UpdateDialog\0enableAgainSignal\0\0enable\0"
    "releasesAvailableSlot\0xmlErrorSlot\0"
    "QXmlStreamReader::Error\0errorCode\0"
    "httpErrorSlot\0QNetworkReply::NetworkError\0"
    "stopClose"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UpdateDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   42,    2, 0x09 /* Protected */,
       5,    1,   43,    2, 0x09 /* Protected */,
       8,    1,   46,    2, 0x09 /* Protected */,
      10,    0,   49,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9,    2,
    QMetaType::Void,

       0        // eod
};

void UpdateDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UpdateDialog *_t = static_cast<UpdateDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->enableAgainSignal((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->releasesAvailableSlot(); break;
        case 2: _t->xmlErrorSlot((*reinterpret_cast< QXmlStreamReader::Error(*)>(_a[1]))); break;
        case 3: _t->httpErrorSlot((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        case 4: _t->stopClose(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply::NetworkError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (UpdateDialog::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&UpdateDialog::enableAgainSignal)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject UpdateDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_UpdateDialog.data,
      qt_meta_data_UpdateDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *UpdateDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UpdateDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_UpdateDialog.stringdata0))
        return static_cast<void*>(const_cast< UpdateDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int UpdateDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void UpdateDialog::enableAgainSignal(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
