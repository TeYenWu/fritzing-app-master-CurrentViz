/****************************************************************************
** Meta object code from reading C++ file 'schematicsketchwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/sketch/schematicsketchwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'schematicsketchwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SchematicSketchWidget_t {
    QByteArrayData data[22];
    char stringdata0[268];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SchematicSketchWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SchematicSketchWidget_t qt_meta_stringdata_SchematicSketchWidget = {
    {
QT_MOC_LITERAL(0, 0, 21), // "SchematicSketchWidget"
QT_MOC_LITERAL(1, 22, 10), // "setVoltage"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 7), // "voltage"
QT_MOC_LITERAL(4, 42, 6), // "doEmit"
QT_MOC_LITERAL(5, 49, 7), // "setProp"
QT_MOC_LITERAL(6, 57, 9), // "ItemBase*"
QT_MOC_LITERAL(7, 67, 8), // "propName"
QT_MOC_LITERAL(8, 76, 18), // "translatedPropName"
QT_MOC_LITERAL(9, 95, 8), // "oldValue"
QT_MOC_LITERAL(10, 104, 8), // "newValue"
QT_MOC_LITERAL(11, 113, 6), // "redraw"
QT_MOC_LITERAL(12, 120, 16), // "setInstanceTitle"
QT_MOC_LITERAL(13, 137, 2), // "id"
QT_MOC_LITERAL(14, 140, 8), // "oldTitle"
QT_MOC_LITERAL(15, 149, 8), // "newTitle"
QT_MOC_LITERAL(16, 158, 10), // "isUndoable"
QT_MOC_LITERAL(17, 169, 13), // "updateBigDots"
QT_MOC_LITERAL(18, 183, 32), // "getDroppedItemViewLayerPlacement"
QT_MOC_LITERAL(19, 216, 10), // "ModelPart*"
QT_MOC_LITERAL(20, 227, 9), // "modelPart"
QT_MOC_LITERAL(21, 237, 30) // "ViewLayer::ViewLayerPlacement&"

    },
    "SchematicSketchWidget\0setVoltage\0\0"
    "voltage\0doEmit\0setProp\0ItemBase*\0"
    "propName\0translatedPropName\0oldValue\0"
    "newValue\0redraw\0setInstanceTitle\0id\0"
    "oldTitle\0newTitle\0isUndoable\0updateBigDots\0"
    "getDroppedItemViewLayerPlacement\0"
    "ModelPart*\0modelPart\0"
    "ViewLayer::ViewLayerPlacement&"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SchematicSketchWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x0a /* Public */,
       5,    6,   44,    2, 0x0a /* Public */,
      12,    5,   57,    2, 0x0a /* Public */,
      17,    0,   68,    2, 0x09 /* Protected */,
      18,    2,   69,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Bool,    3,    4,
    QMetaType::Void, 0x80000000 | 6, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::Bool,    2,    7,    8,    9,   10,   11,
    QMetaType::Void, QMetaType::Long, QMetaType::QString, QMetaType::QString, QMetaType::Bool, QMetaType::Bool,   13,   14,   15,   16,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 19, 0x80000000 | 21,   20,    2,

       0        // eod
};

void SchematicSketchWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SchematicSketchWidget *_t = static_cast<SchematicSketchWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setVoltage((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->setProp((*reinterpret_cast< ItemBase*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6]))); break;
        case 2: _t->setInstanceTitle((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 3: _t->updateBigDots(); break;
        case 4: _t->getDroppedItemViewLayerPlacement((*reinterpret_cast< ModelPart*(*)>(_a[1])),(*reinterpret_cast< ViewLayer::ViewLayerPlacement(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ItemBase* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ModelPart* >(); break;
            }
            break;
        }
    }
}

const QMetaObject SchematicSketchWidget::staticMetaObject = {
    { &PCBSketchWidget::staticMetaObject, qt_meta_stringdata_SchematicSketchWidget.data,
      qt_meta_data_SchematicSketchWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SchematicSketchWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SchematicSketchWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SchematicSketchWidget.stringdata0))
        return static_cast<void*>(const_cast< SchematicSketchWidget*>(this));
    return PCBSketchWidget::qt_metacast(_clname);
}

int SchematicSketchWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PCBSketchWidget::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
