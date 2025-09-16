#include <iostream>
#include <fstream>
#include <limits>
#include "pipe.h"
#include "CompressorStation.h"

using namespace std

void printMenu() {
    cout << "\n=== Pipeline Management System ===\n";
    cout << "1. Add Pipe\n";
    cout << "2. Add Compressor Station\n";
    cout << "3. View all objects\n";
    cout << "4. Edit Pipe\n";
    cout << "5. Edit Compressor Station\n";
    cout << "6. Save\n";
    cout << "7. Load\n";
    cout << "0. Exit\n";
    cout << "Choose option: ";
}

void clearInput() {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}