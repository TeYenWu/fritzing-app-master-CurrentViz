/****************************************************************************
** Meta object code from reading C++ file 'sketchwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/sketch/sketchwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#include <QtCore/QSet>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sketchwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SizeItem_t {
    QByteArrayData data[1];
    char stringdata0[9];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SizeItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SizeItem_t qt_meta_stringdata_SizeItem = {
    {
QT_MOC_LITERAL(0, 0, 8) // "SizeItem"

    },
    "SizeItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SizeItem[] = {

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

void SizeItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject SizeItem::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SizeItem.data,
      qt_meta_data_SizeItem,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SizeItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SizeItem::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SizeItem.stringdata0))
        return static_cast<void*>(const_cast< SizeItem*>(this));
    if (!strcmp(_clname, "QGraphicsLineItem"))
        return static_cast< QGraphicsLineItem*>(const_cast< SizeItem*>(this));
    return QObject::qt_metacast(_clname);
}

int SizeItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_SketchWidget_t {
    QByteArrayData data[216];
    char stringdata0[3164];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SketchWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SketchWidget_t qt_meta_stringdata_SketchWidget = {
    {
QT_MOC_LITERAL(0, 0, 12), // "SketchWidget"
QT_MOC_LITERAL(1, 13, 15), // "itemAddedSignal"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 10), // "ModelPart*"
QT_MOC_LITERAL(4, 41, 9), // "ItemBase*"
QT_MOC_LITERAL(5, 51, 29), // "ViewLayer::ViewLayerPlacement"
QT_MOC_LITERAL(6, 81, 12), // "ViewGeometry"
QT_MOC_LITERAL(7, 94, 2), // "id"
QT_MOC_LITERAL(8, 97, 13), // "SketchWidget*"
QT_MOC_LITERAL(9, 111, 10), // "dropOrigin"
QT_MOC_LITERAL(10, 122, 17), // "itemDeletedSignal"
QT_MOC_LITERAL(11, 140, 20), // "clearSelectionSignal"
QT_MOC_LITERAL(12, 161, 18), // "itemSelectedSignal"
QT_MOC_LITERAL(13, 180, 5), // "state"
QT_MOC_LITERAL(14, 186, 15), // "itemMovedSignal"
QT_MOC_LITERAL(15, 202, 22), // "wireDisconnectedSignal"
QT_MOC_LITERAL(16, 225, 6), // "fromID"
QT_MOC_LITERAL(17, 232, 15), // "fromConnectorID"
QT_MOC_LITERAL(18, 248, 19), // "wireConnectedSignal"
QT_MOC_LITERAL(19, 268, 4), // "toID"
QT_MOC_LITERAL(20, 273, 13), // "toConnectorID"
QT_MOC_LITERAL(21, 287, 22), // "changeConnectionSignal"
QT_MOC_LITERAL(22, 310, 7), // "connect"
QT_MOC_LITERAL(23, 318, 17), // "updateConnections"
QT_MOC_LITERAL(24, 336, 23), // "copyBoundingRectsSignal"
QT_MOC_LITERAL(25, 360, 22), // "QHash<QString,QRectF>&"
QT_MOC_LITERAL(26, 383, 18), // "cleanUpWiresSignal"
QT_MOC_LITERAL(27, 402, 20), // "CleanUpWiresCommand*"
QT_MOC_LITERAL(28, 423, 22), // "selectionChangedSignal"
QT_MOC_LITERAL(29, 446, 12), // "resizeSignal"
QT_MOC_LITERAL(30, 459, 10), // "dropSignal"
QT_MOC_LITERAL(31, 470, 3), // "pos"
QT_MOC_LITERAL(32, 474, 19), // "routingStatusSignal"
QT_MOC_LITERAL(33, 494, 13), // "RoutingStatus"
QT_MOC_LITERAL(34, 508, 12), // "movingSignal"
QT_MOC_LITERAL(35, 521, 13), // "QUndoCommand*"
QT_MOC_LITERAL(36, 535, 13), // "parentCommand"
QT_MOC_LITERAL(37, 549, 20), // "selectAllItemsSignal"
QT_MOC_LITERAL(38, 570, 6), // "doEmit"
QT_MOC_LITERAL(39, 577, 17), // "checkStickySignal"
QT_MOC_LITERAL(40, 595, 12), // "checkCurrent"
QT_MOC_LITERAL(41, 608, 19), // "CheckStickyCommand*"
QT_MOC_LITERAL(42, 628, 19), // "disconnectAllSignal"
QT_MOC_LITERAL(43, 648, 21), // "QList<ConnectorItem*>"
QT_MOC_LITERAL(44, 670, 31), // "QHash<ItemBase*,SketchWidget*>&"
QT_MOC_LITERAL(45, 702, 13), // "itemsToDelete"
QT_MOC_LITERAL(46, 716, 19), // "setResistanceSignal"
QT_MOC_LITERAL(47, 736, 6), // "itemID"
QT_MOC_LITERAL(48, 743, 10), // "resistance"
QT_MOC_LITERAL(49, 754, 10), // "pinSpacing"
QT_MOC_LITERAL(50, 765, 13), // "setPropSignal"
QT_MOC_LITERAL(51, 779, 4), // "prop"
QT_MOC_LITERAL(52, 784, 5), // "value"
QT_MOC_LITERAL(53, 790, 8), // "doRedraw"
QT_MOC_LITERAL(54, 799, 22), // "setInstanceTitleSignal"
QT_MOC_LITERAL(55, 822, 8), // "oldTitle"
QT_MOC_LITERAL(56, 831, 8), // "newTitle"
QT_MOC_LITERAL(57, 840, 10), // "isUndoable"
QT_MOC_LITERAL(58, 851, 19), // "statusMessageSignal"
QT_MOC_LITERAL(59, 871, 7), // "timeout"
QT_MOC_LITERAL(60, 879, 24), // "showLabelFirstTimeSignal"
QT_MOC_LITERAL(61, 904, 4), // "show"
QT_MOC_LITERAL(62, 909, 15), // "dropPasteSignal"
QT_MOC_LITERAL(63, 925, 23), // "changeBoardLayersSignal"
QT_MOC_LITERAL(64, 949, 18), // "deleteTracesSignal"
QT_MOC_LITERAL(65, 968, 16), // "QSet<ItemBase*>&"
QT_MOC_LITERAL(66, 985, 12), // "deletedItems"
QT_MOC_LITERAL(67, 998, 17), // "otherDeletedItems"
QT_MOC_LITERAL(68, 1016, 12), // "QList<long>&"
QT_MOC_LITERAL(69, 1029, 10), // "deletedIDs"
QT_MOC_LITERAL(70, 1040, 9), // "isForeign"
QT_MOC_LITERAL(71, 1050, 31), // "makeDeleteItemCommandPrepSignal"
QT_MOC_LITERAL(72, 1082, 8), // "itemBase"
QT_MOC_LITERAL(73, 1091, 7), // "foreign"
QT_MOC_LITERAL(74, 1099, 32), // "makeDeleteItemCommandFinalSignal"
QT_MOC_LITERAL(75, 1132, 20), // "cursorLocationSignal"
QT_MOC_LITERAL(76, 1153, 7), // "xinches"
QT_MOC_LITERAL(77, 1161, 7), // "yinches"
QT_MOC_LITERAL(78, 1169, 5), // "width"
QT_MOC_LITERAL(79, 1175, 6), // "height"
QT_MOC_LITERAL(80, 1182, 21), // "ratsnestConnectSignal"
QT_MOC_LITERAL(81, 1204, 11), // "connectorID"
QT_MOC_LITERAL(82, 1216, 34), // "updatePartLabelInstanceTitleS..."
QT_MOC_LITERAL(83, 1251, 16), // "filenameIfSignal"
QT_MOC_LITERAL(84, 1268, 8), // "QString&"
QT_MOC_LITERAL(85, 1277, 8), // "filename"
QT_MOC_LITERAL(86, 1286, 21), // "collectRatsnestSignal"
QT_MOC_LITERAL(87, 1308, 21), // "QList<SketchWidget*>&"
QT_MOC_LITERAL(88, 1330, 20), // "foreignSketchWidgets"
QT_MOC_LITERAL(89, 1351, 20), // "removeRatsnestSignal"
QT_MOC_LITERAL(90, 1372, 22), // "QList<ConnectorEdge*>&"
QT_MOC_LITERAL(91, 1395, 6), // "cutSet"
QT_MOC_LITERAL(92, 1402, 21), // "updateLayerMenuSignal"
QT_MOC_LITERAL(93, 1424, 20), // "swapBoardImageSignal"
QT_MOC_LITERAL(94, 1445, 12), // "sketchWidget"
QT_MOC_LITERAL(95, 1458, 8), // "moduleID"
QT_MOC_LITERAL(96, 1467, 7), // "addName"
QT_MOC_LITERAL(97, 1475, 16), // "canConnectSignal"
QT_MOC_LITERAL(98, 1492, 5), // "Wire*"
QT_MOC_LITERAL(99, 1498, 4), // "from"
QT_MOC_LITERAL(100, 1503, 2), // "to"
QT_MOC_LITERAL(101, 1506, 5), // "bool&"
QT_MOC_LITERAL(102, 1512, 15), // "swapStartSignal"
QT_MOC_LITERAL(103, 1528, 10), // "SwapThing&"
QT_MOC_LITERAL(104, 1539, 9), // "swapThing"
QT_MOC_LITERAL(105, 1549, 6), // "master"
QT_MOC_LITERAL(106, 1556, 7), // "showing"
QT_MOC_LITERAL(107, 1564, 26), // "clickedItemCandidateSignal"
QT_MOC_LITERAL(108, 1591, 14), // "QGraphicsItem*"
QT_MOC_LITERAL(109, 1606, 2), // "ok"
QT_MOC_LITERAL(110, 1609, 13), // "resizedSignal"
QT_MOC_LITERAL(111, 1623, 22), // "cleanupRatsnestsSignal"
QT_MOC_LITERAL(112, 1646, 16), // "addSubpartSignal"
QT_MOC_LITERAL(113, 1663, 9), // "subpartID"
QT_MOC_LITERAL(114, 1673, 38), // "getDroppedItemViewLayerPlacem..."
QT_MOC_LITERAL(115, 1712, 9), // "modelPart"
QT_MOC_LITERAL(116, 1722, 30), // "ViewLayer::ViewLayerPlacement&"
QT_MOC_LITERAL(117, 1753, 15), // "packItemsSignal"
QT_MOC_LITERAL(118, 1769, 7), // "columns"
QT_MOC_LITERAL(119, 1777, 11), // "QList<long>"
QT_MOC_LITERAL(120, 1789, 3), // "ids"
QT_MOC_LITERAL(121, 1793, 6), // "parent"
QT_MOC_LITERAL(122, 1800, 13), // "itemAddedSlot"
QT_MOC_LITERAL(123, 1814, 15), // "itemDeletedSlot"
QT_MOC_LITERAL(124, 1830, 18), // "clearSelectionSlot"
QT_MOC_LITERAL(125, 1849, 16), // "itemSelectedSlot"
QT_MOC_LITERAL(126, 1866, 20), // "selectionChangedSlot"
QT_MOC_LITERAL(127, 1887, 15), // "wireChangedSlot"
QT_MOC_LITERAL(128, 1903, 7), // "oldLine"
QT_MOC_LITERAL(129, 1911, 7), // "newLine"
QT_MOC_LITERAL(130, 1919, 6), // "oldPos"
QT_MOC_LITERAL(131, 1926, 6), // "newPos"
QT_MOC_LITERAL(132, 1933, 14), // "ConnectorItem*"
QT_MOC_LITERAL(133, 1948, 20), // "wireChangedCurveSlot"
QT_MOC_LITERAL(134, 1969, 13), // "const Bezier*"
QT_MOC_LITERAL(135, 1983, 4), // "oldB"
QT_MOC_LITERAL(136, 1988, 4), // "newB"
QT_MOC_LITERAL(137, 1993, 16), // "triggerFirstTime"
QT_MOC_LITERAL(138, 2010, 13), // "wireSplitSlot"
QT_MOC_LITERAL(139, 2024, 12), // "wireJoinSlot"
QT_MOC_LITERAL(140, 2037, 20), // "clickedConnectorItem"
QT_MOC_LITERAL(141, 2058, 21), // "toggleLayerVisibility"
QT_MOC_LITERAL(142, 2080, 17), // "wireConnectedSlot"
QT_MOC_LITERAL(143, 2098, 20), // "wireDisconnectedSlot"
QT_MOC_LITERAL(144, 2119, 20), // "changeConnectionSlot"
QT_MOC_LITERAL(145, 2140, 17), // "restartPasteCount"
QT_MOC_LITERAL(146, 2158, 14), // "dragIsDoneSlot"
QT_MOC_LITERAL(147, 2173, 9), // "ItemDrag*"
QT_MOC_LITERAL(148, 2183, 13), // "statusMessage"
QT_MOC_LITERAL(149, 2197, 7), // "message"
QT_MOC_LITERAL(150, 2205, 16), // "cleanUpWiresSlot"
QT_MOC_LITERAL(151, 2222, 18), // "updateInfoViewSlot"
QT_MOC_LITERAL(152, 2241, 21), // "spaceBarIsPressedSlot"
QT_MOC_LITERAL(153, 2263, 17), // "autoScrollTimeout"
QT_MOC_LITERAL(154, 2281, 21), // "dragAutoScrollTimeout"
QT_MOC_LITERAL(155, 2303, 21), // "moveAutoScrollTimeout"
QT_MOC_LITERAL(156, 2325, 14), // "rememberSticky"
QT_MOC_LITERAL(157, 2340, 21), // "copyBoundingRectsSlot"
QT_MOC_LITERAL(158, 2362, 14), // "deleteRatsnest"
QT_MOC_LITERAL(159, 2377, 16), // "deleteTracesSlot"
QT_MOC_LITERAL(160, 2394, 13), // "vScrollToZero"
QT_MOC_LITERAL(161, 2408, 17), // "arrowTimerTimeout"
QT_MOC_LITERAL(162, 2426, 29), // "makeDeleteItemCommandPrepSlot"
QT_MOC_LITERAL(163, 2456, 30), // "makeDeleteItemCommandFinalSlot"
QT_MOC_LITERAL(164, 2487, 32), // "updatePartLabelInstanceTitleSlot"
QT_MOC_LITERAL(165, 2520, 19), // "changePinLabelsSlot"
QT_MOC_LITERAL(166, 2540, 9), // "singleRow"
QT_MOC_LITERAL(167, 2550, 15), // "changePinLabels"
QT_MOC_LITERAL(168, 2566, 19), // "collectRatsnestSlot"
QT_MOC_LITERAL(169, 2586, 18), // "removeRatsnestSlot"
QT_MOC_LITERAL(170, 2605, 15), // "deleteTemporary"
QT_MOC_LITERAL(171, 2621, 10), // "canConnect"
QT_MOC_LITERAL(172, 2632, 9), // "swapStart"
QT_MOC_LITERAL(173, 2642, 32), // "getDroppedItemViewLayerPlacement"
QT_MOC_LITERAL(174, 2675, 15), // "changeWireColor"
QT_MOC_LITERAL(175, 2691, 8), // "newColor"
QT_MOC_LITERAL(176, 2700, 19), // "changeWireWidthMils"
QT_MOC_LITERAL(177, 2720, 8), // "newWidth"
QT_MOC_LITERAL(178, 2729, 14), // "selectAllItems"
QT_MOC_LITERAL(179, 2744, 11), // "setNoteText"
QT_MOC_LITERAL(180, 2756, 7), // "newText"
QT_MOC_LITERAL(181, 2764, 16), // "setInstanceTitle"
QT_MOC_LITERAL(182, 2781, 16), // "incInstanceTitle"
QT_MOC_LITERAL(183, 2798, 13), // "showPartLabel"
QT_MOC_LITERAL(184, 2812, 6), // "showIt"
QT_MOC_LITERAL(185, 2819, 11), // "checkSticky"
QT_MOC_LITERAL(186, 2831, 11), // "resizeBoard"
QT_MOC_LITERAL(187, 2843, 1), // "w"
QT_MOC_LITERAL(188, 2845, 1), // "h"
QT_MOC_LITERAL(189, 2847, 16), // "resizeJumperItem"
QT_MOC_LITERAL(190, 2864, 2), // "c0"
QT_MOC_LITERAL(191, 2867, 2), // "c1"
QT_MOC_LITERAL(192, 2870, 17), // "disconnectAllSlot"
QT_MOC_LITERAL(193, 2888, 13), // "setResistance"
QT_MOC_LITERAL(194, 2902, 7), // "setProp"
QT_MOC_LITERAL(195, 2910, 6), // "redraw"
QT_MOC_LITERAL(196, 2917, 8), // "propName"
QT_MOC_LITERAL(197, 2926, 18), // "translatedPropName"
QT_MOC_LITERAL(198, 2945, 8), // "oldValue"
QT_MOC_LITERAL(199, 2954, 8), // "newValue"
QT_MOC_LITERAL(200, 2963, 11), // "setHoleSize"
QT_MOC_LITERAL(201, 2975, 7), // "QRectF&"
QT_MOC_LITERAL(202, 2983, 7), // "oldRect"
QT_MOC_LITERAL(203, 2991, 7), // "newRect"
QT_MOC_LITERAL(204, 2999, 18), // "showLabelFirstTime"
QT_MOC_LITERAL(205, 3018, 17), // "changeBoardLayers"
QT_MOC_LITERAL(206, 3036, 6), // "layers"
QT_MOC_LITERAL(207, 3043, 16), // "updateConnectors"
QT_MOC_LITERAL(208, 3060, 15), // "ratsnestConnect"
QT_MOC_LITERAL(209, 3076, 16), // "cleanupRatsnests"
QT_MOC_LITERAL(210, 3093, 10), // "addSubpart"
QT_MOC_LITERAL(211, 3104, 9), // "subpartid"
QT_MOC_LITERAL(212, 3114, 9), // "packItems"
QT_MOC_LITERAL(213, 3124, 9), // "gridColor"
QT_MOC_LITERAL(214, 3134, 13), // "ratsnestWidth"
QT_MOC_LITERAL(215, 3148, 15) // "ratsnestOpacity"

    },
    "SketchWidget\0itemAddedSignal\0\0ModelPart*\0"
    "ItemBase*\0ViewLayer::ViewLayerPlacement\0"
    "ViewGeometry\0id\0SketchWidget*\0dropOrigin\0"
    "itemDeletedSignal\0clearSelectionSignal\0"
    "itemSelectedSignal\0state\0itemMovedSignal\0"
    "wireDisconnectedSignal\0fromID\0"
    "fromConnectorID\0wireConnectedSignal\0"
    "toID\0toConnectorID\0changeConnectionSignal\0"
    "connect\0updateConnections\0"
    "copyBoundingRectsSignal\0QHash<QString,QRectF>&\0"
    "cleanUpWiresSignal\0CleanUpWiresCommand*\0"
    "selectionChangedSignal\0resizeSignal\0"
    "dropSignal\0pos\0routingStatusSignal\0"
    "RoutingStatus\0movingSignal\0QUndoCommand*\0"
    "parentCommand\0selectAllItemsSignal\0"
    "doEmit\0checkStickySignal\0checkCurrent\0"
    "CheckStickyCommand*\0disconnectAllSignal\0"
    "QList<ConnectorItem*>\0"
    "QHash<ItemBase*,SketchWidget*>&\0"
    "itemsToDelete\0setResistanceSignal\0"
    "itemID\0resistance\0pinSpacing\0setPropSignal\0"
    "prop\0value\0doRedraw\0setInstanceTitleSignal\0"
    "oldTitle\0newTitle\0isUndoable\0"
    "statusMessageSignal\0timeout\0"
    "showLabelFirstTimeSignal\0show\0"
    "dropPasteSignal\0changeBoardLayersSignal\0"
    "deleteTracesSignal\0QSet<ItemBase*>&\0"
    "deletedItems\0otherDeletedItems\0"
    "QList<long>&\0deletedIDs\0isForeign\0"
    "makeDeleteItemCommandPrepSignal\0"
    "itemBase\0foreign\0makeDeleteItemCommandFinalSignal\0"
    "cursorLocationSignal\0xinches\0yinches\0"
    "width\0height\0ratsnestConnectSignal\0"
    "connectorID\0updatePartLabelInstanceTitleSignal\0"
    "filenameIfSignal\0QString&\0filename\0"
    "collectRatsnestSignal\0QList<SketchWidget*>&\0"
    "foreignSketchWidgets\0removeRatsnestSignal\0"
    "QList<ConnectorEdge*>&\0cutSet\0"
    "updateLayerMenuSignal\0swapBoardImageSignal\0"
    "sketchWidget\0moduleID\0addName\0"
    "canConnectSignal\0Wire*\0from\0to\0bool&\0"
    "swapStartSignal\0SwapThing&\0swapThing\0"
    "master\0showing\0clickedItemCandidateSignal\0"
    "QGraphicsItem*\0ok\0resizedSignal\0"
    "cleanupRatsnestsSignal\0addSubpartSignal\0"
    "subpartID\0getDroppedItemViewLayerPlacementSignal\0"
    "modelPart\0ViewLayer::ViewLayerPlacement&\0"
    "packItemsSignal\0columns\0QList<long>\0"
    "ids\0parent\0itemAddedSlot\0itemDeletedSlot\0"
    "clearSelectionSlot\0itemSelectedSlot\0"
    "selectionChangedSlot\0wireChangedSlot\0"
    "oldLine\0newLine\0oldPos\0newPos\0"
    "ConnectorItem*\0wireChangedCurveSlot\0"
    "const Bezier*\0oldB\0newB\0triggerFirstTime\0"
    "wireSplitSlot\0wireJoinSlot\0"
    "clickedConnectorItem\0toggleLayerVisibility\0"
    "wireConnectedSlot\0wireDisconnectedSlot\0"
    "changeConnectionSlot\0restartPasteCount\0"
    "dragIsDoneSlot\0ItemDrag*\0statusMessage\0"
    "message\0cleanUpWiresSlot\0updateInfoViewSlot\0"
    "spaceBarIsPressedSlot\0autoScrollTimeout\0"
    "dragAutoScrollTimeout\0moveAutoScrollTimeout\0"
    "rememberSticky\0copyBoundingRectsSlot\0"
    "deleteRatsnest\0deleteTracesSlot\0"
    "vScrollToZero\0arrowTimerTimeout\0"
    "makeDeleteItemCommandPrepSlot\0"
    "makeDeleteItemCommandFinalSlot\0"
    "updatePartLabelInstanceTitleSlot\0"
    "changePinLabelsSlot\0singleRow\0"
    "changePinLabels\0collectRatsnestSlot\0"
    "removeRatsnestSlot\0deleteTemporary\0"
    "canConnect\0swapStart\0"
    "getDroppedItemViewLayerPlacement\0"
    "changeWireColor\0newColor\0changeWireWidthMils\0"
    "newWidth\0selectAllItems\0setNoteText\0"
    "newText\0setInstanceTitle\0incInstanceTitle\0"
    "showPartLabel\0showIt\0checkSticky\0"
    "resizeBoard\0w\0h\0resizeJumperItem\0c0\0"
    "c1\0disconnectAllSlot\0setResistance\0"
    "setProp\0redraw\0propName\0translatedPropName\0"
    "oldValue\0newValue\0setHoleSize\0QRectF&\0"
    "oldRect\0newRect\0showLabelFirstTime\0"
    "changeBoardLayers\0layers\0updateConnectors\0"
    "ratsnestConnect\0cleanupRatsnests\0"
    "addSubpart\0subpartid\0packItems\0gridColor\0"
    "ratsnestWidth\0ratsnestOpacity"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SketchWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
     112,   14, // methods
       3, 1216, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      47,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    6,  574,    2, 0x06 /* Public */,
      10,    1,  587,    2, 0x06 /* Public */,
      11,    0,  590,    2, 0x06 /* Public */,
      12,    2,  591,    2, 0x06 /* Public */,
      14,    1,  596,    2, 0x06 /* Public */,
      15,    2,  599,    2, 0x06 /* Public */,
      18,    4,  604,    2, 0x06 /* Public */,
      21,    7,  613,    2, 0x06 /* Public */,
      24,    1,  628,    2, 0x06 /* Public */,
      26,    1,  631,    2, 0x06 /* Public */,
      28,    0,  634,    2, 0x06 /* Public */,
      29,    0,  635,    2, 0x06 /* Public */,
      30,    1,  636,    2, 0x06 /* Public */,
      32,    2,  639,    2, 0x06 /* Public */,
      34,    2,  644,    2, 0x06 /* Public */,
      37,    2,  649,    2, 0x06 /* Public */,
      39,    4,  654,    2, 0x06 /* Public */,
      42,    3,  663,    2, 0x06 /* Public */,
      46,    4,  670,    2, 0x06 /* Public */,
      50,    5,  679,    2, 0x06 /* Public */,
      54,    5,  690,    2, 0x06 /* Public */,
      58,    2,  701,    2, 0x06 /* Public */,
      60,    3,  706,    2, 0x06 /* Public */,
      62,    1,  713,    2, 0x06 /* Public */,
      63,    2,  716,    2, 0x06 /* Public */,
      64,    5,  721,    2, 0x06 /* Public */,
      71,    3,  732,    2, 0x06 /* Public */,
      74,    3,  739,    2, 0x06 /* Public */,
      75,    4,  746,    2, 0x06 /* Public */,
      75,    3,  755,    2, 0x26 /* Public | MethodCloned */,
      75,    2,  762,    2, 0x26 /* Public | MethodCloned */,
      80,    4,  767,    2, 0x06 /* Public */,
      82,    1,  776,    2, 0x06 /* Public */,
      83,    1,  779,    2, 0x06 /* Public */,
      86,    1,  782,    2, 0x06 /* Public */,
      89,    2,  785,    2, 0x06 /* Public */,
      92,    0,  790,    2, 0x06 /* Public */,
      93,    5,  791,    2, 0x06 /* Public */,
      97,    3,  802,    2, 0x06 /* Public */,
     102,    2,  809,    2, 0x06 /* Public */,
     106,    1,  814,    2, 0x06 /* Public */,
     107,    2,  817,    2, 0x06 /* Public */,
     110,    1,  822,    2, 0x06 /* Public */,
     111,    1,  825,    2, 0x06 /* Public */,
     112,    3,  828,    2, 0x06 /* Public */,
     114,    2,  835,    2, 0x06 /* Public */,
     117,    4,  840,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
     122,    6,  849,    2, 0x09 /* Protected */,
     123,    1,  862,    2, 0x09 /* Protected */,
     124,    0,  865,    2, 0x09 /* Protected */,
     125,    2,  866,    2, 0x09 /* Protected */,
     126,    0,  871,    2, 0x09 /* Protected */,
     127,    7,  872,    2, 0x09 /* Protected */,
     133,    4,  887,    2, 0x09 /* Protected */,
     138,    4,  896,    2, 0x09 /* Protected */,
     139,    2,  905,    2, 0x09 /* Protected */,
     141,    0,  910,    2, 0x09 /* Protected */,
     142,    4,  911,    2, 0x09 /* Protected */,
     143,    2,  920,    2, 0x09 /* Protected */,
     144,    7,  925,    2, 0x09 /* Protected */,
     145,    0,  940,    2, 0x09 /* Protected */,
     146,    1,  941,    2, 0x09 /* Protected */,
     148,    2,  944,    2, 0x09 /* Protected */,
     148,    1,  949,    2, 0x29 /* Protected | MethodCloned */,
     150,    1,  952,    2, 0x09 /* Protected */,
     151,    0,  955,    2, 0x09 /* Protected */,
     152,    1,  956,    2, 0x09 /* Protected */,
     153,    0,  959,    2, 0x09 /* Protected */,
     154,    0,  960,    2, 0x09 /* Protected */,
     155,    0,  961,    2, 0x09 /* Protected */,
     156,    2,  962,    2, 0x09 /* Protected */,
     156,    2,  967,    2, 0x09 /* Protected */,
     157,    1,  972,    2, 0x09 /* Protected */,
     158,    2,  975,    2, 0x09 /* Protected */,
     159,    5,  980,    2, 0x09 /* Protected */,
     160,    0,  991,    2, 0x09 /* Protected */,
     161,    0,  992,    2, 0x09 /* Protected */,
     162,    3,  993,    2, 0x09 /* Protected */,
     163,    3, 1000,    2, 0x09 /* Protected */,
     164,    1, 1007,    2, 0x09 /* Protected */,
     165,    2, 1010,    2, 0x09 /* Protected */,
     167,    2, 1015,    2, 0x09 /* Protected */,
     168,    1, 1020,    2, 0x09 /* Protected */,
     169,    2, 1023,    2, 0x09 /* Protected */,
     170,    0, 1028,    2, 0x09 /* Protected */,
     171,    3, 1029,    2, 0x09 /* Protected */,
     172,    2, 1036,    2, 0x09 /* Protected */,
     173,    2, 1041,    2, 0x09 /* Protected */,
     174,    1, 1046,    2, 0x0a /* Public */,
     176,    1, 1049,    2, 0x0a /* Public */,
     178,    2, 1052,    2, 0x0a /* Public */,
     179,    2, 1057,    2, 0x0a /* Public */,
     181,    5, 1062,    2, 0x0a /* Public */,
     182,    1, 1073,    2, 0x0a /* Public */,
     183,    2, 1076,    2, 0x0a /* Public */,
     185,    4, 1081,    2, 0x0a /* Public */,
     186,    3, 1090,    2, 0x0a /* Public */,
     189,    4, 1097,    2, 0x0a /* Public */,
     192,    3, 1106,    2, 0x0a /* Public */,
     193,    4, 1113,    2, 0x0a /* Public */,
     193,    2, 1122,    2, 0x0a /* Public */,
     194,    5, 1127,    2, 0x0a /* Public */,
     194,    6, 1138,    2, 0x0a /* Public */,
     200,    8, 1151,    2, 0x0a /* Public */,
     204,    3, 1168,    2, 0x0a /* Public */,
     186,    3, 1175,    2, 0x0a /* Public */,
     205,    2, 1182,    2, 0x0a /* Public */,
     207,    0, 1187,    2, 0x0a /* Public */,
     208,    4, 1188,    2, 0x0a /* Public */,
     209,    1, 1197,    2, 0x0a /* Public */,
     210,    3, 1200,    2, 0x0a /* Public */,
     212,    4, 1207,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 4, 0x80000000 | 5, 0x80000000 | 6, QMetaType::Long, 0x80000000 | 8,    2,    2,    2,    2,    7,    9,
    QMetaType::Void, QMetaType::Long,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Long, QMetaType::Bool,    7,   13,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, QMetaType::Long, QMetaType::QString,   16,   17,
    QMetaType::Void, QMetaType::Long, QMetaType::QString, QMetaType::Long, QMetaType::QString,   16,   17,   19,   20,
    QMetaType::Void, QMetaType::Long, QMetaType::QString, QMetaType::Long, QMetaType::QString, 0x80000000 | 5, QMetaType::Bool, QMetaType::Bool,   16,   17,   19,   20,    2,   22,   23,
    QMetaType::Void, 0x80000000 | 25,    2,
    QMetaType::Void, 0x80000000 | 27,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   31,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 33,    2,    2,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 35,    2,   36,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,   13,   38,
    QMetaType::Void, QMetaType::Long, QMetaType::Bool, QMetaType::Bool, 0x80000000 | 41,    7,   38,   40,    2,
    QMetaType::Void, 0x80000000 | 43, 0x80000000 | 44, 0x80000000 | 35,    2,   45,   36,
    QMetaType::Void, QMetaType::Long, QMetaType::QString, QMetaType::QString, QMetaType::Bool,   47,   48,   49,   38,
    QMetaType::Void, QMetaType::Long, QMetaType::QString, QMetaType::QString, QMetaType::Bool, QMetaType::Bool,   47,   51,   52,   53,   38,
    QMetaType::Void, QMetaType::Long, QMetaType::QString, QMetaType::QString, QMetaType::Bool, QMetaType::Bool,    7,   55,   56,   57,   38,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    2,   59,
    QMetaType::Void, QMetaType::Long, QMetaType::Bool, QMetaType::Bool,   47,   61,   38,
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    2,   38,
    QMetaType::Void, 0x80000000 | 65, 0x80000000 | 44, 0x80000000 | 68, QMetaType::Bool, 0x80000000 | 35,   66,   67,   69,   70,   36,
    QMetaType::Void, 0x80000000 | 4, QMetaType::Bool, 0x80000000 | 35,   72,   73,   36,
    QMetaType::Void, 0x80000000 | 4, QMetaType::Bool, 0x80000000 | 35,   72,   73,   36,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,   76,   77,   78,   79,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double,   76,   77,   78,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,   76,   77,
    QMetaType::Void, QMetaType::Long, QMetaType::QString, QMetaType::Bool, QMetaType::Bool,    7,   81,   22,   38,
    QMetaType::Void, QMetaType::Long,   47,
    QMetaType::Void, 0x80000000 | 84,   85,
    QMetaType::Void, 0x80000000 | 87,   88,
    QMetaType::Void, 0x80000000 | 90, 0x80000000 | 35,   91,   36,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 4, QMetaType::QString, QMetaType::QString, QMetaType::Bool,   94,   72,   85,   95,   96,
    QMetaType::Void, 0x80000000 | 98, 0x80000000 | 4, 0x80000000 | 101,   99,  100,   22,
    QMetaType::Void, 0x80000000 | 103, QMetaType::Bool,  104,  105,
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void, 0x80000000 | 108, 0x80000000 | 101,    2,  109,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, QMetaType::Bool,   38,
    QMetaType::Void, QMetaType::Long, QMetaType::Long, QMetaType::Bool,    7,  113,   38,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 116,  115,    2,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 119, 0x80000000 | 35, QMetaType::Bool,  118,  120,  121,   38,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 4, 0x80000000 | 5, 0x80000000 | 6, QMetaType::Long, 0x80000000 | 8,    2,    2,    2,    2,    7,    9,
    QMetaType::Void, QMetaType::Long,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Long, QMetaType::Bool,    7,   13,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 98, QMetaType::QLineF, QMetaType::QLineF, QMetaType::QPointF, QMetaType::QPointF, 0x80000000 | 132, 0x80000000 | 132,    2,  128,  129,  130,  131,   99,  100,
    QMetaType::Void, 0x80000000 | 98, 0x80000000 | 134, 0x80000000 | 134, QMetaType::Bool,    2,  135,  136,  137,
    QMetaType::Void, 0x80000000 | 98, QMetaType::QPointF, QMetaType::QPointF, QMetaType::QLineF,    2,  131,  130,  128,
    QMetaType::Void, 0x80000000 | 98, 0x80000000 | 132,    2,  140,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Long, QMetaType::QString, QMetaType::Long, QMetaType::QString,   16,   17,   19,   20,
    QMetaType::Void, QMetaType::Long, QMetaType::QString,   16,   17,
    QMetaType::Void, QMetaType::Long, QMetaType::QString, QMetaType::Long, QMetaType::QString, 0x80000000 | 5, QMetaType::Bool, QMetaType::Bool,   16,   17,   19,   20,    2,   22,   23,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 147,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,  149,   59,
    QMetaType::Void, QMetaType::QString,  149,
    QMetaType::Void, 0x80000000 | 27,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Long, 0x80000000 | 35,    7,   36,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 35,    2,   36,
    QMetaType::Void, 0x80000000 | 25,    2,
    QMetaType::Void, 0x80000000 | 98, 0x80000000 | 35,    2,   36,
    QMetaType::Void, 0x80000000 | 65, 0x80000000 | 44, 0x80000000 | 68, QMetaType::Bool, 0x80000000 | 35,   66,   67,   69,   70,   36,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, QMetaType::Bool, 0x80000000 | 35,   72,   73,   36,
    QMetaType::Void, 0x80000000 | 4, QMetaType::Bool, 0x80000000 | 35,   72,   73,   36,
    QMetaType::Void, QMetaType::Long,   47,
    QMetaType::Void, 0x80000000 | 4, QMetaType::Bool,   72,  166,
    QMetaType::Void, 0x80000000 | 4, QMetaType::Bool,    2,  166,
    QMetaType::Void, 0x80000000 | 87,   88,
    QMetaType::Void, 0x80000000 | 90, 0x80000000 | 35,   91,   36,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 98, 0x80000000 | 4, 0x80000000 | 101,   99,  100,   22,
    QMetaType::Long, 0x80000000 | 103, QMetaType::Bool,  104,  105,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 116,  115,    2,
    QMetaType::Void, QMetaType::QString,  175,
    QMetaType::Void, QMetaType::QString,  177,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,   13,   38,
    QMetaType::Void, QMetaType::Long, QMetaType::QString,   47,  180,
    QMetaType::Void, QMetaType::Long, QMetaType::QString, QMetaType::QString, QMetaType::Bool, QMetaType::Bool,    7,   55,   56,   57,   38,
    QMetaType::Void, QMetaType::Long,    7,
    QMetaType::Void, QMetaType::Long, QMetaType::Bool,    7,  184,
    QMetaType::Void, QMetaType::Long, QMetaType::Bool, QMetaType::Bool, 0x80000000 | 41,    7,   38,   40,    2,
    0x80000000 | 4, QMetaType::Long, QMetaType::Double, QMetaType::Double,    7,  187,  188,
    QMetaType::Void, QMetaType::Long, QMetaType::QPointF, QMetaType::QPointF, QMetaType::QPointF,    7,   31,  190,  191,
    QMetaType::Void, 0x80000000 | 43, 0x80000000 | 44, 0x80000000 | 35,    2,   45,   36,
    QMetaType::Void, QMetaType::Long, QMetaType::QString, QMetaType::QString, QMetaType::Bool,   47,   48,   49,   38,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   48,   49,
    QMetaType::Void, QMetaType::Long, QMetaType::QString, QMetaType::QString, QMetaType::Bool, QMetaType::Bool,   47,   51,   52,  195,   38,
    QMetaType::Void, 0x80000000 | 4, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::Bool,    2,  196,  197,  198,  199,  195,
    QMetaType::Void, 0x80000000 | 4, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, 0x80000000 | 201, 0x80000000 | 201, QMetaType::Bool,    2,  196,  197,  198,  199,  202,  203,  195,
    QMetaType::Void, QMetaType::Long, QMetaType::Bool, QMetaType::Bool,   47,   61,   38,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Bool,  187,  188,   38,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,  206,   38,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Long, QMetaType::QString, QMetaType::Bool, QMetaType::Bool,    7,   81,   22,   38,
    QMetaType::Void, QMetaType::Bool,   38,
    QMetaType::Void, QMetaType::Long, QMetaType::Long, QMetaType::Bool,    7,  211,   38,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 119, 0x80000000 | 35, QMetaType::Bool,  118,  120,  121,   38,

 // properties: name, type, flags
     213, QMetaType::QColor, 0x00095103,
     214, QMetaType::Double, 0x00095103,
     215, QMetaType::Double, 0x00095103,

       0        // eod
};

void SketchWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SketchWidget *_t = static_cast<SketchWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->itemAddedSignal((*reinterpret_cast< ModelPart*(*)>(_a[1])),(*reinterpret_cast< ItemBase*(*)>(_a[2])),(*reinterpret_cast< ViewLayer::ViewLayerPlacement(*)>(_a[3])),(*reinterpret_cast< const ViewGeometry(*)>(_a[4])),(*reinterpret_cast< long(*)>(_a[5])),(*reinterpret_cast< SketchWidget*(*)>(_a[6]))); break;
        case 1: _t->itemDeletedSignal((*reinterpret_cast< long(*)>(_a[1]))); break;
        case 2: _t->clearSelectionSignal(); break;
        case 3: _t->itemSelectedSignal((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: _t->itemMovedSignal((*reinterpret_cast< ItemBase*(*)>(_a[1]))); break;
        case 5: _t->wireDisconnectedSignal((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 6: _t->wireConnectedSignal((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< long(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 7: _t->changeConnectionSignal((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< long(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< ViewLayer::ViewLayerPlacement(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6])),(*reinterpret_cast< bool(*)>(_a[7]))); break;
        case 8: _t->copyBoundingRectsSignal((*reinterpret_cast< QHash<QString,QRectF>(*)>(_a[1]))); break;
        case 9: _t->cleanUpWiresSignal((*reinterpret_cast< CleanUpWiresCommand*(*)>(_a[1]))); break;
        case 10: _t->selectionChangedSignal(); break;
        case 11: _t->resizeSignal(); break;
        case 12: _t->dropSignal((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 13: _t->routingStatusSignal((*reinterpret_cast< SketchWidget*(*)>(_a[1])),(*reinterpret_cast< const RoutingStatus(*)>(_a[2]))); break;
        case 14: _t->movingSignal((*reinterpret_cast< SketchWidget*(*)>(_a[1])),(*reinterpret_cast< QUndoCommand*(*)>(_a[2]))); break;
        case 15: _t->selectAllItemsSignal((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 16: _t->checkStickySignal((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< CheckStickyCommand*(*)>(_a[4]))); break;
        case 17: _t->disconnectAllSignal((*reinterpret_cast< QList<ConnectorItem*>(*)>(_a[1])),(*reinterpret_cast< QHash<ItemBase*,SketchWidget*>(*)>(_a[2])),(*reinterpret_cast< QUndoCommand*(*)>(_a[3]))); break;
        case 18: _t->setResistanceSignal((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 19: _t->setPropSignal((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 20: _t->setInstanceTitleSignal((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 21: _t->statusMessageSignal((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 22: _t->showLabelFirstTimeSignal((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 23: _t->dropPasteSignal((*reinterpret_cast< SketchWidget*(*)>(_a[1]))); break;
        case 24: _t->changeBoardLayersSignal((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 25: _t->deleteTracesSignal((*reinterpret_cast< QSet<ItemBase*>(*)>(_a[1])),(*reinterpret_cast< QHash<ItemBase*,SketchWidget*>(*)>(_a[2])),(*reinterpret_cast< QList<long>(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< QUndoCommand*(*)>(_a[5]))); break;
        case 26: _t->makeDeleteItemCommandPrepSignal((*reinterpret_cast< ItemBase*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< QUndoCommand*(*)>(_a[3]))); break;
        case 27: _t->makeDeleteItemCommandFinalSignal((*reinterpret_cast< ItemBase*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< QUndoCommand*(*)>(_a[3]))); break;
        case 28: _t->cursorLocationSignal((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 29: _t->cursorLocationSignal((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 30: _t->cursorLocationSignal((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 31: _t->ratsnestConnectSignal((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 32: _t->updatePartLabelInstanceTitleSignal((*reinterpret_cast< long(*)>(_a[1]))); break;
        case 33: _t->filenameIfSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 34: _t->collectRatsnestSignal((*reinterpret_cast< QList<SketchWidget*>(*)>(_a[1]))); break;
        case 35: _t->removeRatsnestSignal((*reinterpret_cast< QList<ConnectorEdge*>(*)>(_a[1])),(*reinterpret_cast< QUndoCommand*(*)>(_a[2]))); break;
        case 36: _t->updateLayerMenuSignal(); break;
        case 37: _t->swapBoardImageSignal((*reinterpret_cast< SketchWidget*(*)>(_a[1])),(*reinterpret_cast< ItemBase*(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 38: _t->canConnectSignal((*reinterpret_cast< Wire*(*)>(_a[1])),(*reinterpret_cast< ItemBase*(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 39: _t->swapStartSignal((*reinterpret_cast< SwapThing(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 40: _t->showing((*reinterpret_cast< SketchWidget*(*)>(_a[1]))); break;
        case 41: _t->clickedItemCandidateSignal((*reinterpret_cast< QGraphicsItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 42: _t->resizedSignal((*reinterpret_cast< ItemBase*(*)>(_a[1]))); break;
        case 43: _t->cleanupRatsnestsSignal((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 44: _t->addSubpartSignal((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< long(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 45: _t->getDroppedItemViewLayerPlacementSignal((*reinterpret_cast< ModelPart*(*)>(_a[1])),(*reinterpret_cast< ViewLayer::ViewLayerPlacement(*)>(_a[2]))); break;
        case 46: _t->packItemsSignal((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QList<long>(*)>(_a[2])),(*reinterpret_cast< QUndoCommand*(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 47: _t->itemAddedSlot((*reinterpret_cast< ModelPart*(*)>(_a[1])),(*reinterpret_cast< ItemBase*(*)>(_a[2])),(*reinterpret_cast< ViewLayer::ViewLayerPlacement(*)>(_a[3])),(*reinterpret_cast< const ViewGeometry(*)>(_a[4])),(*reinterpret_cast< long(*)>(_a[5])),(*reinterpret_cast< SketchWidget*(*)>(_a[6]))); break;
        case 48: _t->itemDeletedSlot((*reinterpret_cast< long(*)>(_a[1]))); break;
        case 49: _t->clearSelectionSlot(); break;
        case 50: _t->itemSelectedSlot((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 51: _t->selectionChangedSlot(); break;
        case 52: _t->wireChangedSlot((*reinterpret_cast< Wire*(*)>(_a[1])),(*reinterpret_cast< const QLineF(*)>(_a[2])),(*reinterpret_cast< const QLineF(*)>(_a[3])),(*reinterpret_cast< QPointF(*)>(_a[4])),(*reinterpret_cast< QPointF(*)>(_a[5])),(*reinterpret_cast< ConnectorItem*(*)>(_a[6])),(*reinterpret_cast< ConnectorItem*(*)>(_a[7]))); break;
        case 53: _t->wireChangedCurveSlot((*reinterpret_cast< Wire*(*)>(_a[1])),(*reinterpret_cast< const Bezier*(*)>(_a[2])),(*reinterpret_cast< const Bezier*(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 54: _t->wireSplitSlot((*reinterpret_cast< Wire*(*)>(_a[1])),(*reinterpret_cast< QPointF(*)>(_a[2])),(*reinterpret_cast< QPointF(*)>(_a[3])),(*reinterpret_cast< const QLineF(*)>(_a[4]))); break;
        case 55: _t->wireJoinSlot((*reinterpret_cast< Wire*(*)>(_a[1])),(*reinterpret_cast< ConnectorItem*(*)>(_a[2]))); break;
        case 56: _t->toggleLayerVisibility(); break;
        case 57: _t->wireConnectedSlot((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< long(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 58: _t->wireDisconnectedSlot((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 59: _t->changeConnectionSlot((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< long(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< ViewLayer::ViewLayerPlacement(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6])),(*reinterpret_cast< bool(*)>(_a[7]))); break;
        case 60: _t->restartPasteCount(); break;
        case 61: _t->dragIsDoneSlot((*reinterpret_cast< ItemDrag*(*)>(_a[1]))); break;
        case 62: _t->statusMessage((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 63: _t->statusMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 64: _t->cleanUpWiresSlot((*reinterpret_cast< CleanUpWiresCommand*(*)>(_a[1]))); break;
        case 65: _t->updateInfoViewSlot(); break;
        case 66: _t->spaceBarIsPressedSlot((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 67: _t->autoScrollTimeout(); break;
        case 68: _t->dragAutoScrollTimeout(); break;
        case 69: _t->moveAutoScrollTimeout(); break;
        case 70: _t->rememberSticky((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< QUndoCommand*(*)>(_a[2]))); break;
        case 71: _t->rememberSticky((*reinterpret_cast< ItemBase*(*)>(_a[1])),(*reinterpret_cast< QUndoCommand*(*)>(_a[2]))); break;
        case 72: _t->copyBoundingRectsSlot((*reinterpret_cast< QHash<QString,QRectF>(*)>(_a[1]))); break;
        case 73: _t->deleteRatsnest((*reinterpret_cast< Wire*(*)>(_a[1])),(*reinterpret_cast< QUndoCommand*(*)>(_a[2]))); break;
        case 74: _t->deleteTracesSlot((*reinterpret_cast< QSet<ItemBase*>(*)>(_a[1])),(*reinterpret_cast< QHash<ItemBase*,SketchWidget*>(*)>(_a[2])),(*reinterpret_cast< QList<long>(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< QUndoCommand*(*)>(_a[5]))); break;
        case 75: _t->vScrollToZero(); break;
        case 76: _t->arrowTimerTimeout(); break;
        case 77: _t->makeDeleteItemCommandPrepSlot((*reinterpret_cast< ItemBase*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< QUndoCommand*(*)>(_a[3]))); break;
        case 78: _t->makeDeleteItemCommandFinalSlot((*reinterpret_cast< ItemBase*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< QUndoCommand*(*)>(_a[3]))); break;
        case 79: _t->updatePartLabelInstanceTitleSlot((*reinterpret_cast< long(*)>(_a[1]))); break;
        case 80: _t->changePinLabelsSlot((*reinterpret_cast< ItemBase*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 81: _t->changePinLabels((*reinterpret_cast< ItemBase*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 82: _t->collectRatsnestSlot((*reinterpret_cast< QList<SketchWidget*>(*)>(_a[1]))); break;
        case 83: _t->removeRatsnestSlot((*reinterpret_cast< QList<ConnectorEdge*>(*)>(_a[1])),(*reinterpret_cast< QUndoCommand*(*)>(_a[2]))); break;
        case 84: _t->deleteTemporary(); break;
        case 85: _t->canConnect((*reinterpret_cast< Wire*(*)>(_a[1])),(*reinterpret_cast< ItemBase*(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 86: { long _r = _t->swapStart((*reinterpret_cast< SwapThing(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< long*>(_a[0]) = _r; }  break;
        case 87: _t->getDroppedItemViewLayerPlacement((*reinterpret_cast< ModelPart*(*)>(_a[1])),(*reinterpret_cast< ViewLayer::ViewLayerPlacement(*)>(_a[2]))); break;
        case 88: _t->changeWireColor((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 89: _t->changeWireWidthMils((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 90: _t->selectAllItems((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 91: _t->setNoteText((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 92: _t->setInstanceTitle((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 93: _t->incInstanceTitle((*reinterpret_cast< long(*)>(_a[1]))); break;
        case 94: _t->showPartLabel((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 95: _t->checkSticky((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< CheckStickyCommand*(*)>(_a[4]))); break;
        case 96: { ItemBase* _r = _t->resizeBoard((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< ItemBase**>(_a[0]) = _r; }  break;
        case 97: _t->resizeJumperItem((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< QPointF(*)>(_a[2])),(*reinterpret_cast< QPointF(*)>(_a[3])),(*reinterpret_cast< QPointF(*)>(_a[4]))); break;
        case 98: _t->disconnectAllSlot((*reinterpret_cast< QList<ConnectorItem*>(*)>(_a[1])),(*reinterpret_cast< QHash<ItemBase*,SketchWidget*>(*)>(_a[2])),(*reinterpret_cast< QUndoCommand*(*)>(_a[3]))); break;
        case 99: _t->setResistance((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 100: _t->setResistance((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 101: _t->setProp((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 102: _t->setProp((*reinterpret_cast< ItemBase*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6]))); break;
        case 103: _t->setHoleSize((*reinterpret_cast< ItemBase*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< QRectF(*)>(_a[6])),(*reinterpret_cast< QRectF(*)>(_a[7])),(*reinterpret_cast< bool(*)>(_a[8]))); break;
        case 104: _t->showLabelFirstTime((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 105: _t->resizeBoard((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 106: _t->changeBoardLayers((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 107: _t->updateConnectors(); break;
        case 108: _t->ratsnestConnect((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 109: _t->cleanupRatsnests((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 110: _t->addSubpart((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< long(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 111: _t->packItems((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QList<long>(*)>(_a[2])),(*reinterpret_cast< QUndoCommand*(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
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
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ItemBase* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SketchWidget* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SketchWidget* >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<ConnectorItem*> >(); break;
            }
            break;
        case 23:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SketchWidget* >(); break;
            }
            break;
        case 26:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ItemBase* >(); break;
            }
            break;
        case 27:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ItemBase* >(); break;
            }
            break;
        case 37:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ItemBase* >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SketchWidget* >(); break;
            }
            break;
        case 38:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ItemBase* >(); break;
            }
            break;
        case 40:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SketchWidget* >(); break;
            }
            break;
        case 41:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGraphicsItem* >(); break;
            }
            break;
        case 42:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ItemBase* >(); break;
            }
            break;
        case 45:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ModelPart* >(); break;
            }
            break;
        case 46:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<long> >(); break;
            }
            break;
        case 47:
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
        case 52:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 6:
            case 5:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ConnectorItem* >(); break;
            }
            break;
        case 55:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ConnectorItem* >(); break;
            }
            break;
        case 71:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ItemBase* >(); break;
            }
            break;
        case 77:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ItemBase* >(); break;
            }
            break;
        case 78:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ItemBase* >(); break;
            }
            break;
        case 80:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ItemBase* >(); break;
            }
            break;
        case 81:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ItemBase* >(); break;
            }
            break;
        case 85:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ItemBase* >(); break;
            }
            break;
        case 87:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ModelPart* >(); break;
            }
            break;
        case 98:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<ConnectorItem*> >(); break;
            }
            break;
        case 102:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ItemBase* >(); break;
            }
            break;
        case 103:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ItemBase* >(); break;
            }
            break;
        case 111:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<long> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SketchWidget::*_t)(ModelPart * , ItemBase * , ViewLayer::ViewLayerPlacement , const ViewGeometry & , long , SketchWidget * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SketchWidget::itemAddedSignal)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SketchWidget::*_t)(long );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SketchWidget::itemDeletedSignal)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (SketchWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SketchWidget::clearSelectionSignal)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (SketchWidget::*_t)(long , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SketchWidget::itemSelectedSignal)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (SketchWidget::*_t)(ItemBase * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SketchWidget::itemMovedSignal)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (SketchWidget::*_t)(long , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SketchWidget::wireDisconnectedSignal)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (SketchWidget::*_t)(long , QString , long , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SketchWidget::wireConnectedSignal)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (SketchWidget::*_t)(long , QString , long , QString , ViewLayer::ViewLayerPlacement , bool , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SketchWidget::changeConnectionSignal)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (SketchWidget::*_t)(QHash<QString,QRectF> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SketchWidget::copyBoundingRectsSignal)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (SketchWidget::*_t)(CleanUpWiresCommand * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SketchWidget::cleanUpWiresSignal)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (SketchWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SketchWidget::selectionChangedSignal)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (SketchWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SketchWidget::resizeSignal)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (SketchWidget::*_t)(const QPoint & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SketchWidget::dropSignal)) {
                *result = 12;
                return;
            }
        }
        {
            typedef void (SketchWidget::*_t)(SketchWidget * , const RoutingStatus & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SketchWidget::routingStatusSignal)) {
                *result = 13;
                return;
            }
        }
        {
            typedef void (SketchWidget::*_t)(SketchWidget * , QUndoCommand * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SketchWidget::movingSignal)) {
                *result = 14;
                return;
            }
        }
        {
            typedef void (SketchWidget::*_t)(bool , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SketchWidget::selectAllItemsSignal)) {
                *result = 15;
                return;
            }
        }
        {
            typedef void (SketchWidget::*_t)(long , bool , bool , CheckStickyCommand * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SketchWidget::checkStickySignal)) {
                *result = 16;
                return;
            }
        }
        {
            typedef void (SketchWidget::*_t)(QList<ConnectorItem*> , QHash<ItemBase*,SketchWidget*> & , QUndoCommand * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SketchWidget::disconnectAllSignal)) {
                *result = 17;
                return;
            }
        }
        {
            typedef void (SketchWidget::*_t)(long , QString , QString , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SketchWidget::setResistanceSignal)) {
                *result = 18;
                return;
            }
        }
        {
            typedef void (SketchWidget::*_t)(long , const QString & , const QString & , bool , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SketchWidget::setPropSignal)) {
                *result = 19;
                return;
            }
        }
        {
            typedef void (SketchWidget::*_t)(long , const QString & , const QString & , bool , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SketchWidget::setInstanceTitleSignal)) {
                *result = 20;
                return;
            }
        }
        {
            typedef void (SketchWidget::*_t)(QString , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SketchWidget::statusMessageSignal)) {
                *result = 21;
                return;
            }
        }
        {
            typedef void (SketchWidget::*_t)(long , bool , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SketchWidget::showLabelFirstTimeSignal)) {
                *result = 22;
                return;
            }
        }
        {
            typedef void (SketchWidget::*_t)(SketchWidget * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SketchWidget::dropPasteSignal)) {
                *result = 23;
                return;
            }
        }
        {
            typedef void (SketchWidget::*_t)(int , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SketchWidget::changeBoardLayersSignal)) {
                *result = 24;
                return;
            }
        }
        {
            typedef void (SketchWidget::*_t)(QSet<ItemBase*> & , QHash<ItemBase*,SketchWidget*> & , QList<long> & , bool , QUndoCommand * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SketchWidget::deleteTracesSignal)) {
                *result = 25;
                return;
            }
        }
        {
            typedef void (SketchWidget::*_t)(ItemBase * , bool , QUndoCommand * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SketchWidget::makeDeleteItemCommandPrepSignal)) {
                *result = 26;
                return;
            }
        }
        {
            typedef void (SketchWidget::*_t)(ItemBase * , bool , QUndoCommand * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SketchWidget::makeDeleteItemCommandFinalSignal)) {
                *result = 27;
                return;
            }
        }
        {
            typedef void (SketchWidget::*_t)(double , double , double , double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SketchWidget::cursorLocationSignal)) {
                *result = 28;
                return;
            }
        }
        {
            typedef void (SketchWidget::*_t)(long , const QString & , bool , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SketchWidget::ratsnestConnectSignal)) {
                *result = 31;
                return;
            }
        }
        {
            typedef void (SketchWidget::*_t)(long );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SketchWidget::updatePartLabelInstanceTitleSignal)) {
                *result = 32;
                return;
            }
        }
        {
            typedef void (SketchWidget::*_t)(QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SketchWidget::filenameIfSignal)) {
                *result = 33;
                return;
            }
        }
        {
            typedef void (SketchWidget::*_t)(QList<SketchWidget*> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SketchWidget::collectRatsnestSignal)) {
                *result = 34;
                return;
            }
        }
        {
            typedef void (SketchWidget::*_t)(QList<struct ConnectorEdge*> & , QUndoCommand * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SketchWidget::removeRatsnestSignal)) {
                *result = 35;
                return;
            }
        }
        {
            typedef void (SketchWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SketchWidget::updateLayerMenuSignal)) {
                *result = 36;
                return;
            }
        }
        {
            typedef void (SketchWidget::*_t)(SketchWidget * , ItemBase * , const QString & , const QString & , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SketchWidget::swapBoardImageSignal)) {
                *result = 37;
                return;
            }
        }
        {
            typedef void (SketchWidget::*_t)(Wire * , ItemBase * , bool & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SketchWidget::canConnectSignal)) {
                *result = 38;
                return;
            }
        }
        {
            typedef void (SketchWidget::*_t)(SwapThing & , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SketchWidget::swapStartSignal)) {
                *result = 39;
                return;
            }
        }
        {
            typedef void (SketchWidget::*_t)(SketchWidget * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SketchWidget::showing)) {
                *result = 40;
                return;
            }
        }
        {
            typedef void (SketchWidget::*_t)(QGraphicsItem * , bool & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SketchWidget::clickedItemCandidateSignal)) {
                *result = 41;
                return;
            }
        }
        {
            typedef void (SketchWidget::*_t)(ItemBase * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SketchWidget::resizedSignal)) {
                *result = 42;
                return;
            }
        }
        {
            typedef void (SketchWidget::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SketchWidget::cleanupRatsnestsSignal)) {
                *result = 43;
                return;
            }
        }
        {
            typedef void (SketchWidget::*_t)(long , long , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SketchWidget::addSubpartSignal)) {
                *result = 44;
                return;
            }
        }
        {
            typedef void (SketchWidget::*_t)(ModelPart * , ViewLayer::ViewLayerPlacement & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SketchWidget::getDroppedItemViewLayerPlacementSignal)) {
                *result = 45;
                return;
            }
        }
        {
            typedef void (SketchWidget::*_t)(int , const QList<long> & , QUndoCommand * , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SketchWidget::packItemsSignal)) {
                *result = 46;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        SketchWidget *_t = static_cast<SketchWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = _t->gridColor(); break;
        case 1: *reinterpret_cast< double*>(_v) = _t->ratsnestWidth(); break;
        case 2: *reinterpret_cast< double*>(_v) = _t->ratsnestOpacity(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        SketchWidget *_t = static_cast<SketchWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setGridColor(*reinterpret_cast< QColor*>(_v)); break;
        case 1: _t->setRatsnestWidth(*reinterpret_cast< double*>(_v)); break;
        case 2: _t->setRatsnestOpacity(*reinterpret_cast< double*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject SketchWidget::staticMetaObject = {
    { &InfoGraphicsView::staticMetaObject, qt_meta_stringdata_SketchWidget.data,
      qt_meta_data_SketchWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SketchWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SketchWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SketchWidget.stringdata0))
        return static_cast<void*>(const_cast< SketchWidget*>(this));
    return InfoGraphicsView::qt_metacast(_clname);
}

int SketchWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = InfoGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 112)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 112;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 112)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 112;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void SketchWidget::itemAddedSignal(ModelPart * _t1, ItemBase * _t2, ViewLayer::ViewLayerPlacement _t3, const ViewGeometry & _t4, long _t5, SketchWidget * _t6)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SketchWidget::itemDeletedSignal(long _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SketchWidget::clearSelectionSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void SketchWidget::itemSelectedSignal(long _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void SketchWidget::itemMovedSignal(ItemBase * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void SketchWidget::wireDisconnectedSignal(long _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void SketchWidget::wireConnectedSignal(long _t1, QString _t2, long _t3, QString _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void SketchWidget::changeConnectionSignal(long _t1, QString _t2, long _t3, QString _t4, ViewLayer::ViewLayerPlacement _t5, bool _t6, bool _t7)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void SketchWidget::copyBoundingRectsSignal(QHash<QString,QRectF> & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void SketchWidget::cleanUpWiresSignal(CleanUpWiresCommand * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void SketchWidget::selectionChangedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 10, Q_NULLPTR);
}

// SIGNAL 11
void SketchWidget::resizeSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 11, Q_NULLPTR);
}

// SIGNAL 12
void SketchWidget::dropSignal(const QPoint & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void SketchWidget::routingStatusSignal(SketchWidget * _t1, const RoutingStatus & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void SketchWidget::movingSignal(SketchWidget * _t1, QUndoCommand * _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void SketchWidget::selectAllItemsSignal(bool _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void SketchWidget::checkStickySignal(long _t1, bool _t2, bool _t3, CheckStickyCommand * _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void SketchWidget::disconnectAllSignal(QList<ConnectorItem*> _t1, QHash<ItemBase*,SketchWidget*> & _t2, QUndoCommand * _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void SketchWidget::setResistanceSignal(long _t1, QString _t2, QString _t3, bool _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void SketchWidget::setPropSignal(long _t1, const QString & _t2, const QString & _t3, bool _t4, bool _t5)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void SketchWidget::setInstanceTitleSignal(long _t1, const QString & _t2, const QString & _t3, bool _t4, bool _t5)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void SketchWidget::statusMessageSignal(QString _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void SketchWidget::showLabelFirstTimeSignal(long _t1, bool _t2, bool _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void SketchWidget::dropPasteSignal(SketchWidget * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void SketchWidget::changeBoardLayersSignal(int _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void SketchWidget::deleteTracesSignal(QSet<ItemBase*> & _t1, QHash<ItemBase*,SketchWidget*> & _t2, QList<long> & _t3, bool _t4, QUndoCommand * _t5)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void SketchWidget::makeDeleteItemCommandPrepSignal(ItemBase * _t1, bool _t2, QUndoCommand * _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void SketchWidget::makeDeleteItemCommandFinalSignal(ItemBase * _t1, bool _t2, QUndoCommand * _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void SketchWidget::cursorLocationSignal(double _t1, double _t2, double _t3, double _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 31
void SketchWidget::ratsnestConnectSignal(long _t1, const QString & _t2, bool _t3, bool _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void SketchWidget::updatePartLabelInstanceTitleSignal(long _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}

// SIGNAL 33
void SketchWidget::filenameIfSignal(QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}

// SIGNAL 34
void SketchWidget::collectRatsnestSignal(QList<SketchWidget*> & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 34, _a);
}

// SIGNAL 35
void SketchWidget::removeRatsnestSignal(QList<struct ConnectorEdge*> & _t1, QUndoCommand * _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 35, _a);
}

// SIGNAL 36
void SketchWidget::updateLayerMenuSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 36, Q_NULLPTR);
}

// SIGNAL 37
void SketchWidget::swapBoardImageSignal(SketchWidget * _t1, ItemBase * _t2, const QString & _t3, const QString & _t4, bool _t5)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 37, _a);
}

// SIGNAL 38
void SketchWidget::canConnectSignal(Wire * _t1, ItemBase * _t2, bool & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 38, _a);
}

// SIGNAL 39
void SketchWidget::swapStartSignal(SwapThing & _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 39, _a);
}

// SIGNAL 40
void SketchWidget::showing(SketchWidget * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 40, _a);
}

// SIGNAL 41
void SketchWidget::clickedItemCandidateSignal(QGraphicsItem * _t1, bool & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 41, _a);
}

// SIGNAL 42
void SketchWidget::resizedSignal(ItemBase * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 42, _a);
}

// SIGNAL 43
void SketchWidget::cleanupRatsnestsSignal(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 43, _a);
}

// SIGNAL 44
void SketchWidget::addSubpartSignal(long _t1, long _t2, bool _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 44, _a);
}

// SIGNAL 45
void SketchWidget::getDroppedItemViewLayerPlacementSignal(ModelPart * _t1, ViewLayer::ViewLayerPlacement & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 45, _a);
}

// SIGNAL 46
void SketchWidget::packItemsSignal(int _t1, const QList<long> & _t2, QUndoCommand * _t3, bool _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 46, _a);
}
QT_END_MOC_NAMESPACE
