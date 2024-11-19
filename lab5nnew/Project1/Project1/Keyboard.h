#pragma once
#include"Device.h"
#include"InputDevice.h"
#include <iostream>
#include <string>

using namespace std;

class Keyboard : protected Device, public InputDevice
{
public:
    string layout;
    bool isMechanical;
    int numKeys;


    Keyboard(string n, string b, int y, string dV, string sT, bool iC, int pU, string dT, int maxPower, string& desc, string l, bool m, int keys);

    //5.1
    void connect() override {
        cout << "Keyboard connected." << endl;
    }

    void disconnect() override {
        cout << "Keyboard disconnected." << endl;
    }

    void displayKeyboardInfo();
    void displayStatus();

    //5.3
    virtual ~Keyboard() { 
        cout << "Keyboard destructor called." << endl;
    }
    //5.4

    virtual void checkKeyboardStatus() {
        cout << "Checking keyboard status..." << endl;
        if (isMechanical) {
            cout << "Mechanical keyboard with " << numKeys << " keys." << endl;
        }
        else {
            cout << "Non-mechanical keyboard with " << numKeys << " keys." << endl;
        }
    }


protected:
    void printDeviceStatus();
};

