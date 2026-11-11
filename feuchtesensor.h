#ifndef FEUCHTESENSOR_H
#define FEUCHTESENSOR_H

#include "datagate.h"
#include <iostream>
using namespace std;

class FeuchteSensor : public DataGate
{
private:
    double messdata[5];
public:
    FeuchteSensor();
    string getSensorType();
    void fetchData(double a[]);
    int dataSize();
};

#endif // FEUCHTESENSOR_H
