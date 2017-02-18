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
#include "../connectors/connectoritem.h"
#include <QDebug>
#include <QtAlgorithms>
#include <QtGlobal>
#include <QString>

Breadboard::Breadboard( ModelPart * modelPart, ViewLayer::ViewID viewID, const ViewGeometry & viewGeometry, long id, QMenu * itemMenu, bool doLabel)
	: PaletteItem(modelPart, viewID, viewGeometry, id, itemMenu, doLabel)
{
    // initial _currentList to 24*8 array
    _currentList.resize(24);
    for(int col_index = 0 ; col_index < _currentList.size() ;col_index ++){
        _currentList[col_index].resize(8);
    }

    // assign 0 to two dimensional array
    for(int i = 0 ; i < _currentList.size() ; i++){
        for(int j = 0 ; j < _currentList.at(i).size() ; j++){
            _currentList[i][j] = 0.0;
        }
    }
}

Breadboard::~Breadboard() {
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
    for(int i = 0;i < m_cachedConnectorItems.size(); i ++){
        ConnectorItem* item = m_cachedConnectorItems.at(i);

        Breadboard::connectoritemPos(item->mapToScene(item->boundingRect().center()).x(), nodeX);
        Breadboard::connectoritemPos(item->mapToScene(item->boundingRect().center()).y(), nodeY);
    }

    ConnectorItem* item = m_cachedConnectorItems.at(0);
    qDebug() << "first:" << item->mapToScene(item->boundingRect().center()).x();
    painter->drawEllipse(item->boundingRect());

    //DebugDialog::debug(QString("List Length: %1").arg(m_cachedConnectorItems.length()));
    qSort(nodeX);
    qSort(nodeY);
    qDebug() << nodeX.size();
    qDebug() <<nodeY;

    painter->drawLine(0,0,100,300);
    painter->drawLine(10,10,100,300);
}

void Breadboard::connectoritemPos(double pos, QList<double> &node)
{
    int findPos = nodeX.indexOf(pos);
    if(findPos == -1){ // pos not in list
        bool isSimilar = false;
        for(int i = 0 ; i < node.size() ; i++){ // check if similar pos
            if(qAbs(node[i]-pos)<1){
                similar = true;
                break;
            }
        }
        if(!isSimilar){
            node.append(pos);
        }
    }
}
