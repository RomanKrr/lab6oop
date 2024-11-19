#pragma once
#include <string>

class InputDevice {
public:
    InputDevice();

    virtual void connect() = 0;
    virtual void disconnect() = 0;

    ~InputDevice();
};
