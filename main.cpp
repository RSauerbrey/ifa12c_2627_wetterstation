#include "datagate.h"
#include "temperatursensor.h"
#include "feuchtesensor.h"
#include "maxanalyzer.h"
using namespace std;

int main()
{
    DataGate *t = new TemperaturSensor;
    DataGate *f = new FeuchteSensor;
    MaxAnalyzer *m = new MaxAnalyzer(f);

    double data[2]={0};
    m->fetchData(data);
    for(int i=0; i<m->dataSize(); i++)
        cout << data[i] << endl;

    delete t;
    delete f;
    return 0;
}
