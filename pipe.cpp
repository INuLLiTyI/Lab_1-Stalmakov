#include <cmath>
#include "pipe.h"
using namespace std

int Pipe::maxId = 0;

Pipe::Pipe()
{
    id = 0;
    Name = "None";
    Length = 0;
    Diameter = 0;
    InRepair = 0;

    CS1 = 0;
    CS2 = 0;
}

int Pipe::GetId() { return id; }
int Pipe::GetMaxId() { return maxId; }
string Pipe::GetName() { return Name; }
bool Pipe::GetStatement() { return InRepair; }
int Pipe::GetDiameter() { return Diameter; }
bool Pipe::IsConnected() { return CS1 != 0 && CS2 != 0; }

void Pipe::SetName(const string& name) { Name = name; }
void Pipe::SetLength(int length) { Length = length; }
void Pipe::SetDiameter(int diameter) { Diameter = diameter; }
void Pipe::SetInRepair(bool inRepair) { InRepair = inRepair; }
