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

#ifndef BREADBOARD_H
#define BREADBOARD_H

#include "paletteitem.h"
#include "current.h"
#include <QPainter>
#include <QtCore/QList>
class Breadboard : public PaletteItem 
{
	Q_OBJECT

public:
    // after calling this constr uctor if you want to render the loaded svg (either from model or from file), MUST call <renderImage>
	Breadboard(ModelPart *, ViewLayer::ViewID, const ViewGeometry & viewGeometry, long id, QMenu * itemMenu, bool doLabel);
	~Breadboard();

	PluralType isPlural();
	void hoverUpdate();
	void paintHover(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget); 
	bool stickyEnabled();
    void hoverEnterEvent( QGraphicsSceneHoverEvent * event );
    void hoverMoveEvent ( QGraphicsSceneHoverEvent * event );
    void hoverLeaveEvent( QGraphicsSceneHoverEvent * event );
    void mouseMoveEvent( QGraphicsSceneMouseEvent *event );
    void mouseReleaseEvent( QGraphicsSceneMouseEvent *event );
    void addedToScene(bool temporary);
	bool canFindConnectorsUnder();

protected:
    void paintBody(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    bool setUpImage(ModelPart* modelPart, const LayerHash & viewLayers, LayerAttributes &);
    QVector< QVector<Current *> > m_currentList;
//    QList< double > nodeX;
//    QList< double > nodeY;

private:
    void connectoritemPos(double pos, QList< double> &node); // filter similar position
    static bool connectItemComparsion( ConnectorItem *item1 ,  ConnectorItem *item2);
    const int nRowOfCurrent = 24;

public:
	bool rotation45Allowed();

private:
    Current* m_current;
};

#endif
