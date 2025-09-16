#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <istream>
#include <unordered_map>
#include <unordered_set>

class CompressorStation{

private:
	static int maxId;
	int id;
	std::string Name;
	int AmountOfWorkshops;
	int WorkshopsInWork;
	int EfficiencyLevel;

public:
	CompressorStation();

	int GetId();
	static int GetMaxId();
	std::string GetName();
	int GetPercent();

}