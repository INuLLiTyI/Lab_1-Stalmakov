#include "CompressorStation.h"
#include <iostream>

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

int CompressorStation::GetId() { return id; }
int CompressorStation::GetMaxId() { return maxId; }
string CompressorStation::GetName() { return Name; }
int CompressorStation::GetPercent() {
    return (AmountOfWorkshops > 0) ? (WorkshopsInWork * 100 / AmountOfWorkshops) : 0;
}

