#include <cmath>
#include "pipe.h"
using namespace std;

int Pipe::maxId = 0;

Pipe::Pipe()
{
    id = ++maxId;
    Name = "None";
    Length = 0;
    Diameter = 0;
    InRepair = false;
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

void Pipe::Edit() {
    cout << "Edit pipe (current repair status: " << (InRepair ? "in repair" : "working") << "):\n";
    cout << "Set repair status (0 - working, 1 - in repair): ";
    int status;
    cin >> status;
    if (cin.fail()) {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Invalid input! Status unchanged.\n";
    }
    else {
        InRepair = (status == 1);
    }
}

void Pipe::Print() const {
    cout << "Pipe ID: " << id << endl;
    cout << "Name: " << Name << endl;
    cout << "Length: " << Length << " km" << endl;
    cout << "Diameter: " << Diameter << " mm" << endl;
    cout << "Status: " << (InRepair ? "In repair" : "Working") << endl;
    cout << "Connected to CS: " << CS1 << " and " << CS2 << endl;
}

ostream& operator<<(ostream& out, const Pipe& pipe) {
    out << pipe.id << endl;
    out << pipe.Name << endl;
    out << pipe.Length << endl;
    out << pipe.Diameter << endl;
    out << pipe.InRepair << endl;
    out << pipe.CS1 << endl;
    out << pipe.CS2 << endl;
    return out;
}

istream& operator>>(istream& in, Pipe& pipe) {
    in >> pipe.id;
    in.ignore();
    getline(in, pipe.Name);
    in >> pipe.Length >> pipe.Diameter >> pipe.InRepair >> pipe.CS1 >> pipe.CS2;
    return in;
}