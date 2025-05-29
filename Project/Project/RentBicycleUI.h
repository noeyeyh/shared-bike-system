#pragma once
#include <fstream>
#include <string>
using namespace std;

class RentBicycle;

class RentBicycleUI {
public:
    RentBicycleUI(RentBicycle* control);

    void startInterface();
    void requestRentBicycle(ifstream& in, ofstream& out);
    void showRegisterResult(ofstream& out, string bikeId, string name);

private:
    RentBicycle* control;
};
