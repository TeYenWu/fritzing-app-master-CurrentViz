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
#include "../items/wire.h"
#include <QVector2D>
#include <QtMath>

#define ALLMOUSEBUTTONS (Qt::LeftButton | Qt::MidButton | Qt::RightButton | Qt::XButton1 | Qt::XButton2)
Current::Current(ConnectorItem *item1, ConnectorItem *item2, bool main)
    :QObject() , QGraphicsItem()
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
    this->setZValue(10);
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
        this->update();
    }
}
void Current::start(){
    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(test()));
    if(!testing){
        this->show();
        timer->start(50);
    }
}

void Current::test(){
    testing = true;
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
    currentColor = QColor(0,0,255,255);
    setZValue(10);
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
            path.moveTo(tri.left(),tri.bottom()-offset);
            path.lineTo(tri.center().x(),tri.center().y()-offset);
            path.lineTo(tri.right(),tri.bottom()-offset);
            path.lineTo(tri.left(),tri.bottom()-offset);
            painter->fillPath (path, QBrush (currentColor));

        }
        else if(currentValue < 0){
            QPainterPath path;
            QRectF tri = this->boundingRect();
            qreal offset = this->boundingRect().height()/10 * m_state;
            path.moveTo(tri.left(),tri.top()+offset);
            path.lineTo(tri.center().x(),tri.center().y()+offset);
            path.lineTo(tri.right(),tri.top()+offset);
            path.lineTo(tri.left(),tri.top()+offset);
            painter->fillPath (path, QBrush (currentColor));
        }
        if(firstItem->connectedToItems().size() > 0 && currentValue < 0){

            if(firstItem->connectedToItems().at(0)->attachedToItemType() == ModelPart::Wire){
                Wire * wire = (Wire *)firstItem->connectedToItems().at(0)->attachedTo();
                QPointF offset = -(wire->line().p2() - wire->line().p1())/15 *m_state;
                QPainterPath path;
                QPointF triCenter = wire->line().p1() + offset + this->boundingRect().center();
                QVector2D* vector = new QVector2D(offset);
                vector->normalize();
                qreal dot = vector->y();
                QVector2D* verticalVector = new QVector2D(vector->y(), -vector->x());
                triCenter = triCenter + QPointF(width/2 * qSin(qAcos(dot)),- height/2);
                float sideLength = 5;
                path.moveTo(triCenter-(*vector*sideLength/2-*verticalVector*sideLength/2).toPointF());
                path.lineTo(triCenter-(*vector*sideLength/2+*verticalVector*sideLength/2).toPointF());
                path.lineTo(triCenter+ (*vector*sideLength/2).toPointF());
                path.lineTo(triCenter-(*vector*sideLength/2-*verticalVector*sideLength/2).toPointF());
                painter->fillPath (path, QBrush (currentColor));
            }
//            QPointF position = this->boundingRect().topLeft();
//            QRectF items = firstItem->connectedToItems().at(0)->attachedTo()->boundingRect();
//            items.moveTo(position.x(),position.y() - items.height());
//            QPainterPath path;
//            qreal offset = this->boundingRect().height()/10 * m_state;
//            painter->drawRect(items);
//            path.moveTo(items.right()-offset,items.top());
//            path.lineTo(items.right()-items.height()-offset,items.center().y());
//            path.lineTo(items.right()-offset,items.bottom());
//            path.lineTo(items.right()-offset,items.top());
//            painter->fillPath (path, QBrush (currentColor));

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
            painter->fillPath (path, QBrush (QColor("green")));
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
            painter->fillPath (path, QBrush (QColor("green")));
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



