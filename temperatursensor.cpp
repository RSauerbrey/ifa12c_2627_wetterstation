#include "temperatursensor.h"

TemperaturSensor::TemperaturSensor()
{
    cout << "TemperaturSensor Konstruktor" << endl;

    srand(time(NULL));
    for(int i = 0 ; i < 10; i++)
        // ertstelle Werte zwischen -40 und 60 Grad
        messdata[i] = -40.0 + (rand()%10000)/100.0;
    //Ausgabe der Testdaten
    //for(int i = 0 ; i < 10; i++)
    //    cout << messdata[i] << endl;
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
