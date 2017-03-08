#ifndef CIRCUITSENSETHREAD_H
#define CIRCUITSENSETHREAD_H

#include <QObject>
#include <QSharedDataPointer>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QtCore>

class CircuitSenseThreadData : public QSharedData
{
public:
    int row;
    int pin;
};

class CircuitSenseThread : public QThread
{
    Q_OBJECT
public:
    CircuitSenseThread();
    static CircuitSenseThread* getInstantce();
    CircuitSenseThread(const CircuitSenseThread &);
    CircuitSenseThread &operator=(const CircuitSenseThread &);
    ~CircuitSenseThread();
    void run() Q_DECL_OVERRIDE;
    void startCircuitSenseThread();
    void readData(QSerialPort* serialPort);

signals:
    void readyRead(CircuitSenseThreadData*);
    void onError(QString error);
    void onConnected();
    void onDisconnected();

public slots:
    void connectSerialPort(QString name, qint32 baudRate);
    void disconnectSerialPort();
    void close();

private:
    QSharedDataPointer<CircuitSenseThreadData> data;
    static CircuitSenseThread* m_instance;
    int waitTimeForWritten;
    int waitTimeForRead;
    QMutex m_mutex;
    QString portName;
    qint32 baudRate;
    bool m_stop;
    bool m_close;
    unsigned char m_row;
    unsigned char m_pin;
};

#endif // CIRCUITSENSETHREAD_H
