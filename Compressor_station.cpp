#include "CompressorStation.h"
using namespace std;

int CompressorStation::maxId = 0;

CompressorStation::CompressorStation()
{
    id = 0;
    Name = "None";
    AmountOfWorkshops = 0;
    WorkshopsInWork = 0;
    EfficiencyLevel = 0;
}
