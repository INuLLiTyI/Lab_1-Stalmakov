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

void addPipe(Pipe& pipe) {
    cout << "\n=== Add New Pipe ===\n";
    string name;
    int length, diameter;

    cout << "Enter pipe name: ";
    clearInput();
    getline(cin, name);

    cout << "Enter length (km): ";
    while (!(cin >> length) || length <= 0) {
        cout << "Invalid input! Enter positive number: ";
        clearInput();
    }

    cout << "Enter diameter (mm): ";
    while (!(cin >> diameter) || diameter <= 0) {
        cout << "Invalid input! Enter positive number: ";
        clearInput();
    }

    pipe.SetName(name);
    pipe.SetLength(length);
    pipe.SetDiameter(diameter);
    pipe.SetInRepair(false);

    cout << "Pipe added successfully!\n";
}