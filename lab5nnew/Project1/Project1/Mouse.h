#pragma once
#include"InputDevice.h"
#include"Device.h"
#include <iostream>
#include <string>

class Mouse : virtual public Device, public InputDevice
{
public:
	int dpi;
	bool wireless;

	Mouse(string n, string b, int y, string dV, string sT, int d, bool w);

	using Device::displayInfo;
	using Device::showDeviceCount;

	//5.1
	void connect() override {
		cout << "Mouse connected." << endl;
	}

	void disconnect() override {
		cout << "Mouse disconnected." << endl;
	}

	//5.4
	virtual void adjustSensitivity(int sense) {
		cout << "Adjusting mouse sensitivity to level " << sense << endl;
	}

	//5.3
	virtual ~Mouse() { 
		cout << "Mouse destructor called." << endl;
	}
	//5.4

};

