#include "maxanalyzer.h"
#include <iostream>
using namespace std;

MaxAnalyzer::MaxAnalyzer(DataGate *dG):Analyzer(dG)
{
    cout << "Konstr. MaxAnalyzer" << endl;
}

string MaxAnalyzer::getSensorType()
{
    return dG->getSensorType();
}

void MaxAnalyzer::fetchData(double a[])
{
    dG->fetchData(a);
    //Maximumsuche
    for(int i = 0; i<dG->dataSize(); i++)
    {
        if(a[i]>a[0])
            a[0]=a[i];
    }
}

int MaxAnalyzer::dataSize()
{
    return 1;
}

void MaxAnalyzer::test()
{
    cout << "Unterklassenmethode" << endl;
    Analyzer::test();
}
