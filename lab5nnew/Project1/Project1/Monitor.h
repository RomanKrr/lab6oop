#pragma once
#include"InputDevice.h"
#include <iostream>
#include <string>

using namespace std;

class Monitor : public InputDevice
{
public:
    string brand;
    string model;
    string displayType;

    Monitor(string b, string m, string dt);

    void connect() override {
        cout << "Monitor connected." << endl;
    }

    void disconnect() override {
        cout << "Monitor disconnected." << endl;
    }

    //5.7
    void wFile(const string& filename);
    void rFile(const string& filename);

    virtual ~Monitor();

    //5.4
    virtual void displayInfo() {
        cout << "Displaying monitor information..." << endl;
    }

};

