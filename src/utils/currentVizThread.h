#ifndef CURRENTVIZTHREAD_H
#define CURRENTVIZTHREAD_H

#include <QObject>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QtCore>

struct CurrentValue{
    float value;
    int row ;
    int pin;
};



class CurrentVizThread : public QThread
{
    Q_OBJECT

    static CurrentVizThread* m_instance;

public:
    static CurrentVizThread* getInstantce();
    explicit CurrentVizThread();
    ~CurrentVizThread();
    void run() Q_DECL_OVERRIDE;
    void startCurrentVizThread();
    void readData(QSerialPort* serialPort);
    bool test = false;

signals:
    void readyRead(CurrentValue*);
    void onError(QString error);
    void onConnected();
    void onDisconnected();
public slots:
    void connectSerialPort(QString name, qint32 baudRate);
    void disconnectSerialPort();
    void close();

private:
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
#endif // CURRENTVIZTHREAD_H
