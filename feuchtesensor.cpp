#include "feuchtesensor.h"
#include <iostream>
using namespace std;

FeuchteSensor::FeuchteSensor()
{
    cout << "-- FeuchteSensor Konstruktor --" << endl;
    srand(time(NULL));
    double avg = 0;
    double max = 0;
    for(int i = 0 ; i < 5; i++)
    {
        messdata[i] = rand()%1001/10.0;
        if( max < messdata[i])
            max = messdata[i];
        avg = avg + messdata[i];
    }
    avg = avg/dataSize();
    //Ausgabe der Testdaten
    cout << "Durchschnitt Feuchte:" << avg << endl;
    cout << "Maximalwert Feuchte:" << max << endl;
    cout << "------ Ende Konstruktor -------" << endl;
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
