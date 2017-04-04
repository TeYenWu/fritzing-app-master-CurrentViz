#include "circuitsensethread.h"
#include "../debugdialog.h"

CircuitSenseThread* CircuitSenseThread::m_instance = 0;

CircuitSenseThread* CircuitSenseThread:: getInstantce()
{
    if(m_instance == 0)
    {
        m_instance = new CircuitSenseThread();
    }
    return CircuitSenseThread::m_instance;
}

CircuitSenseThread::CircuitSenseThread() : data(new CircuitSenseThreadData)
{
    for (int i = 0 ; i < 8; i++)
    {
        QVector<int> vector = {0,0,0,0,0,0,0,0,0,0};
        sensorValueArray.push_back(vector);
    }
    isIntialized =false;
    m_stop = true;
    m_close = false;
    waitTimeForWritten = 3000;
    waitTimeForRead = 3000;
}

CircuitSenseThread::CircuitSenseThread(const CircuitSenseThread &rhs) : data(rhs.data)
{

}

CircuitSenseThread &CircuitSenseThread::operator=(const CircuitSenseThread &rhs)
{
    if (this != &rhs)
        data.operator=(rhs.data);
    return *this;
}

CircuitSenseThread::~CircuitSenseThread()
{

}


void CircuitSenseThread::startCircuitSenseThread()
{
    qDebug()<<"Thread:: Start, ID:  "<<currentThreadId();
    if (!isRunning())
        start();
}

void CircuitSenseThread::disconnectSerialPort()
{
    qDebug()<<"Thread::Disconnect "<<currentThreadId();
    QMutexLocker locker(&m_mutex);
    m_stop = true;
}

void CircuitSenseThread::connectSerialPort(QString name, qint32 baudRate)
{
    QMutexLocker locker(&m_mutex);
    this->portName = name;
    this->baudRate = baudRate;
    m_stop = false;
}

void CircuitSenseThread::close()
{
    CircuitSenseThread::disconnect();
    qDebug()<<"Thread::stop called from main thread: "<<currentThreadId();
    QMutexLocker locker(&m_mutex);
    m_close = true;
}

void CircuitSenseThread::readPLSData(QSerialPort* serialPort)
{
    // 79, 77, 76, 75, 68~64, 58, 56, 54, 51, 45, 46, 44, 36,37, 29, 28, 27, 24~20, 10~15, 17, 0~5
    // 28, (15) , 37, 45, 50, 57,
    if(serialPort->waitForReadyRead(waitTimeForRead))
    {
        QVector<int> tempClipList;
        for(int i = 0; i < 80;i ++)
        {
            while(serialPort->bytesAvailable() < 2)
                serialPort->waitForReadyRead(10);
            {
                QMutexLocker locker(&m_mutex);
                QByteArray bytes = serialPort->read(2);
                int pin = i % 10;
                int row = i / 10;
                unsigned short value = (bytes.at(0) & 0x00FF)|((bytes.at(1) & 0x000F) << 8);
                int preValue = sensorValueArray[row][pin];
                int threshold = preValue/20 > 50 ? 50 : preValue/20;
                if(abs(preValue - value) > threshold && isIntialized)
                {
                    if(changdClipList.indexOf(i) != -1)
                    {

                    }
                    else
                    {
                        if(i==39 || i==3 || i ==9 || i == 15 || i == 44 || i == 57 || i==37 || i==50) continue;
                        if(i == 4 || i == 5 || i == 14 || i==15 || i ==24 || i == 25 || i == 34 || i==35)
                        {
                            changdClipList.push_back(4);
                            changdClipList.push_back(5);
                            changdClipList.push_back(14);
                            changdClipList.push_back(15);
                            changdClipList.push_back(24);
                            changdClipList.push_back(25);
                            changdClipList.push_back(34);
                            changdClipList.push_back(35);

                            tempClipList.push_back(4);
                            tempClipList.push_back(5);
                            tempClipList.push_back(14);
                            tempClipList.push_back(15);
                            tempClipList.push_back(24);
                            tempClipList.push_back(25);
                            tempClipList.push_back(34);
                            tempClipList.push_back(35);
                        }
                        else
                        {
                            changdClipList.push_back(i);
                            tempClipList.push_back(i);
                        }
                        sensorValueArray[row][pin] = value;

                        timer.restart();
                    }
                }

                if (!isIntialized)
                {
                    sensorValueArray[row][pin] = value;

                }
                DebugDialog::debug(QString("%1 %2 %3").arg(row).arg(pin).arg(value));
            }

        }
        if (!isIntialized)
        {
            isIntialized = true;
        }
        if(tempClipList.size()>0){
            emit senseChangedClips(tempClipList, 0);
        }
         msleep(600);
    }
}


int CircuitSenseThread::readCRData(QSerialPort* serialPort)
{
    if(serialPort->waitForReadyRead(waitTimeForRead))
    {
        QByteArray byteArray;
        while(serialPort->bytesAvailable() < 4000)
            serialPort->waitForReadyRead(10);
        {
            byteArray = serialPort->read(4000);
        }
        QString filename = "data.txt";
        QFile file(filename);
        if (file.open(QIODevice::ReadWrite)) {
            file.write(byteArray);
            file.close();
            QProcess p;
            QStringList params;
            p.start("python CR.py");
            p.waitForFinished();
            QString output(p.readAllStandardOutput());
            if (output != "none")
            {
                CircuitSenseThreadData tmpdata;
                for(int i = 0 ; i < changdClipList.size(); i++)
                {
                    tmpdata.pins[i] = changdClipList.at(i);
                }
                tmpdata.spec = output;
                emit recognizeComponent(tmpdata);
            }
        }
//        params << "../../../../EagleXml_ForCircuitStacks-master/xml_main.py " + fileName();
    }
}


void CircuitSenseThread::run()
{
    qDebug() << "App path : " << qApp->applicationDirPath();
    qDebug()<< "Runnning  ThreadID:  " << currentThreadId();
    QSerialPort* serialPort = new QSerialPort(this);
    timer.start();
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

        if(changdClipList.size() > 0 && timer.elapsed() > 1500)
        {
//            emit senseChangedClips(changdClipList);
            for(int amp = 0; amp < 4 ; amp++)
            {
                break;
                QProcess p;
                p.start("python amp.py " + QString::number(amp));
                p.waitForFinished();
                char str[changdClipList.size()];
                str[0] = 0x25;
                for(int i = 0 ; i < changdClipList.size(); i++)
                {
                    str[i] = changdClipList.at(i) & 0xFF;
                }
                qDebug() << "written";
                bool succces = serialPort->write(str);
                if(!succces || !serialPort->waitForBytesWritten(waitTimeForWritten)){
                    emit onError(serialPort->errorString());
                    continue;
                }
                int success = readCRData(serialPort);
                if(success){
                    changdClipList.clear();
                    timer.restart();
                    break;
                }
            }
            changdClipList.clear();
            timer.restart();

        }
        const char str[] = {0x24};

        bool succces = serialPort->write(str, 1);
        if(!succces || !serialPort->waitForBytesWritten(waitTimeForWritten)){
            emit onError(serialPort->errorString());
            continue;
        }
        qDebug() << "written";
        readPLSData(serialPort);
//        if (m_row < 24 - 1)
//            m_row ++;
//        else
//            m_row = 0;

//        if (m_pin < 10 - 1)
//            m_pin ++;
//        else
//            m_pin = 0;
    }
    qDebug()<<"Thread::Quit";
}
