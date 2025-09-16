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

void CompressorStation::SetName(const string& name) { Name = name; }
void CompressorStation::SetWorkshops(int total, int working) {
    AmountOfWorkshops = total;
    WorkshopsInWork = working;
}
void CompressorStation::SetEfficiency(int efficiency) { EfficiencyLevel = efficiency; }

void CompressorStation::StartWorkshop() {
    if (WorkshopsInWork < AmountOfWorkshops) {
        WorkshopsInWork++;
        cout << "Workshop started. Now working: " << WorkshopsInWork << "/" << AmountOfWorkshops << endl;
    }
    else {
        // 4. ОШИБКА: Если все цехи уже работают
        cout << "All workshops are already working!\n";
    }
}