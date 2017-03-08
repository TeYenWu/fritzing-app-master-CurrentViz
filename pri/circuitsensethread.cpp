#include "circuitsensethread.h"

class CircuitSenseThreadData : public QSharedData
{
public:

};

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
