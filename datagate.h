#ifndef DATAGATE_H
#define DATAGATE_H
#include <string>
using namespace std;

class DataGate
{
public:
    virtual string getSensorType() = 0;
    virtual void fetchData(double a[]) = 0;
    virtual int dataSize() = 0;
    virtual ~DataGate() = default;
};

#endif // DATAGATE_H
