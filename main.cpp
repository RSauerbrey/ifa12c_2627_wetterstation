#include "datagate.h"
#include "temperatursensor.h"
#include "feuchtesensor.h"
#include "maxanalyzer.h"
#include "avganalyzer.h"
#include <iostream>
using namespace std;

int main()
{
    DataGate *t = new TemperaturSensor;
    DataGate *f = new FeuchteSensor;
    MaxAnalyzer *mt = new MaxAnalyzer(t);
    AvgAnalyzer *at = new AvgAnalyzer(t);
    Analyzer *mf = new MaxAnalyzer(f);
    AvgAnalyzer *af = new AvgAnalyzer(f);

    double data[100]={0};

    cout << "Daten des Temperatursensors" << endl;
    t->fetchData(data);
    for(int i=0; i<t->dataSize(); i++)
        cout << data[i] << endl;
    cout << "............." << endl;
    at->fetchData(data);
    cout << data[0] << endl;
    cout << "............." << endl;
    mt->fetchData(data);
    cout << data[0] << endl;
    cout << "-------------" << endl;

    cout << "Daten des Feuchtesensors" << endl;
    f->fetchData(data);
    for(int i=0; i<f->dataSize(); i++)
        cout << data[i] << endl;
    cout << "............." << endl;
    af->fetchData(data);
    cout << data[0] << endl;
    cout << "............." << endl;
    mf->fetchData(data);
    cout << data[0] << endl;
    cout << "-------------" << endl;

    mf->test();
    delete mt;
    delete mf;
    delete at;
    delete af;
    delete t;
    delete f;
    return 0;
}
