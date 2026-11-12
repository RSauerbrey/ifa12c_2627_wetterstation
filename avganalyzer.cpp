#include "avganalyzer.h"

AvgAnalyzer::AvgAnalyzer(DataGate *dG):Analyzer(dG)
{
}

string AvgAnalyzer::getSensorType()
{
        return dG->getSensorType();
}

void AvgAnalyzer::fetchData(double a[])
{
    double avg = 0;
    dG->fetchData(a);
    for(int i=0; i<dG->dataSize(); i++)
        avg = avg + a[i];
    a[0] = avg/dG->dataSize();
}

int AvgAnalyzer::dataSize()
{
    return dG->dataSize();
}
