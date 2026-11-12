#include "temperatursensor.h"
#include <iostream>
using namespace std;

TemperaturSensor::TemperaturSensor()
{
    cout << "-TemperaturSensor Konstruktor--" << endl;

    srand(time(NULL));
    double max = 0;
    double avg = 0;
    for(int i = 0 ; i < 10; i++)
    {
        messdata[i] = -40.0 + (rand()%10000)/100.0;
        if( max < messdata[i])
        max = messdata[i];
        avg = avg + messdata[i];
    }
    avg = avg/dataSize();
    //Ausgabe der Testdaten
    cout << "Durchschnitt Temperatur:" << avg << endl;
    cout << "Maximalwert Temperatur:" << max << endl;
    cout << "------ Ende Konstruktor -------" << endl;
}


string TemperaturSensor::getSensorType()
{
    return "Temperatur";
}

void TemperaturSensor::fetchData(double a[])
{
    for( int i = 0; i < 10 ; i++)
        a[i] = messdata[i];
}

int TemperaturSensor::dataSize()
{
    return 10;
}
