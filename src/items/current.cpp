#include "current.h"
#include "../debugdialog.h"
#include <QWidget>
#include <QToolTip>
#include <QtGui>
#include <QAction>
#include <QBrush>
#include <QPen>
#include <QColor>
#include <limits>
#include <QSet>
#include <QBitmap>
#include <QApplication>
#include <qmath.h>
#include "../items/itembase.h"
#include "../sketch/infographicsview.h"
#include "../utils/cursormaster.h"

#define ALLMOUSEBUTTONS (Qt::LeftButton | Qt::MidButton | Qt::RightButton | Qt::XButton1 | Qt::XButton2)
Current::Current(ConnectorItem *item1, ConnectorItem *item2)
    : QGraphicsItem()
{
    m_inactive = false;
    m_hoverEnterSpaceBarWasPressed = m_spaceBarWasPressed = false;
    firstItem = item1;
    secondItem = item2;

    width = item1->boundingRect().width();
    qreal shigtHeight = firstItem->boundingRect().bottom() - firstItem->boundingRect().center().y();
    height = qAbs(item1->boundingRect().bottom()-item2->boundingRect().top())+shigtHeight;

    setAcceptHoverEvents(true);
    setAcceptedMouseButtons(ALLMOUSEBUTTONS);
    setToolTip(QString("%1").arg(item1->boundingRect().left()));
    this->setPos(firstItem->scenePos());
}

Current:: ~Current()
{
    this->scene()->removeItem(this);
}
void Current::hoverEnterEvent ( QGraphicsSceneHoverEvent * event ){
    InfoGraphicsView * infoGraphicsView = InfoGraphicsView::getInfoGraphicsView(this);
    if (infoGraphicsView != NULL && infoGraphicsView->spaceBarIsPressed()) {
        m_hoverEnterSpaceBarWasPressed = true;
        event->ignore();
        return;
    }
    bool setDefaultCursor = true;
    m_hoverEnterSpaceBarWasPressed = false;
    if (infoGraphicsView != NULL) {
        infoGraphicsView->hoverEnterCurrent(event, this);
    }
    DebugDialog::debug("LineEnter");
    hoverUpdate();
}
void Current::hoverLeaveEvent(QGraphicsSceneHoverEvent * event ){
    DebugDialog::debug("LineLeave");
}
void Current::mousePressEvent( QGraphicsSceneMouseEvent *event ){
    DebugDialog::debug("LinePress");
}
void Current::mouseReleaseEvent( QGraphicsSceneMouseEvent *event ){
    DebugDialog::debug("LineRelease");
}
bool Current::inHover(){
    return !m_inactive;
}
void Current::hoverUpdate() {
    this->update();
}

void Current::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) {
    QPen myPen(Qt::black, 2, Qt::SolidLine);
    QPen myPen1(Qt::red, 0.5, Qt::SolidLine);
//    QPointF p1 = QPointF(firstItem->boundingRect().left(), firstItem->boundingRect().center().y());
    QPointF p1 = firstItem->boundingRect().bottomLeft();

    qreal shiftY = (firstItem->boundingRect().bottom() - firstItem->boundingRect().center().y())/2.0; // shift boundRect
    QPointF p2 = firstItem->scenePos()+QPointF(0,shiftY);
    this->setPos(p2);

    painter->setPen(myPen);
//    painter->drawRect(this->boundingRect());
    painter->setPen(myPen1);

    QRectF tri = this->boundingRect();
    QPointF points[3]= {QPointF(tri.left(),tri.center().y()),QPointF(tri.center().x(),tri.bottom()),QPointF(tri.right(),tri.center().y())};
//    painter->drawConvexPolygon(points, 3);
//    painter->drawLine(this->boundingRect().center().x(),this->boundingRect().top(),this->boundingRect().center().x(),this->boundingRect().bottom());
//    painter->drawLine(p1.x()+width/2, p1.y(), p1.x()+width/2, p1.y()+height);
}

QRectF Current::boundingRect() const {
    QPointF p1 = QPointF(firstItem->boundingRect().left(), firstItem->boundingRect().center().y());
    return QRectF(p1.x(), p1.y(), width, height);
}

//QPainterPath Current::shape() const{
//    QPainterPath path;
//    path.addEllipse(boundingRect());
//    return path;
//}
