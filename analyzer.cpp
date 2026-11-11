#include "analyzer.h"
#include <iostream>
using namespace std;

Analyzer::Analyzer(DataGate *dG)
{
    this->dG = dG;
    cout << "Konstr. Analyzer" << endl;
}
