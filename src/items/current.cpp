#include "current.h"
#include "../debugdialog.h"
#include <QWidget>
#include <QToolTip>
#include <QtGui>
#include <QAction>
#include <QBrush>
#include <QPen>
#include <QColor>
#include <QTimer>
#include <limits>
#include <QSet>
#include <QBitmap>
#include <qmath.h>
#include <QtCore/qeasingcurve.h>
#include <QtCore/qobject.h>
#include "../items/itembase.h"
#include "../sketch/infographicsview.h"
#include "../utils/cursormaster.h"
#include <QApplication>
#include <qobject.h>
#include <QPropertyAnimation>

#define ALLMOUSEBUTTONS (Qt::LeftButton | Qt::MidButton | Qt::RightButton | Qt::XButton1 | Qt::XButton2)
Current::Current(ConnectorItem *item1, ConnectorItem *item2, bool main)
    : QGraphicsItem() , QObject()
{
//    QTimer *timer = new QTimer(this);
//    connect(timer, SIGNAL(timeout()), this, SLOT(test()));
//    timer->start(1000);
    m_inactive = false;
    m_hoverEnterSpaceBarWasPressed = m_spaceBarWasPressed = false;
    firstItem = item1;
    secondItem = item2;
    m_main = main;
    if(m_main){
        width = item1->boundingRect().width();
        qreal shigtHeight = firstItem->boundingRect().bottom() - firstItem->boundingRect().center().y();
        height = qAbs(item1->boundingRect().bottom()-item2->boundingRect().top())+shigtHeight;
    }
    else{
        width = qAbs(item1->boundingRect().right() - item2->boundingRect().left());
        height = item1->boundingRect().height();
    }
    setAcceptHoverEvents(true);
    setAcceptedMouseButtons(ALLMOUSEBUTTONS);
    setToolTip(QString("%1").arg(item1->boundingRect().center().y()));
    this->setPos(firstItem->scenePos());
    this->hide();
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
    m_hoverEnterSpaceBarWasPressed = false;
    if (infoGraphicsView != NULL) {
        infoGraphicsView->hoverEnterCurrent(event, this);
    }
    setToolTip(QString("%1").arg(currentValue));
    setCurrentValue(-20);
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
void Current::setCurrentValue(float value){
    if(value == 0){
        this->hide();
    }
    else{
        currentValue = value;
        this->setZValue(5);
        this->update();
    }
}
void Current::start(){
    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(test()));
    timer->start(50);
}

void Current::test(){
//    Blinking
    this->show();
//    if(testing){
//        testing = false;
//    }
//    else{
//        testing = true;
//    }
    DebugDialog::debug("?"+QString(m_state));
    m_state += 1;
    if(m_state == 15)
       m_state = 0;
    this->update();
}


int Current::getCurrentValue(){
    return currentValue;
}
void Current::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) {
    QPen myPen(Qt::red, 1, Qt::SolidLine);
    QPen myPen1(Qt::red, 0.5, Qt::SolidLine);
    QPointF p1 = firstItem->boundingRect().bottomLeft();
    if(m_main){
        qreal shiftY = (firstItem->boundingRect().bottom() - firstItem->boundingRect().center().y())/2.0; // shift boundRect
        QPointF p2 = firstItem->scenePos()+QPointF(0,shiftY);
        this->setPos(p2);
        painter->setPen(myPen);
//        painter->drawRect(this->boundingRect());
        if(currentValue > 0){
            QPainterPath path;
            QRectF tri = this->boundingRect();
            qreal offset = this->boundingRect().height()/10 * m_state;
//            QPointF downTri1[3]= {QPointF(tri.left(),tri.bottom()-offset),QPointF(tri.center().x(),tri.center().y()-offset),QPointF(tri.right(),tri.bottom()-offset)};
            path.moveTo(tri.left(),tri.bottom()-offset);
            path.lineTo(tri.center().x(),tri.center().y()-offset);
            path.lineTo(tri.right(),tri.bottom()-offset);
            path.lineTo(tri.left(),tri.bottom()-offset);
//            painter->drawConvexPolygon(downTri1, 3);
            painter->fillPath (path, QBrush (QColor ("red")));

        }
        else if(currentValue < 0){
            QPainterPath path;
            QRectF tri = this->boundingRect();
            qreal offset = this->boundingRect().height()/10 * m_state;
//            QPointF upTri1[3]= {QPointF(tri.left(),tri.top()+offset),QPointF(tri.center().x(),tri.center().y()+offset),QPointF(tri.right(),tri.top()+offset)};
            path.moveTo(tri.left(),tri.top()+offset);
            path.lineTo(tri.center().x(),tri.center().y()+offset);
            path.lineTo(tri.right(),tri.top()+offset);
            path.lineTo(tri.left(),tri.top()+offset);
//            painter->drawConvexPolygon(upTri1, 3);
            painter->fillPath (path, QBrush (QColor ("red")));
        }
        if(firstItem->connectedToItems().size() > 0){
            QPointF position = this->boundingRect().topLeft();
            QRectF items = firstItem->connectedToItems().at(0)->attachedTo()->currentUsedBoundingRect(position);
            QPainterPath path;
            qreal offset = this->boundingRect().height()/10 * m_state;
            path.moveTo(items.right()-offset,items.top());
            path.lineTo(items.right()-items.height()-offset,items.center().y());
            path.lineTo(items.right()-offset,items.bottom());
            path.lineTo(items.right()-offset,items.top());
            painter->fillPath (path, QBrush (QColor ("red")));

        }
    }
    else{
        qreal shiftX = (firstItem->boundingRect().right() - firstItem->boundingRect().center().x())/2.0; // shift boundRect
        QPointF p3 = firstItem->scenePos()+QPointF(shiftX,0);
        this->setPos(p3);
        painter->setPen(myPen);
//        painter->drawRect(this->boundingRect());
        if(currentValue > 0){
            QPainterPath path;
            QRectF tri = this->boundingRect();
            QPointF leftTri[3]= {QPointF(tri.left(),tri.center().y()),QPointF(tri.right(),tri.bottom()),QPointF(tri.right(),tri.top())};
            path.moveTo(tri.left(),tri.center().y());
            path.lineTo(tri.right(),tri.bottom());
            path.lineTo(tri.right(),tri.top());
            path.lineTo(tri.left(),tri.center().y());
            painter->drawConvexPolygon(leftTri, 3);
            painter->fillPath (path, QBrush (QColor ("red")));
        }
        else if(currentValue < 0){
            QPainterPath path;
            QRectF tri = this->boundingRect();
            path.moveTo(tri.right(),tri.center().y());
            path.lineTo(tri.left(),tri.bottom());
            path.lineTo(tri.left(),tri.top());
            path.lineTo(tri.right(),tri.center().y());
            QPointF rightTri[3]= {QPointF(tri.right(),tri.center().y()),QPointF(tri.left(),tri.bottom()),QPointF(tri.left(),tri.top())};
            painter->drawConvexPolygon(rightTri, 3);
            painter->fillPath (path, QBrush (QColor ("red")));
        }
    }

}


QRectF Current::boundingRect() const {
    if(m_main){
        QPointF p1 = QPointF(firstItem->boundingRect().left(), firstItem->boundingRect().center().y());
        return QRectF(p1.x(), p1.y(), width, height);
    }
    else{
        QPointF p1 = QPointF(firstItem->boundingRect().center().x(), firstItem->boundingRect().top());
        return QRectF(p1.x(), p1.y(), width, height);
    }
}



