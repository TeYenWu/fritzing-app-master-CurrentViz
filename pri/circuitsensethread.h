#ifndef CIRCUITSENSETHREAD_H
#define CIRCUITSENSETHREAD_H

#include <QObject>
#include <QSharedDataPointer>

class CircuitSenseThreadData;

class CircuitSenseThread : public QThread
{
    Q_OBJECT
public:
    CircuitSenseThread();
    CircuitSenseThread(const CircuitSenseThread &);
    CircuitSenseThread &operator=(const CircuitSenseThread &);
    ~CircuitSenseThread();

private:
    QSharedDataPointer<CircuitSenseThreadData> data;
};

#endif // CIRCUITSENSETHREAD_H
