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


Breadboard::Breadboard( ModelPart * modelPart, ViewLayer::ViewID viewID, const ViewGeometry & viewGeometry, long id, QMenu * itemMenu, bool doLabel)
	: PaletteItem(modelPart, viewID, viewGeometry, id, itemMenu, doLabel)
{
    CurrentVizThread* thread = CurrentVizThread::getInstantce();
    connect(thread, &CurrentVizThread::readyRead, this, &Breadboard::readData, Qt::BlockingQueuedConnection);
}


Breadboard::~Breadboard() {
    // destructor currentItem
    for(int col_index = 0 ; col_index < 24 ; col_index ++){
        for(int row_index = 0 ; row_index < 10 ; row_index ++){
            delete m_currentList[col_index][row_index];
        }
    }
    for(int col_index = 0 ; col_index < 24 ; col_index ++){
        for(int row_index = 0 ; row_index < 10 ; row_index ++){
            delete b_currentList[col_index][row_index];
        }
    }
}

void Breadboard::test(){
    for(int i = 0; i < 24; i++){
        for(int j = 0; j < 10; j++){
            if(j == 4 || j == 9){
                continue;
            }
            m_currentList[i][j]->start();
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
    foreach (QVector<Current*> b_currents, b_currentList) {
        foreach (Current* b_current, b_currents) {
            this->scene()->addItem(b_current);
//            b_current->setZValue(3); // move currentItem to top of scene
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

void Breadboard::hoverEnterEvent ( QGraphicsSceneHoverEvent * event ){
    PaletteItem::hoverEnterEvent(event);
//    for(int i = 0; i < 24; i++){
//        for(int j = 0; j < 10; j++){
//            if(j == 4 || j == 9){
//                continue;
//            }
//            if(i == 7 || i == 11 || i == 15){
//                m_currentList[i][j]->start();
//                if(i == 7)
//                     m_currentList[i][j]->setCurrentValue(0);
//                else if(i == 11){
//                     m_currentList[i][j]->setCurrentValue(9.5);
//                }
//                else{
//                     m_currentList[i][j]->setCurrentValue(10.8);
//                }
//            }

//        }
//    }
//    QTimer *timer = new QTimer(this);
//    connect(timer, SIGNAL(timeout()), this, SLOT(test()));
//    timer->start(1000);
}
//void Breadboard::setUpBranchCurrent(){
//    for(int i = 0; i < items.size(); i++)
//    {
//        ConnectorItem *item = items.at(i);
//        if(item->isConnected()){
//            connectNum.append(i);
//            if(i % 5 == 0){
//                if(m_currentList[connectNum.at(0)/10][connectNum.at(0)%10]->getCurrentValue() > m_currentList[connectNum.at(0) / 10][(connectNum.at(0)+1) % 10]->getCurrentValue())
//                    item->setBranchValue(true);
//                else
//                    item->setBranchValue(false);
//            }
//            else if(i % 5 == 4){
//                if(m_currentList[connectNum.at(0)/10][connectNum.at(0)%10]->getCurrentValue() > m_currentList[connectNum.at(0) / 10][(connectNum.at(0)-1) % 10]->getCurrentValue())
//                    item->setBranchValue(true);
//                else
//                    item->setBranchValue(false);
//            }
//            else{
//                if(m_currentList[connectNum.at(0)/10][connectNum.at(0)%10]->getCurrentValue() > m_currentList[connectNum.at(0) / 10][(connectNum.at(0)-1) % 10]->getCurrentValue()
//                        || m_currentList[connectNum.at(0)/10][connectNum.at(0)%10]->getCurrentValue() > m_currentList[connectNum.at(0) / 10][(connectNum.at(0)+1) % 10]->getCurrentValue())
//                    item->setBranchValue(true);
//                else
//                    item->setBranchValue(false);
//            }
//            item->setHoverColor();
//        }
//        if(connectNum.size()!=0){
//            if(i == items.size() - 1){
//                DebugDialog::debug(QString("item%1 connected item%2").arg(connectNum.at(0)).arg(connectNum.at(1)));
//                b_currentList[connectNum.at(0)/10][connectNum.at(0)%10]->show();
//            }
//        }
//    }
//    connectNum.clear();
//}

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
//    for(int i = 0;i < m_cachedConnectorItems.size(); i ++){
//        ConnectorItem* item = m_cachedConnectorItems.at(i);
//        Breadboard::connectoritemPos(item->mapToScene(item->boundingRect().center()).x(), nodeX);
//        Breadboard::connectoritemPos(item->mapToScene(item->boundingRect().center()).y(), nodeY);
//    }

//    ConnectorItem* item = m_cachedConnectorItems.at(0);
//    painter->drawEllipse(item->boundingRect());
//    qDebug() << "PaintRect:" << item->boundingRect();
//    qDebug() << "PaintRect:" << mapToScene(item->boundingRect());
//    qDebug() << "PaintTest:" << item->scenePos();
//    qDebug() << "PaintTestZvalue" << item->zValue();
//    qDebug() << "first:" << item->mapToScene(item->boundingRect().center());
//    qDebug() << "first:" << item->mapToParent(item->boundingRect().center());
//    qDebug() << "ID:" << item->connectorSharedID();
//    //painter->drawEllipse(sortConnectorsList[0]->boundingRect());

//    DebugDialog::debug(QString("List Length: %1").arg(m_cachedConnectorItems.length()));
//    DebugDialog::debug(QString("sortList Length: %1").arg(sortConnectorItemsList.length()));
//    qSort(nodeX);
//    qSort(nodeY);
//    qDebug() << nodeX.size();
//    qDebug() <<nodeY;

//    painter->drawLine(0,0,100,100);
//    painter->drawLine(nodeX[3],nodeY[2],nodeX[3],nodeY[9]);
}
void Breadboard::readData(CurrentValue *current){
    m_currentList[current->row][current->pin]->setCurrentValue(current->value);
}

bool Breadboard::setUpImage(ModelPart * modelPart, const LayerHash & viewLayers, LayerAttributes & layerAttributes)
{
    bool flag = PaletteItem::setUpImage(modelPart, viewLayers, layerAttributes);
//    for(int col_index = 0 ; col_index < m_currentList.size() ; col_index ++){
//        for(int row_index = 0 ; row_index < 10 ; row_index ++){
//            delete m_currentList[col_index][row_index];
//        }
//    }
//    for(int col_index = 0 ; col_index < m_currentList.size() ; col_index ++){
//        for(int row_index = 0 ; row_index < 10 ; row_index ++){
//            delete b_currentList[col_index][row_index];
//        }
//    }
    items = cachedConnectorItems();
    qSort(items.begin(),items.end(), Breadboard::connectItemComparsion);
    // initial _currentList to 24*8 array
    m_currentList.resize(nRowOfCurrent);
    for(int col_index = 0 ; col_index < m_currentList.size() ;col_index ++){
        m_currentList[col_index].resize(10);
    }
    b_currentList.resize(nRowOfCurrent);
    for(int col_index = 0 ; col_index < b_currentList.size() ;col_index ++){
        b_currentList[col_index].resize(10);
    }
    int count = 0;
    int rowIndex = 0;
    int pinIndex = 1;
//    for(int j = 0 ; j < items.size() ; j++){
//        ConnectorItem *item1 = items.at(j);
//        if (item1->boundingRect().center().y() > 150 || item1->boundingRect().center().y() < 40){
//            continue;
//        }
//        if (pinIndex >= 5) // fifth node
//        {
//            pinIndex = 1;
//        }
//        if  (count >= m_currentList[rowIndex].size()){
//            count = 0;
//            rowIndex++;
//            if(rowIndex >= nRowOfCurrent)
//                break;
//        }

//        ConnectorItem *item2 = items.at(j+1);
//        m_currentList[rowIndex][count] = new Current(item1, item2, true);
//        count++;
//        pinIndex++;
//    }
    count = 0;
    pinIndex = 1;
    rowIndex = 0;
//    for(int j = 0 ; j < items.size() ; j++){
//        ConnectorItem *item1 = items.at(j);
//        if (item1->boundingRect().center().y() > 170 || item1->boundingRect().center().y() < 25){
//            continue;
//        }
//        if (pinIndex >= 5) // fifth node
//        {
//            pinIndex = 1;
//        }
//        if  (count >= b_currentList[rowIndex].size()){
//            count = 0;
//            rowIndex++;
//            if(rowIndex >= nRowOfCurrent)
//                break;
//        }

//        ConnectorItem *item2 = items.at(j+1);
////        m_currentList[rowIndex][count] = new Current(item1, item2, true);
//        b_currentList[rowIndex][count] = new Current(item1, item2, false);
//        count++;
//        pinIndex++;
//    }

    return flag;
}

bool Breadboard:: connectItemComparsion(ConnectorItem *item1 , ConnectorItem *item2)
{

    QPointF pos1 = item1->boundingRect().center();
    QPointF pos2 = item2->boundingRect().center();

    if (qAbs(pos1.x()-pos2.x()) < 0.1f)
    {
        if(pos1.y() < pos2.y())
            return true;
    }
    else
    {
        if(pos1.x() < pos2.x())
            return true;
    }

    return false;
}


//void Breadboard::connectoritemPos(double pos, QList<double> &node)
//{
//    int findPos = nodeX.indexOf(pos);
//    if(findPos == -1){ // pos not in list
//        bool isSimilar = false;
//        for(int i = 0 ; i < node.size() ; i++){ // check if similar pos
//            if(qAbs(node[i]-pos)<1){
//                isSimilar = true;
//                break;
//            }
//        }
//        if(!isSimilar){
//            node.append(pos);
//        }
//    }
//}
