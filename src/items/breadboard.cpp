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

Breadboard::Breadboard( ModelPart * modelPart, ViewLayer::ViewID viewID, const ViewGeometry & viewGeometry, long id, QMenu * itemMenu, bool doLabel)
	: PaletteItem(modelPart, viewID, viewGeometry, id, itemMenu, doLabel)
{
    CurrentVizThread* thread = CurrentVizThread::getInstantce();
    connect(thread, &CurrentVizThread::readyRead, this, &Breadboard::readData, Qt::BlockingQueuedConnection);

    connectorItem_timer = new QTimer(this);
//    connect(connectorItem_timer, SIGNAL(timeout()), this, SLOT(autoDetection()));
    connectorItem_timer->start(1000);
    isInit = false;
//    insert_timer = new QTimer(this);
//    connect(insert_timer, SIGNAL(timeout()), this, SLOT(detectInsert()));
}


Breadboard::~Breadboard() {
//    // destructor currentItem
    if(m_currentList.size() < nColumnOfCurrent)
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

//void Breadboard::autoDetection(){

//    if(!isInit)
//        return;
//    float min = 5;
//    float max = 100;
//    m_wireList.empty();
//    for(int i = 0; i < items.size(); i++){
//        ConnectorItem * item = items.at(i);
//        QColor wireColor;
//        float value;
//        if(item->connectedToWires()){
//            if(i%10 == 0){
//                value = m_currentList[i/10][i%10]->getCurrentValue();
//            }
//            else{
//                value = m_currentList[i/10][i%10]->getCurrentValue() - m_currentList[i/10][i%10 -1]->getCurrentValue();

//            }
////            if( j == 4 || j == 9){
////                continue;
////            }
//            if(qAbs(value)*1000 >= min && qAbs(value)*1000 < max/4)
//                wireColor = QColor(0, qAbs(value)*255000/(max/4),255, 255);
//            else if (qAbs(value)*1000 >= max/4 && qAbs(value)*1000 < max/2)
//                wireColor = QColor(0, 255, qAbs(255-((qAbs(value)*1000-max/4)/(max/4))*255), 255);
//            else if (qAbs(value)*1000 >= max / 2 && qAbs(value)*1000 < 3 * max/4)
//                wireColor = QColor(((qAbs(value)*1000-max/2)/(max/4))*255,255, 0, 255);
//            else if (qAbs(value)*1000 >= 3 * max/4 && qAbs(value)*1000 < max)
//                wireColor = QColor(255, qAbs(255-((qAbs(value)*1000- max*3/4)/(max/4))*255), 0, 255);
//        }
//    }
//}

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
    m_currentList[0][0]->setCurrentValue(50);
    m_currentList[1][0]->setCurrentValue(-50);
    if(!m_wireList.empty())
    {
        for(int i = 0; i < m_wireList.size(); i++){
            Wire* wire = m_wireList.at(0);
            ConnectorItem *connectorPoint = wire->cachedConnectorItems().at(0)->connectedToItems().at(0);
            float value0 = connectorPoint->aboveCurrent!=NULL?connectorPoint->aboveCurrent->getCurrentValue():0;
            float value1 = connectorPoint->belowCurrent!=NULL?connectorPoint->belowCurrent->getCurrentValue():0;
            float value = value1-value0;
            wire->setCurrentValue(value);
        }
    }
}
void Breadboard::readData(QVector<CurrentValue> currentList){
    isInit = true;
    m_wireList.empty();
    for(int i=0; i < currentList.size() ; i++)
    {
        CurrentValue current = currentList.at(i);
        if(m_currentList.size() != 0){
            m_currentList[current.row][current.pin]->setCurrentValue(current.value);
            m_currentList[current.row][current.pin]->isAdjusted = false;
            if(abs(m_currentList[current.row][current.pin]->getCurrentValue()) > 0)
            {
                if(m_currentList[current.row][current.pin]->firstItem != NULL && m_currentList[current.row][current.pin]->firstItem->connectedToWires())
                {
                    Wire* wire = (Wire *)m_currentList[current.row][current.pin]->firstItem->connectedToItems().at(0)->attachedTo();
                    if(!m_wireList.contains(wire))
                    {
                        m_wireList.append(wire);
                    }
                }
                if(m_currentList[current.row][current.pin]->secondItem != NULL && m_currentList[current.row][current.pin]->secondItem->connectedToWires())
                {
                    Wire* wire = (Wire *)m_currentList[current.row][current.pin]->secondItem->connectedToItems().at(0)->attachedTo();
                    if(!m_wireList.contains(wire))
                    {
                        m_wireList.append(wire);
                    }
                }
            }
        }
    }

/*
    if(m_currentList.size() != 0){
        DebugDialog::debug(QString("%1 %2").arg(m_currentList.size()).arg(m_currentList.at(0).size()));
        for(int col_index = 0 ; col_index < nColumnOfCurrent ; col_index ++){
            for(int row_index = 0 ; row_index < 10 ; row_index ++){
                if(row_index == 4 || row_index == 9)
                    continue;
                Current* current = m_currentList[col_index][row_index];

                if(current->getCurrentValue() != 0 && !current->isAdjusted)
                {
                    tmpList.clear();
                    visitedNodeList.clear();
                    bool suc = adjustCurrentForCircuits(current, current->secondItem->belowCurrentDirection);
                    if(suc)
                    {
                        float sum = 0;
                        int num = 0;
                        for (int i=0; i<tmpList.size();i++)
                        {
                            Current* current = tmpList.at(i);
                            current->isAdjusted = true;
                            if(current->currentValue != 0)
                            {
                                sum += abs(current->currentValue);
                                num ++;
                            }
                        }
                        float avgValue = sum/num;
                        for (int i=0; i<tmpList.size();i++)
                        {
                            Current* current = tmpList.at(i);
                            int sign = current->currentValue < 0 ? -1 : 1;
                            current->setCurrentValue(sign * avgValue);
                            DebugDialog::debug(QString("Adjusted Current: %1 %2 %3").arg(current->column).arg(current->row).arg(current->currentValue));
                        }
                    }
                }
            }
        }
    }*/
//    connectorItems.append(items.at(num));
}

bool Breadboard::adjustCurrentForCircuits(Current* current, int dir){
    if(current == NULL)
        return true;
    if(current->row == 4 || current->row == 9 || visitedNodeList.contains(current->column * 10 + current->row))
        return false;
    if(current->isAdjusted)
        return true;
    visitedNodeList.append(current->column * 10 + current->row);
    DebugDialog::debug(QString("%1 %2").arg(current->column).arg(current->row));
    ConnectorItem* connectorItem = dir == CURRENT_DIRECTION_UP ? current->secondItem:current->firstItem;
    Current* nextCurrent = dir == CURRENT_DIRECTION_UP ? current->secondItem->aboveCurrent:current->firstItem->belowCurrent;
    int nextDir = dir == CURRENT_DIRECTION_UP ? current->secondItem->aboveCurrentDirection:current->firstItem->belowCurrentDirection;
    if(dir == nextDir)
    {
        if(nextCurrent != NULL){
            bool suc = adjustCurrentForCircuits(nextCurrent, nextDir);
            if(suc)
            {
                tmpList.append(current);
                return true;
            }
        }
        return false;
    }
    else if ((dir | nextDir) == CURRENT_DIRECTION_CONFLUENCE)
    {
        tmpList.append(current);
        return true;
    }
    else
    {
        bool isSuc = false;
        DebugDialog::debug(QString("ConnectItem: %1").arg(connectorItem->connectedToItems().size()));
        if(connectorItem->connectedToItems().size() > 0){
            ItemBase* item = connectorItem->connectedToItems().at(0)->attachedTo();
            if(item->cachedConnectorItems().size() == 2)
            {
                for(int i = 0; i < 2; i++)
                {
                    if(connectorItem->connectedToItems().at(0) != item->cachedConnectorItems().at(i)){
                        if(item->cachedConnectorItems().at(i)->connectedToItems().size() == 0)
                            continue;
                        ConnectorItem* connectedConnectorItem = item->cachedConnectorItems().at(i)->connectedToItems().at(0);
                        bool abCurrent = connectedConnectorItem->aboveCurrent == NULL;
                        bool beCurrent = connectedConnectorItem->belowCurrent == NULL;
                        if(abCurrent && beCurrent)
                        {
                            tmpList.append(current);
                            return true;
                        }
                        if (!abCurrent){
                            if(connectedConnectorItem->aboveCurrentDirection == CURRENT_DIRECTION_NONE)
                            {
                               isSuc = adjustCurrentForCircuits(connectedConnectorItem->aboveCurrent, CURRENT_DIRECTION_UP);
                               if(isSuc)
                               {
                                   connectedConnectorItem->aboveCurrent->currentValue = abs(current->currentValue);
                               }
                            }
                            else if (connectedConnectorItem->aboveCurrentDirection == CURRENT_DIRECTION_CONFLUENCE)
                            {
                                isSuc = true;
                            }
                            else{
                                isSuc = adjustCurrentForCircuits(connectedConnectorItem->aboveCurrent, connectedConnectorItem->aboveCurrentDirection);
                            }
                            if(isSuc)   break;
                        }
                        if (!beCurrent){
                            if(connectedConnectorItem->belowCurrentDirection == CURRENT_DIRECTION_NONE)
                            {
                                isSuc = adjustCurrentForCircuits(connectedConnectorItem->belowCurrent, CURRENT_DIRECTION_DOWN);
                                if(isSuc)
                                {
                                    connectedConnectorItem->belowCurrent->currentValue = -abs(current->currentValue);
                                }
                            }
                            else if (connectedConnectorItem->belowCurrentDirection == CURRENT_DIRECTION_CONFLUENCE)
                            {
                                isSuc = true;
                            }
                            else{
                                isSuc = adjustCurrentForCircuits(connectedConnectorItem->belowCurrent, connectedConnectorItem->belowCurrentDirection);
                            }
                            if(isSuc)   break;
                        }
                    }
                }
            }
        }
        if(isSuc)
        {
            tmpList.append(current);
            return true;
        }

        if(nextCurrent != NULL && !isSuc && nextDir == CURRENT_DIRECTION_NONE)
        {
            if(current->column == 16 || current->row == 3)
            {
                DebugDialog::debug(QString("16 Column: %1 %2 %3").arg(current->column).arg(current->row));
            }
            bool suc = adjustCurrentForCircuits(nextCurrent, dir);
            if(suc)
            {
                tmpList.append(current);
                nextCurrent->currentValue = current->currentValue;
                return true;
            }
        }
        else{
            return false;
        }
    }
    return false;
}


bool Breadboard::setUpImage(ModelPart * modelPart, const LayerHash & viewLayers, LayerAttributes & layerAttributes)
{
    bool flag = PaletteItem::setUpImage(modelPart, viewLayers, layerAttributes);
    items = cachedConnectorItems();
    qSort(items.begin(),items.end(), Breadboard::connectItemComparsion);
    // initial _currentList to 24*8 array
    m_currentList.resize(nColumnOfCurrent);
    for(int row_index = 0 ; row_index < m_currentList.size() ;row_index ++){
        m_currentList[row_index].resize(10);
    }
    int count = 0;
    int columnIndex = 0;
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
        if  (count >= m_currentList[columnIndex].size()){
            count = 0;
            columnIndex++;
            if(columnIndex >= nColumnOfCurrent)
                break;
        }
        ConnectorItem *item2 = items.at(j+1);
        m_currentList[columnIndex][count] = new Current(item1, item2, true);
        m_currentList[columnIndex][count]->column = columnIndex;
        m_currentList[columnIndex][count]->row = count;
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

