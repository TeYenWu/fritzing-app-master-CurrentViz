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
#include "../mainwindow/settingsdialog.h"
#include <QDebug>
#include <QtAlgorithms>
#include <QtGlobal>
#include <QString>
#include "current.h"
#include "../sketch/sketchwidget.h"
#include "../commands.h"
#include "wire.h"
Breadboard::Breadboard( ModelPart * modelPart, ViewLayer::ViewID viewID, const ViewGeometry & viewGeometry, long id, QMenu * itemMenu, bool doLabel)
	: PaletteItem(modelPart, viewID, viewGeometry, id, itemMenu, doLabel)
{
    CurrentVizThread* thread = CurrentVizThread::getInstantce();
    connect(thread, &CurrentVizThread::readyRead, this, &Breadboard::readData, Qt::BlockingQueuedConnection);

    connectorItem_timer = new QTimer(this);
    connect(connectorItem_timer, SIGNAL(timeout()), this, SLOT(autoDetection()));
    connectorItem_timer->start(1000);
    isInit = false;
//    insert_timer = new QTimer(this);
//    connect(insert_timer, SIGNAL(timeout()), this, SLOT(detectInsert()));
}


Breadboard::~Breadboard() {
//    // destructor currentItem
    if(m_currentList.size() < nRowOfCurrent)
        return;

    for(int col_index = 0 ; col_index < 24 ; col_index ++){
        if(m_currentList.at(col_index).size() < 10)
            return;
        for(int row_index = 0 ; row_index < 10 ; row_index ++){
            delete m_currentList[col_index][row_index];
        }
    }
}

void Breadboard::test(){
    bool inOrOut = true;
    autoDetection();
    for(int i = 0; i < 24; i++){
        for(int j = 0; j < 10; j++){
            if( j == 4 || j == 9){
                continue;
            }
//            m_currentList[i][j]->setCurrentValue(0.04);
//            if(i==3&&j<5)
//                m_currentList[i][j]->setCurrentValue(0.0252);
//            else if (i == 2 && j<5 && j>=1)
//                m_currentList[i][j]->setCurrentValue(-0.528);
//            else if (i ==4 && j < 5 )
//                m_currentList[i][j]->setCurrentValue(0.4732);
//            m_currentList[i][j]->start(inOrOut);

        }
    }
}
void Breadboard::addedToScene(bool temporary)
{
    PaletteItem::addedToScene(temporary);
    foreach (QVector<Current*> currents, m_currentList) {
        foreach (Current* current, currents) {
            this->scene()->addItem(current);
//            current->setZValue(3); // move currentItem to top of scene
         }
     }
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

void Breadboard::autoDetection(){

    if(!isInit)
        return;
    float min = 5;
    float max = 550;
    for(int i = 0; i < items.size(); i++){
        ConnectorItem * item = items.at(i);
        QColor wireColor;
        float value;
        qreal offset = item->boundingRect().center().y();
        if(item->connectedToWires()){
            if(i%10 == 0){
                value = m_currentList[i/10][i%10]->getCurrentValue();
            }
            else{
                value = m_currentList[i/10][i%10]->getCurrentValue() - m_currentList[i/10][i%10 -1]->getCurrentValue();

            }
//            if( j == 4 || j == 9){
//                continue;
//            }
            if(qAbs(value)*1000 >= min && qAbs(value)*1000 < max/4)
                wireColor = QColor(0, qAbs(value)*255000/(max/4),255, 255);
            else if (qAbs(value)*1000 >= max/4 && qAbs(value)*1000 < max/2)
                wireColor = QColor(0, 255, qAbs(255-qAbs(value)*255000/(max/2)), 255);
            else if (qAbs(value)*1000 >= max / 2 && qAbs(value)*1000 < 3 * max/4)
                wireColor = QColor(qAbs(value)*255000/(3*max/4) ,255, 0, 255);
            else if (qAbs(value)*1000 >= 3 * max/4 && qAbs(value)*1000 < max)
                wireColor = QColor(255, qAbs(255-qAbs(value)*255000/max), 0, 255);
            Wire * wire = (Wire *)item->connectedToItems().at(0)->attachedTo();
            wire->setColor(wireColor, 1);
        }
    }
}

void Breadboard::hoverEnterEvent ( QGraphicsSceneHoverEvent * event ){
    PaletteItem::hoverEnterEvent(event);
//    this->test();
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
}
void Breadboard::readData(CurrentValue *current){
    isInit = true;
//    if(current->row == 4||current->row == 3 || current->row == 8 || current->row == 12)
        if(m_currentList.size() != 0 && current->pin < 5)
            m_currentList[current->row][current->pin]->setCurrentValue(current->value);
//    connectorItems.append(items.at(num));
}
bool Breadboard::setUpImage(ModelPart * modelPart, const LayerHash & viewLayers, LayerAttributes & layerAttributes)
{
    bool flag = PaletteItem::setUpImage(modelPart, viewLayers, layerAttributes);
    items = cachedConnectorItems();
    qSort(items.begin(),items.end(), Breadboard::connectItemComparsion);
    // initial _currentList to 24*8 array
    m_currentList.resize(nRowOfCurrent);
    for(int col_index = 0 ; col_index < m_currentList.size() ;col_index ++){
        m_currentList[col_index].resize(10);
    }
    int count = 0;
    int rowIndex = 0;
    int pinIndex = 1;
    QList<int> remove ;
    for(int j = 0 ; j < items.size() ; j++){
        ConnectorItem *item1 = items.at(j);
        qreal offset = item1->boundingRect().center().y();
//        DebugDialog::debug(QString(" %1 %2 ").arg(item1->boundingRect().center().x()).arg(item1->boundingRect().center().y()));
        if (offset > 150 || offset < 40){
            remove.append(j);
            continue;
        }
        if (pinIndex >= 5) // fifth node
        {
            pinIndex = 1;
        }
        if  (count >= m_currentList[rowIndex].size()){
            count = 0;
            rowIndex++;
            if(rowIndex >= nRowOfCurrent)
                break;
        }
        ConnectorItem *item2 = items.at(j+1);
        m_currentList[rowIndex][count] = new Current(item1, item2, true);
        count++;
        pinIndex++;
    }
    for(int i=remove.size() - 1; i>=0; i--){
        items.removeAt(remove[i]);
    }
    m_items.clear();
    for(int i = 0; i < items.size();i++){
        m_items.append(items.at(i));
    }
    return flag;
}

bool Breadboard:: connectItemComparsion(ConnectorItem *item1 , ConnectorItem *item2)
{

    QPointF pos1 = item1->boundingRect().center();
    QPointF pos2 = item2->boundingRect().center();

    if (qAbs(pos1.x() - pos2.x()) < 0.1f)
    {
        if(pos1.y() > pos2.y())
            return true;
    }
    else
    {
        if(pos1.x() < pos2.x())
            return true;
    }

    return false;
}

