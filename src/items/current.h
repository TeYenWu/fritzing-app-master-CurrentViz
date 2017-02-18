#ifndef CURRENT_H
#define CURRENT_H
#include <QPainter>
#include <QtCore/qglobal.h>
#include <QtWidgets/qgraphicsitem.h>
#include <QtSvg/qgraphicssvgitem.h>

class Current : public QGraphicsSvgItem
{
public:
    Current();
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    QRectF boundingRect() const;
    void hoverEnterEvent( QGraphicsSceneHoverEvent * event );
    void hoverLeaveEvent( QGraphicsSceneHoverEvent * event );
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void mouseReleaseEvent( QGraphicsSceneMouseEvent *event );
    bool inHover();
    void hoverUpdate();
protected:
    bool m_inactive;
    bool m_spaceBarWasPressed;
    bool m_hoverEnterSpaceBarWasPressed;
};

#endif // CURRENT_H
