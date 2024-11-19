#include "Monitor.h"
#include <iostream> 
#include <string>
#include <fstream>

Monitor::Monitor(string b, string m, string dt)
    :brand(b), model(m), displayType(dt) {}

Monitor::~Monitor() {
    cout << "Monitor Destructor simple imitation" << endl;
}
void Monitor::wFile(const string& filename) {
    try {
        cout << "Attempting to open file for writing: " << filename << endl;
        ofstream outFile(filename);

        if (!outFile) {
            throw runtime_error("Failed to open file for writing.");
        }

        cout << "File opened successfully for writing." << endl;

        outFile << "Brand: " << brand << endl;
        outFile << "Model: " << model << endl;
        outFile << "Display Type: " << displayType << endl;

        if (!outFile.good()) {
            throw runtime_error("Error during file write operation.");
        }

        outFile.close();
        cout << "Data written to file successfully." << endl;
    }
    catch (const exception& e) {
        cout << "Error writing to file: " << e.what() << endl;
    }
}

void Monitor::rFile(const string& filename) {
    try {
        ifstream inFile(filename);
        if (!inFile) {
            throw runtime_error("Failed to open file for reading.");
        }

        string line;
        while (getline(inFile, line)) {
            cout << line << endl;
        }

        inFile.close();
    }
    catch (const exception& e) {
        cout << "Error reading from file: " << e.what() << endl;
    }
}
