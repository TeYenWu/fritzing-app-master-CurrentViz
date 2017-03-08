#include "circuitsensethread.h"


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

void CircuitSenseThread::readData(QSerialPort* serialPort)
{

    if(serialPort->waitForReadyRead(waitTimeForRead))
    {
        while(serialPort->bytesAvailable() < 4)
            serialPort->waitForReadyRead(10);
        {
            QMutexLocker locker(&m_mutex);
            char *data;
            serialPort->read(data, 4);
//            CurrentValue* current = new CurrentValue();
//            current->value = data[2]*8 + data[3];
//            current->row = data[0];
//            current->pin = data[1];
            emit readyRead(0);
        }
        msleep(100);
        qDebug() << "Reading Finished";
    }
}

void CircuitSenseThread::run()
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

        const char str[] = {0x11, m_row, m_pin, 0x23};

        bool succces = serialPort->write(str, 4);
        if(!succces || !serialPort->waitForBytesWritten(waitTimeForWritten)){
            emit onError(serialPort->errorString());
            continue;
        }
        qDebug() << "written";

        readData(serialPort);

        if (m_row < 24 - 1)
            m_row ++;
        else
            m_row = 0;

        if (m_pin < 10 - 1)
            m_pin ++;
        else
            m_pin = 0;
    }
    qDebug()<<"Thread::Quit";
}
