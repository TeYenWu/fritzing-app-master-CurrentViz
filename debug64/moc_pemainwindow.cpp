/****************************************************************************
** Meta object code from reading C++ file 'pemainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/partseditor/pemainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pemainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_IconSketchWidget_t {
    QByteArrayData data[1];
    char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_IconSketchWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_IconSketchWidget_t qt_meta_stringdata_IconSketchWidget = {
    {
QT_MOC_LITERAL(0, 0, 16) // "IconSketchWidget"

    },
    "IconSketchWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_IconSketchWidget[] = {

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

void IconSketchWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject IconSketchWidget::staticMetaObject = {
    { &SketchWidget::staticMetaObject, qt_meta_stringdata_IconSketchWidget.data,
      qt_meta_data_IconSketchWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *IconSketchWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IconSketchWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_IconSketchWidget.stringdata0))
        return static_cast<void*>(const_cast< IconSketchWidget*>(this));
    return SketchWidget::qt_metacast(_clname);
}

int IconSketchWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SketchWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_PEMainWindow_t {
    QByteArrayData data[90];
    char stringdata0[1217];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PEMainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PEMainWindow_t qt_meta_stringdata_PEMainWindow = {
    {
QT_MOC_LITERAL(0, 0, 12), // "PEMainWindow"
QT_MOC_LITERAL(1, 13, 18), // "addToMyPartsSignal"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 10), // "ModelPart*"
QT_MOC_LITERAL(4, 44, 15), // "metadataChanged"
QT_MOC_LITERAL(5, 60, 4), // "name"
QT_MOC_LITERAL(6, 65, 5), // "value"
QT_MOC_LITERAL(7, 71, 17), // "propertiesChanged"
QT_MOC_LITERAL(8, 89, 22), // "QHash<QString,QString>"
QT_MOC_LITERAL(9, 112, 11), // "tagsChanged"
QT_MOC_LITERAL(10, 124, 24), // "connectorMetadataChanged"
QT_MOC_LITERAL(11, 149, 18), // "ConnectorMetadata*"
QT_MOC_LITERAL(12, 168, 17), // "removedConnectors"
QT_MOC_LITERAL(13, 186, 26), // "QList<ConnectorMetadata*>&"
QT_MOC_LITERAL(14, 213, 13), // "highlightSlot"
QT_MOC_LITERAL(15, 227, 15), // "PEGraphicsItem*"
QT_MOC_LITERAL(16, 243, 16), // "pegiMousePressed"
QT_MOC_LITERAL(17, 260, 5), // "bool&"
QT_MOC_LITERAL(18, 266, 6), // "ignore"
QT_MOC_LITERAL(19, 273, 17), // "pegiMouseReleased"
QT_MOC_LITERAL(20, 291, 22), // "pegiTerminalPointMoved"
QT_MOC_LITERAL(21, 314, 24), // "pegiTerminalPointChanged"
QT_MOC_LITERAL(22, 339, 6), // "before"
QT_MOC_LITERAL(23, 346, 5), // "after"
QT_MOC_LITERAL(24, 352, 17), // "switchedConnector"
QT_MOC_LITERAL(25, 370, 16), // "removedConnector"
QT_MOC_LITERAL(26, 387, 11), // "QDomElement"
QT_MOC_LITERAL(27, 399, 20), // "terminalPointChanged"
QT_MOC_LITERAL(28, 420, 3), // "how"
QT_MOC_LITERAL(29, 424, 5), // "coord"
QT_MOC_LITERAL(30, 430, 13), // "getSpinAmount"
QT_MOC_LITERAL(31, 444, 7), // "double&"
QT_MOC_LITERAL(32, 452, 6), // "amount"
QT_MOC_LITERAL(33, 459, 15), // "pickModeChanged"
QT_MOC_LITERAL(34, 475, 14), // "busModeChanged"
QT_MOC_LITERAL(35, 490, 21), // "connectorCountChanged"
QT_MOC_LITERAL(36, 512, 19), // "deleteBusConnection"
QT_MOC_LITERAL(37, 532, 11), // "newWireSlot"
QT_MOC_LITERAL(38, 544, 5), // "Wire*"
QT_MOC_LITERAL(39, 550, 15), // "wireChangedSlot"
QT_MOC_LITERAL(40, 566, 7), // "oldLine"
QT_MOC_LITERAL(41, 574, 7), // "newLine"
QT_MOC_LITERAL(42, 582, 6), // "oldPos"
QT_MOC_LITERAL(43, 589, 6), // "newPos"
QT_MOC_LITERAL(44, 596, 14), // "ConnectorItem*"
QT_MOC_LITERAL(45, 611, 4), // "from"
QT_MOC_LITERAL(46, 616, 2), // "to"
QT_MOC_LITERAL(47, 619, 21), // "connectorsTypeChanged"
QT_MOC_LITERAL(48, 641, 24), // "Connector::ConnectorType"
QT_MOC_LITERAL(49, 666, 10), // "smdChanged"
QT_MOC_LITERAL(50, 677, 7), // "showing"
QT_MOC_LITERAL(51, 685, 13), // "SketchWidget*"
QT_MOC_LITERAL(52, 699, 16), // "updateExportMenu"
QT_MOC_LITERAL(53, 716, 14), // "updateEditMenu"
QT_MOC_LITERAL(54, 731, 14), // "s2sMessageSlot"
QT_MOC_LITERAL(55, 746, 7), // "message"
QT_MOC_LITERAL(56, 754, 8), // "initZoom"
QT_MOC_LITERAL(57, 763, 16), // "showMetadataView"
QT_MOC_LITERAL(58, 780, 18), // "showConnectorsView"
QT_MOC_LITERAL(59, 799, 12), // "showIconView"
QT_MOC_LITERAL(60, 812, 9), // "loadImage"
QT_MOC_LITERAL(61, 822, 4), // "save"
QT_MOC_LITERAL(62, 827, 6), // "saveAs"
QT_MOC_LITERAL(63, 834, 8), // "showInOS"
QT_MOC_LITERAL(64, 843, 24), // "tabWidget_currentChanged"
QT_MOC_LITERAL(65, 868, 5), // "index"
QT_MOC_LITERAL(66, 874, 12), // "backupSketch"
QT_MOC_LITERAL(67, 887, 16), // "updateWindowMenu"
QT_MOC_LITERAL(68, 904, 14), // "updateWireMenu"
QT_MOC_LITERAL(69, 919, 10), // "closeLater"
QT_MOC_LITERAL(70, 930, 13), // "resetNextPick"
QT_MOC_LITERAL(71, 944, 15), // "reuseBreadboard"
QT_MOC_LITERAL(72, 960, 14), // "reuseSchematic"
QT_MOC_LITERAL(73, 975, 8), // "reusePCB"
QT_MOC_LITERAL(74, 984, 14), // "convertToTenth"
QT_MOC_LITERAL(75, 999, 14), // "hideOtherViews"
QT_MOC_LITERAL(76, 1014, 15), // "updateLayerMenu"
QT_MOC_LITERAL(77, 1030, 11), // "resetLayout"
QT_MOC_LITERAL(78, 1042, 24), // "updateAssignedConnectors"
QT_MOC_LITERAL(79, 1067, 13), // "itemAddedSlot"
QT_MOC_LITERAL(80, 1081, 9), // "ItemBase*"
QT_MOC_LITERAL(81, 1091, 29), // "ViewLayer::ViewLayerPlacement"
QT_MOC_LITERAL(82, 1121, 12), // "ViewGeometry"
QT_MOC_LITERAL(83, 1134, 2), // "id"
QT_MOC_LITERAL(84, 1137, 10), // "dropOrigin"
QT_MOC_LITERAL(85, 1148, 13), // "itemMovedSlot"
QT_MOC_LITERAL(86, 1162, 24), // "clickedItemCandidateSlot"
QT_MOC_LITERAL(87, 1187, 14), // "QGraphicsItem*"
QT_MOC_LITERAL(88, 1202, 2), // "ok"
QT_MOC_LITERAL(89, 1205, 11) // "resizedSlot"

    },
    "PEMainWindow\0addToMyPartsSignal\0\0"
    "ModelPart*\0metadataChanged\0name\0value\0"
    "propertiesChanged\0QHash<QString,QString>\0"
    "tagsChanged\0connectorMetadataChanged\0"
    "ConnectorMetadata*\0removedConnectors\0"
    "QList<ConnectorMetadata*>&\0highlightSlot\0"
    "PEGraphicsItem*\0pegiMousePressed\0bool&\0"
    "ignore\0pegiMouseReleased\0"
    "pegiTerminalPointMoved\0pegiTerminalPointChanged\0"
    "before\0after\0switchedConnector\0"
    "removedConnector\0QDomElement\0"
    "terminalPointChanged\0how\0coord\0"
    "getSpinAmount\0double&\0amount\0"
    "pickModeChanged\0busModeChanged\0"
    "connectorCountChanged\0deleteBusConnection\0"
    "newWireSlot\0Wire*\0wireChangedSlot\0"
    "oldLine\0newLine\0oldPos\0newPos\0"
    "ConnectorItem*\0from\0to\0connectorsTypeChanged\0"
    "Connector::ConnectorType\0smdChanged\0"
    "showing\0SketchWidget*\0updateExportMenu\0"
    "updateEditMenu\0s2sMessageSlot\0message\0"
    "initZoom\0showMetadataView\0showConnectorsView\0"
    "showIconView\0loadImage\0save\0saveAs\0"
    "showInOS\0tabWidget_currentChanged\0"
    "index\0backupSketch\0updateWindowMenu\0"
    "updateWireMenu\0closeLater\0resetNextPick\0"
    "reuseBreadboard\0reuseSchematic\0reusePCB\0"
    "convertToTenth\0hideOtherViews\0"
    "updateLayerMenu\0resetLayout\0"
    "updateAssignedConnectors\0itemAddedSlot\0"
    "ItemBase*\0ViewLayer::ViewLayerPlacement\0"
    "ViewGeometry\0id\0dropOrigin\0itemMovedSlot\0"
    "clickedItemCandidateSlot\0QGraphicsItem*\0"
    "ok\0resizedSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PEMainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      54,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  284,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    2,  287,    2, 0x0a /* Public */,
       7,    1,  292,    2, 0x0a /* Public */,
       9,    1,  295,    2, 0x0a /* Public */,
      10,    1,  298,    2, 0x0a /* Public */,
      12,    1,  301,    2, 0x0a /* Public */,
      14,    1,  304,    2, 0x0a /* Public */,
      16,    2,  307,    2, 0x0a /* Public */,
      19,    1,  312,    2, 0x0a /* Public */,
      20,    2,  315,    2, 0x0a /* Public */,
      21,    3,  320,    2, 0x0a /* Public */,
      24,    1,  327,    2, 0x0a /* Public */,
      25,    1,  330,    2, 0x0a /* Public */,
      27,    1,  333,    2, 0x0a /* Public */,
      27,    2,  336,    2, 0x0a /* Public */,
      30,    1,  341,    2, 0x0a /* Public */,
      33,    1,  344,    2, 0x0a /* Public */,
      34,    1,  347,    2, 0x0a /* Public */,
      35,    1,  350,    2, 0x0a /* Public */,
      36,    0,  353,    2, 0x0a /* Public */,
      37,    1,  354,    2, 0x0a /* Public */,
      39,    7,  357,    2, 0x0a /* Public */,
      47,    1,  372,    2, 0x0a /* Public */,
      49,    1,  375,    2, 0x0a /* Public */,
      50,    1,  378,    2, 0x0a /* Public */,
      52,    0,  381,    2, 0x0a /* Public */,
      53,    0,  382,    2, 0x0a /* Public */,
      54,    1,  383,    2, 0x0a /* Public */,
      56,    0,  386,    2, 0x09 /* Protected */,
      57,    0,  387,    2, 0x09 /* Protected */,
      58,    0,  388,    2, 0x09 /* Protected */,
      59,    0,  389,    2, 0x09 /* Protected */,
      60,    0,  390,    2, 0x09 /* Protected */,
      61,    0,  391,    2, 0x09 /* Protected */,
      62,    0,  392,    2, 0x09 /* Protected */,
      63,    0,  393,    2, 0x09 /* Protected */,
      64,    1,  394,    2, 0x09 /* Protected */,
      66,    0,  397,    2, 0x09 /* Protected */,
      67,    0,  398,    2, 0x09 /* Protected */,
      68,    0,  399,    2, 0x09 /* Protected */,
      69,    0,  400,    2, 0x09 /* Protected */,
      70,    0,  401,    2, 0x09 /* Protected */,
      71,    0,  402,    2, 0x09 /* Protected */,
      72,    0,  403,    2, 0x09 /* Protected */,
      73,    0,  404,    2, 0x09 /* Protected */,
      74,    0,  405,    2, 0x09 /* Protected */,
      75,    0,  406,    2, 0x09 /* Protected */,
      76,    1,  407,    2, 0x09 /* Protected */,
      76,    0,  410,    2, 0x29 /* Protected | MethodCloned */,
      78,    0,  411,    2, 0x09 /* Protected */,
      79,    6,  412,    2, 0x09 /* Protected */,
      85,    1,  425,    2, 0x09 /* Protected */,
      86,    2,  428,    2, 0x09 /* Protected */,
      89,    1,  433,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    5,    6,
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void, QMetaType::QStringList,    2,
    QMetaType::Void, 0x80000000 | 11,    2,
    QMetaType::Void, 0x80000000 | 13,    2,
    QMetaType::Void, 0x80000000 | 15,    2,
    QMetaType::Void, 0x80000000 | 15, 0x80000000 | 17,    2,   18,
    QMetaType::Void, 0x80000000 | 15,    2,
    QMetaType::Void, 0x80000000 | 15, QMetaType::QPointF,    2,    2,
    QMetaType::Void, 0x80000000 | 15, QMetaType::QPointF, QMetaType::QPointF,    2,   22,   23,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 26,    2,
    QMetaType::Void, QMetaType::QString,   28,
    QMetaType::Void, QMetaType::QString, QMetaType::Double,   29,    6,
    QMetaType::Void, 0x80000000 | 31,   32,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 38,    2,
    QMetaType::Void, 0x80000000 | 38, QMetaType::QLineF, QMetaType::QLineF, QMetaType::QPointF, QMetaType::QPointF, 0x80000000 | 44, 0x80000000 | 44,    2,   40,   41,   42,   43,   45,   46,
    QMetaType::Void, 0x80000000 | 48,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 51,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   55,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   65,
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
    QMetaType::Void, QMetaType::Bool,   77,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 80, 0x80000000 | 81, 0x80000000 | 82, QMetaType::Long, 0x80000000 | 51,    2,    2,    2,    2,   83,   84,
    QMetaType::Void, 0x80000000 | 80,    2,
    QMetaType::Void, 0x80000000 | 87, 0x80000000 | 17,    2,   88,
    QMetaType::Void, 0x80000000 | 80,    2,

       0        // eod
};

void PEMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PEMainWindow *_t = static_cast<PEMainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addToMyPartsSignal((*reinterpret_cast< ModelPart*(*)>(_a[1]))); break;
        case 1: _t->metadataChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->propertiesChanged((*reinterpret_cast< const QHash<QString,QString>(*)>(_a[1]))); break;
        case 3: _t->tagsChanged((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 4: _t->connectorMetadataChanged((*reinterpret_cast< ConnectorMetadata*(*)>(_a[1]))); break;
        case 5: _t->removedConnectors((*reinterpret_cast< QList<ConnectorMetadata*>(*)>(_a[1]))); break;
        case 6: _t->highlightSlot((*reinterpret_cast< PEGraphicsItem*(*)>(_a[1]))); break;
        case 7: _t->pegiMousePressed((*reinterpret_cast< PEGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 8: _t->pegiMouseReleased((*reinterpret_cast< PEGraphicsItem*(*)>(_a[1]))); break;
        case 9: _t->pegiTerminalPointMoved((*reinterpret_cast< PEGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< QPointF(*)>(_a[2]))); break;
        case 10: _t->pegiTerminalPointChanged((*reinterpret_cast< PEGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< QPointF(*)>(_a[2])),(*reinterpret_cast< QPointF(*)>(_a[3]))); break;
        case 11: _t->switchedConnector((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->removedConnector((*reinterpret_cast< const QDomElement(*)>(_a[1]))); break;
        case 13: _t->terminalPointChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->terminalPointChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 15: _t->getSpinAmount((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 16: _t->pickModeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->busModeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->connectorCountChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->deleteBusConnection(); break;
        case 20: _t->newWireSlot((*reinterpret_cast< Wire*(*)>(_a[1]))); break;
        case 21: _t->wireChangedSlot((*reinterpret_cast< Wire*(*)>(_a[1])),(*reinterpret_cast< const QLineF(*)>(_a[2])),(*reinterpret_cast< const QLineF(*)>(_a[3])),(*reinterpret_cast< QPointF(*)>(_a[4])),(*reinterpret_cast< QPointF(*)>(_a[5])),(*reinterpret_cast< ConnectorItem*(*)>(_a[6])),(*reinterpret_cast< ConnectorItem*(*)>(_a[7]))); break;
        case 22: _t->connectorsTypeChanged((*reinterpret_cast< Connector::ConnectorType(*)>(_a[1]))); break;
        case 23: _t->smdChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 24: _t->showing((*reinterpret_cast< SketchWidget*(*)>(_a[1]))); break;
        case 25: _t->updateExportMenu(); break;
        case 26: _t->updateEditMenu(); break;
        case 27: _t->s2sMessageSlot((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 28: _t->initZoom(); break;
        case 29: _t->showMetadataView(); break;
        case 30: _t->showConnectorsView(); break;
        case 31: _t->showIconView(); break;
        case 32: _t->loadImage(); break;
        case 33: { bool _r = _t->save();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 34: { bool _r = _t->saveAs();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 35: _t->showInOS(); break;
        case 36: _t->tabWidget_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 37: _t->backupSketch(); break;
        case 38: _t->updateWindowMenu(); break;
        case 39: _t->updateWireMenu(); break;
        case 40: _t->closeLater(); break;
        case 41: _t->resetNextPick(); break;
        case 42: _t->reuseBreadboard(); break;
        case 43: _t->reuseSchematic(); break;
        case 44: _t->reusePCB(); break;
        case 45: _t->convertToTenth(); break;
        case 46: _t->hideOtherViews(); break;
        case 47: _t->updateLayerMenu((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 48: _t->updateLayerMenu(); break;
        case 49: _t->updateAssignedConnectors(); break;
        case 50: _t->itemAddedSlot((*reinterpret_cast< ModelPart*(*)>(_a[1])),(*reinterpret_cast< ItemBase*(*)>(_a[2])),(*reinterpret_cast< ViewLayer::ViewLayerPlacement(*)>(_a[3])),(*reinterpret_cast< const ViewGeometry(*)>(_a[4])),(*reinterpret_cast< long(*)>(_a[5])),(*reinterpret_cast< SketchWidget*(*)>(_a[6]))); break;
        case 51: _t->itemMovedSlot((*reinterpret_cast< ItemBase*(*)>(_a[1]))); break;
        case 52: _t->clickedItemCandidateSlot((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 53: _t->resizedSlot((*reinterpret_cast< ItemBase*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ModelPart* >(); break;
            }
            break;
        case 20:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Wire* >(); break;
            }
            break;
        case 21:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 6:
            case 5:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ConnectorItem* >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Wire* >(); break;
            }
            break;
        case 24:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SketchWidget* >(); break;
            }
            break;
        case 50:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ItemBase* >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ModelPart* >(); break;
            case 5:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SketchWidget* >(); break;
            }
            break;
        case 51:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ItemBase* >(); break;
            }
            break;
        case 52:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGraphicsItem* >(); break;
            }
            break;
        case 53:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ItemBase* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PEMainWindow::*_t)(ModelPart * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PEMainWindow::addToMyPartsSignal)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject PEMainWindow::staticMetaObject = {
    { &MainWindow::staticMetaObject, qt_meta_stringdata_PEMainWindow.data,
      qt_meta_data_PEMainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PEMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PEMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PEMainWindow.stringdata0))
        return static_cast<void*>(const_cast< PEMainWindow*>(this));
    return MainWindow::qt_metacast(_clname);
}

int PEMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 54)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 54;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 54)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 54;
    }
    return _id;
}

// SIGNAL 0
void PEMainWindow::addToMyPartsSignal(ModelPart * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
