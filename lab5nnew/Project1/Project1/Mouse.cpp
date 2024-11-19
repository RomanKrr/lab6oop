#include "Mouse.h"
#include <iostream> 
#include <string>

using namespace std;

string defaultDescription = "Default description";
Mouse::Mouse(string n, string b, int y, string dV, string sT, int d, bool w)
    : Device(n, b, y, dV, sT, true, 100, "Input", 50, defaultDescription), dpi(d), wireless(w) 
{
    cout << "Mouse Constructor multiple imitation" << endl;
}

//Mouse::~Mouse() {
//    cout << "Mouse Destructor multiple imitation" << endl;
//}
