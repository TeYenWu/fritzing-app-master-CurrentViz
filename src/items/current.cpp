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
Current::Current()
    : QGraphicsSvgItem()
{
    m_inactive = false;
    m_hoverEnterSpaceBarWasPressed = m_spaceBarWasPressed = false;
    setAcceptHoverEvents(true);
    setAcceptedMouseButtons(ALLMOUSEBUTTONS);
    setToolTip(QString("motherfucker"));
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
    QPen myPen(Qt::black, 5, Qt::SolidLine);
    painter->setPen(myPen);
    painter->drawLine(1,1,100,100);
}
QRectF Current::boundingRect() const {
    return QRectF(0, 0, 1000000, 1000000);
}
