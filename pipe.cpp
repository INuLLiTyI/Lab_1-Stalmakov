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