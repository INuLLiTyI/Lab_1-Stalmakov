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

    // Getters
    int GetId();
    static int GetMaxId();
    std::string GetName();
    bool GetStatement();
    int GetDiameter();
    bool IsConnected();

    void SetName(const std::string& name);
    void SetLength(int length);
    void SetDiameter(int diameter);
    void SetInRepair(bool inRepair);
    void Edit();
    void Print() const;

    // Friend functions for I/O
    friend std::ostream& operator<<(std::ostream& out, const Pipe& pipe);
    friend std::istream& operator>>(std::istream& in, Pipe& pipe);
};