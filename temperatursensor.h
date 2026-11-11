#ifndef TEMPERATURSENSOR_H
#define TEMPERATURSENSOR_H

#include "datagate.h"
#include <iostream>
using namespace std;

class TemperaturSensor : public DataGate
{
private:
    double messdata[10];
public:
    TemperaturSensor();
    string getSensorType();
    void fetchData(double a[]);
    int dataSize();
};

#endif // TEMPERATURSENSOR_H
