#include "feuchtesensor.h"

FeuchteSensor::FeuchteSensor()
{
    cout << "FeuchteSensor Konstruktor" << endl;
    srand(time(NULL));
    for(int i = 0 ; i < 5; i++)
        // ertstelle Werte zwischen 0 und 100
        messdata[i] = rand()%1001/10.0;
    //Ausgabe der Testdaten
    //for(int i = 0 ; i < 5; i++)
    //    cout << messdata[i] << endl;
}


string FeuchteSensor::getSensorType()
{
    return "Feuchte";
}

void FeuchteSensor::fetchData(double a[])
{
    for( int i = 0; i < this->dataSize() ; i++)
        a[i] = messdata[i];
}

int FeuchteSensor::dataSize()
{
    return 5;
}
