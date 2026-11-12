#ifndef AVGANALYZER_H
#define AVGANALYZER_H

#include "analyzer.h"

class AvgAnalyzer : public Analyzer
{
public:
    AvgAnalyzer(DataGate *dG);
    string getSensorType();
    void fetchData(double a[]);
    int dataSize();
};

#endif // AVGANALYZER_H
