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
    : QGraphicsSvgItem()
{
    m_inactive = false;
    m_hoverEnterSpaceBarWasPressed = m_spaceBarWasPressed = false;
    firstItem = item1;
    secondItem = item2;

    width = item1->boundingRect().width();
    height = qAbs(item1->boundingRect().center().y()-item2->boundingRect().center().y());

    setAcceptHoverEvents(true);
    setAcceptedMouseButtons(ALLMOUSEBUTTONS);
    setToolTip(QString("motherfucker"));
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
    QPen myPen(Qt::black, 10, Qt::SolidLine);
    painter->setPen(myPen);

    painter->drawLine(width/2, 0, width/2, height);
}
QRectF Current::boundingRect() const {
    //qDebug() << firstItem->connectorSharedID();

    QPointF p1 = firstItem->boundingRect().topLeft();
    p1 = mapToScene(p1);

    return QRectF(p1.x() - width/2, p1.y(), width, height);
}
