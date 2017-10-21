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
float threshold = 0.006; //0.006
float min = 5;
float max = 100;
#define ALLMOUSEBUTTONS (Qt::LeftButton | Qt::MidButton | Qt::RightButton | Qt::XButton1 | Qt::XButton2)
Current::Current(ConnectorItem *item1, ConnectorItem *item2, bool main)
    :QObject() , QGraphicsItem()
{
    m_inactive = false;
    m_hoverEnterSpaceBarWasPressed = m_spaceBarWasPressed = false;
    firstItem = item1;
    firstItem->aboveCurrent = this;
    secondItem = item2;
    secondItem->belowCurrent = this;
    m_main = main;
    if(m_main){
        width = item1->boundingRect().width();
        height = qAbs(item1->boundingRect().top()-item2->boundingRect().top());
    }
    setAcceptHoverEvents(true);
    setAcceptedMouseButtons(ALLMOUSEBUTTONS);
    setToolTip(QString("%1").arg(item1->boundingRect().center().y()));
    this->setPos(firstItem->scenePos());
    this->setZValue(0);
    this->hide();
//    this->setToolTip();
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
    setToolTip(QString("<FONT SIZE=20> %1mA </FONT>").arg(currentValue * 1000));
//    hoverUpdate();
}
void Current::hoverLeaveEvent(QGraphicsSceneHoverEvent * event ){
    DebugDialog::debug(QString("%1").arg(this->zValue()));
}
void Current::mousePressEvent( QGraphicsSceneMouseEvent *event ){
    DebugDialog::debug(QString("%1").arg(this->zValue()));
}
void Current::mouseReleaseEvent( QGraphicsSceneMouseEvent *event ){
     DebugDialog::debug(QString("%1").arg(this->zValue()));
}
bool Current::inHover(){
    return !m_inactive;
}
void Current::hoverUpdate() {
//    this->update();
}
void Current::setCurrentValue(float value){
    if(!isInit)
    {
        start(true);
        isInit = true;
    }
    if(value < threshold && value > -threshold){
        currentValue = 0;
        this->setZValue(0);
        this->hide();
    }
    else{
        DebugDialog::debug(QString("%1").arg(value));
        this->show();
        this->setZValue(10);
        if(currentValue-value > threshold || currentValue-value < -threshold){
            if(qAbs(value)*1000 >= min && qAbs(value)*1000 < max/4)
                currentColor = QColor(0, qAbs(value)*255000/(max/4),255, 255);
            else if (qAbs(value)*1000 >= max/4 && qAbs(value)*1000 < max/2)
                currentColor = QColor(0, 255, qAbs(255-((qAbs(value)*1000-max/4)/(max/4))*255), 255);
            else if (qAbs(value)*1000 >= max / 2 && qAbs(value)*1000 < 3 * max/4)
                currentColor = QColor(((qAbs(value)*1000-max/2)/(max/4))*255,255, 0, 255);
            else if (qAbs(value)*1000 >= 3 * max/4 && qAbs(value)*1000 < max)
                currentColor = QColor(255, qAbs(255-((qAbs(value)*1000- max*3/4)/(max/4))*255), 0, 255);
            //this->update();
        }
        setNodeDirection(value);
        currentValue = value;
    }
}
void Current::setNodeDirection(float value)
{
    firstItem->aboveCurrentDirection = CURRENT_DIRECTION_NONE;
    if(value < 0)
    {
       firstItem->aboveCurrentDirection = CURRENT_DIRECTION_DOWN;
    }
    else if (value > 0)
    {
       firstItem->aboveCurrentDirection = CURRENT_DIRECTION_UP;
    }

    secondItem->belowCurrentDirection = CURRENT_DIRECTION_NONE;
    if(value < 0)
    {
       secondItem->belowCurrentDirection = CURRENT_DIRECTION_DOWN;
    }
    else if (value > 0)
    {
       secondItem->belowCurrentDirection = CURRENT_DIRECTION_UP;
    }

}

void Current::start(bool inOrOut){
    m_main = inOrOut;
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
    if(m_state == 7)
       m_state = 0;
    this->update();
}


float Current::getCurrentValue(){
    return currentValue;
}
void Current::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) {
    QPen myPen(Qt::red, 1, Qt::SolidLine);
//    currentColor = QColor(255 ,255 , 0, 255);

    if(m_main){
        painter->setPen(myPen);
        qreal shiftY = (secondItem->boundingRect().bottom() - secondItem->boundingRect().center().y())/2.0; // shift boundRect
        QPointF p2 = secondItem->scenePos()+QPointF(0,shiftY);
        this->setPos(p2);
        if(currentValue > threshold){
            QPainterPath path;
            QRectF tri = this->boundingRect();
            qreal offset = this->boundingRect().height()/10 * m_state;
            path.moveTo(tri.left(),tri.bottom()-offset);
            path.lineTo(tri.center().x(),tri.center().y()-offset);
            path.lineTo(tri.right(),tri.bottom()-offset);
            path.lineTo(tri.left(),tri.bottom()-offset);
            painter->fillPath (path, QBrush (currentColor));


        }
        else if(currentValue < -threshold){
            QPainterPath path;
            QRectF tri = this->boundingRect();
            qreal offset = this->boundingRect().height()/10 * m_state;
            path.moveTo(tri.left(),tri.top()+offset);
            path.lineTo(tri.center().x(),tri.center().y()+offset);
            path.lineTo(tri.right(),tri.top()+offset);
            path.lineTo(tri.left(),tri.top()+offset);
            painter->fillPath (path, QBrush (currentColor));
        }
        if(secondItem->connectedToItems().size() > 0){
            if(secondItem->connectedToItems().at(0)->attachedToItemType() == ModelPart::Wire){
                Wire * wire = (Wire *)secondItem->connectedToItems().at(0)->attachedTo();
//                wire->setColor(currentColor, 1);
//                QPointF offset = -(wire->line().p2() - wire->line().p1())/15 *m_state;
//                QPointF offset1 = -(wire->line().p2() - wire->line().p1())/15 *m_state * 2 ;
//                QPainterPath path;
//                QPainterPath path1;
//                QPointF triCenter = wire->line().p1() + offset + this->boundingRect().center();
//                QPointF triCenter1 = wire->line().p1() + offset1 + this->boundingRect().center();
//                QVector2D* vector = new QVector2D(offset);
//                vector->normalize();
//                qreal dot = vector->y();
//                QVector2D* verticalVector = new QVector2D(vector->y(), -vector->x());
//                triCenter = triCenter + QPointF(width/2 * qSin(qAcos(dot)),- height/2);
//                triCenter1 = triCenter1 + QPointF(width/2 * qSin(qAcos(dot)),- height/2);
//                float sideLength = 5;
//                path.moveTo(triCenter-(*vector*sideLength/2-*verticalVector*sideLength/2).toPointF());
//                path.lineTo(triCenter-(*vector*sideLength/2+*verticalVector*sideLength/2).toPointF());
//                path.lineTo(triCenter+ (*vector*sideLength/2).toPointF());
//                path.lineTo(triCenter-(*vector*sideLength/2-*verticalVector*sideLength/2).toPointF());
//                path1.moveTo(triCenter1-(*vector*sideLength/2-*verticalVector*sideLength/2).toPointF());
//                path1.lineTo(triCenter1-(*vector*sideLength/2+*verticalVector*sideLength/2).toPointF());
//                path1.lineTo(triCenter1+ (*vector*sideLength/2).toPointF());
//                path1.lineTo(triCenter1-(*vector*sideLength/2-*verticalVector*sideLength/2).toPointF());
//                painter->fillPath (path, QBrush (currentColor));
//                painter->fillPath (path1, QBrush (currentColor));
            }
        }
    }
}


QRectF Current::boundingRect() const {
    if(m_main && secondItem){
        qreal shifty = qAbs(firstItem->boundingRect().top() - secondItem->boundingRect().bottom());
        QPointF p1 = QPointF(secondItem->boundingRect().left(), secondItem->boundingRect().top()+shifty);
        return QRectF(p1.x(), p1.y(), width, height);
    }
}



