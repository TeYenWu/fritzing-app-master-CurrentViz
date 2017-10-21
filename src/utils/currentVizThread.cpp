#include "currentVizThread.h"
#include <QtCore>
#include <QDebug>
#include "../debugdialog.h"


CurrentVizThread* CurrentVizThread::m_instance = 0;

CurrentVizThread* CurrentVizThread:: getInstantce()
{
    if(m_instance == 0)
    {
        m_instance = new CurrentVizThread();
    }
    return CurrentVizThread::m_instance;
}

CurrentVizThread::CurrentVizThread()
    :QThread()
{
    m_stop = true;
    m_close = false;
    m_row = 0;
    m_pin = 0;
    waitTimeForWritten = 3000;
    waitTimeForRead = 3000;

    qDebug()<< "Create Thread ThreadID:  " << currentThreadId();

}

CurrentVizThread::~CurrentVizThread()
{
    close();
    wait();
}

void CurrentVizThread::startCurrentVizThread()
{
    qDebug()<<"Thread:: Start, ID:  "<<currentThreadId();
    if (!isRunning())
        start();
}

void CurrentVizThread::disconnectSerialPort()
{
    qDebug()<<"Thread::Disconnect "<<currentThreadId();
    QMutexLocker locker(&m_mutex);
    m_stop = true;
}

void CurrentVizThread::connectSerialPort(QString name, qint32 baudRate)
{
    QMutexLocker locker(&m_mutex);
    this->portName = name;
    this->baudRate = baudRate;
    m_stop = false;
}

void CurrentVizThread::close()
{
    CurrentVizThread::disconnect();
    qDebug()<<"Thread::stop called from main thread: "<<currentThreadId();
    QMutexLocker locker(&m_mutex);
    m_close = true;
}

void CurrentVizThread::readData(QSerialPort* serialPort)
{

    if(serialPort->waitForReadyRead(waitTimeForRead))
    {
        currentList.clear();
        for(int i=0; i < 240 ; i++)
        {
            while(serialPort->bytesAvailable() < 2 && serialPort->waitForReadyRead(10));
            {
                QMutexLocker locker(&m_mutex);
                QByteArray data;
                data = serialPort->read(2);
                QByteArray data_hex = data.toHex();
//                if(count == 2)
//                     qDebug() << "Reading 2 Bytes";
                CurrentValue current;
                unsigned short value = (data.at(0) & 0x00FF)|((data.at(1) & 0x000F) << 8);
                //DebugDialog::debug(QString("%1 %2 %3 %4 %5").arg(data_hex[0]).arg(data_hex[1]).arg(data_hex[2]).arg(data_hex[3]).arg(value));
                float gain = (data[1] >> 4) & 0x01 ? 100.0f : 10.0f;
                current.value = (((float(value) -2048) / 2048) * 5 / (gain)) / 0.1f;
                current.row = i/10;
                current.pin = i%10;
                if(current.pin == 4 || current.pin == 9) continue;
//                DebugDialog::debug(QString("%1 %2 %3").arg(current->value).arg(current->row).arg(current->pin));
                currentList.append(current);

            }
        }
        emit readyRead(currentList);
        msleep(500);
        qDebug() << "Reading Finished";
    }
}

void CurrentVizThread::run()
{

    qDebug()<< "Runnning  ThreadID:  " << currentThreadId();
    QSerialPort* serialPort = new QSerialPort(this);
    while(!m_close)
    {
        if(m_stop){
            if (serialPort->isOpen()){
                serialPort->close();
                emit onDisconnected();
            }
            msleep(100);
            continue;
        }

        if(!serialPort->isOpen() || serialPort->portName() != this->portName || serialPort->baudRate() != this->baudRate)
        {
            m_mutex.lock();
            if (serialPort->isOpen())
                serialPort->close();

            serialPort->setPortName(this->portName);
            serialPort->setBaudRate(this->baudRate);
            serialPort->setParity(QSerialPort::EvenParity);

            m_mutex.unlock();

            if (serialPort->open(QIODevice::ReadWrite)) {
                qDebug()<< "Serial Port Connected ThreadID:  " << currentThreadId();
                emit onConnected();
            }
            else
            {
                emit onError(serialPort->errorString());
                m_stop = true;
                continue;
            }
        }

        const char str[] = {0x24};
//        if(test)
//            return;
        bool succces = serialPort->write(str, 1);
//        test = true;
        if(!succces || !serialPort->waitForBytesWritten(waitTimeForWritten)){
            emit onError(serialPort->errorString());
            continue;
        }
        qDebug() << "written";

        readData(serialPort);

    }
//    qDebug()<<"Thread::Quit";
}


