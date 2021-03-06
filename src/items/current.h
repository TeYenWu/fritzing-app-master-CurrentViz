#ifndef CURRENT_H
#define CURRENT_H
#include <QPainter>
#include <QObject>
#include <QtCore/qglobal.h>
#include <QtWidgets/qgraphicsitem.h>
#include <QtSvg/qgraphicssvgitem.h>
#include "../connectors/connectoritem.h"
#include <QtCore/qeasingcurve.h>
#include <QtCore/qobject.h>
#include "../debugdialog.h"
#include "../model/modelpart.h"

class Current : public QObject, public QGraphicsItem
{
    Q_OBJECT

public:
    Current(ConnectorItem *item1, ConnectorItem *item2, bool main);
    ~Current();
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    QRectF boundingRect() const;
    bool isAdjusted;
    ConnectorItem *firstItem;
    ConnectorItem *secondItem;
    float currentValue = 0;
    int row;
    int column;
    //QPainterPath shape() const;
    void hoverEnterEvent( QGraphicsSceneHoverEvent * event );
    void hoverLeaveEvent( QGraphicsSceneHoverEvent * event );
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void mouseReleaseEvent( QGraphicsSceneMouseEvent *event );
    bool inHover();
    void hoverUpdate();
    void setCurrentValue(float value);
    void paintCurrent(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget, int value);
    float getCurrentValue();
    void start(bool inOrOut);
    void setNodeDirection(float value);
public slots:
    void test();
protected:
    QColor currentColor;
    bool testing = false;
    bool isInit = false;
    int m_state = 0;
    QTimer * m_timerBlink;
    bool m_inactive;
    bool m_spaceBarWasPressed;
    bool m_hoverEnterSpaceBarWasPressed;
    bool m_main;

    QPainter *m_painter;
    const QStyleOptionGraphicsItem *m_option;
    QWidget *m_widget;
    qreal width;
    qreal height;

};

#endif // CURRENT_H
