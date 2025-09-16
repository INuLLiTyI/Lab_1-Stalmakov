#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <istream>
#include <unordered_map>

class Pipe {
private:
	static int maxId;
	int id;
	std::string Name;
	int Length;
	int Diameter;
	bool InRepair;

public:
	int CS1;
	int CS2;

	Pipe();

	int GetId();
	static int GetMaxId();
	std::string GetName();
	bool GetStatement();
	int GetDiameter();
	bool IsConnected();

};