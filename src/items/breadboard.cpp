/*******************************************************************

Part of the Fritzing project - http://fritzing.org
Copyright (c) 2007-2014 Fachhochschule Potsdam - http://fh-potsdam.de

Fritzing is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

Fritzing is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Fritzing.  If not, see <http://www.gnu.org/licenses/>.

********************************************************************

$Revision: 6912 $:
$Author: irascibl@gmail.com $:
$Date: 2013-03-09 08:18:59 +0100 (Sa, 09. Mrz 2013) $

********************************************************************/

#include "breadboard.h"
#include "../debugdialog.h"
//#include "current.h"
Breadboard::Breadboard( ModelPart * modelPart, ViewLayer::ViewID viewID, const ViewGeometry & viewGeometry, long id, QMenu * itemMenu, bool doLabel)
	: PaletteItem(modelPart, viewID, viewGeometry, id, itemMenu, doLabel)
{
    m_current = new Current();
//    current->paint(painter, option, widget, 20, 40);


}

Breadboard::~Breadboard() {
}

void Breadboard::addedToScene(bool temporary)
{
    PaletteItem::addedToScene(temporary);
    this->scene()->addItem(m_current);
}


ItemBase::PluralType Breadboard::isPlural() {
	return Plural;
}

bool Breadboard::rotation45Allowed() {
	return false;
}

void Breadboard::hoverUpdate()
{
}

void Breadboard::hoverEnterEvent ( QGraphicsSceneHoverEvent * event ){
    PaletteItem::hoverEnterEvent(event);
}
void Breadboard::hoverMoveEvent ( QGraphicsSceneHoverEvent * event ){
    PaletteItem::hoverMoveEvent(event);
}
void Breadboard::hoverLeaveEvent(QGraphicsSceneHoverEvent * event ){
    PaletteItem::hoverLeaveEvent(event);
}
void Breadboard::mouseMoveEvent( QGraphicsSceneMouseEvent *event ){
    PaletteItemBase::mouseMoveEvent(event);
}
void Breadboard::mouseReleaseEvent( QGraphicsSceneMouseEvent *event ){
    PaletteItemBase::mouseReleaseEvent(event);
}
void Breadboard::paintHover(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
	Q_UNUSED(painter);
	Q_UNUSED(option);
	Q_UNUSED(widget);
}

bool Breadboard::stickyEnabled() {
	return false;
}

bool Breadboard::canFindConnectorsUnder() {
	return false;
}

void Breadboard::paintBody(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    ItemBase::paintBody(painter, option, widget);
    m_current->setPos(10, 10);
}
