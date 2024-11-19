#include "Keyboard.h"

using namespace std;

Keyboard::Keyboard(string n, string b, int y, string dV, string sT, bool iC, int pU, string dT, int maxPower, string& desc, string l, bool m, int keys)
    : Device(n, b, y, dV, sT, iC, pU, dT, maxPower, desc), layout(l), isMechanical(m), numKeys(keys) 
{
    cout << "Keyboard Constructor simple imitation" << endl;
}
//
//Keyboard::~Keyboard() {
//    cout << "Keyboard Destructor simple imitation" << endl;
//}

void Keyboard::displayKeyboardInfo() {
    displayInfo();
    cout << "Keyboard layout: " << layout << endl;
    cout << "Mechanical: " << (isMechanical ? "Yes" : "No") << endl;
    cout << "Number of keys: " << numKeys << endl;
}

void Keyboard::printDeviceStatus() {
    cout << endl;
    cout << "Status: " << Device::status << endl;
}

void Keyboard::displayStatus() {
    printDeviceStatus();
    showStatus();
}