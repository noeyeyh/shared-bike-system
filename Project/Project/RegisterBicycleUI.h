#pragma once
#include <fstream>
#include <string>
using namespace std;

class RegisterBicycle;

class RegisterBicycleUI {
public:
    RegisterBicycleUI(RegisterBicycle* control);

    void startInterface();
    void requestRegisterBicycle(ifstream& in, ofstream& out);
    void showRegisterResult(ofstream& out, string bikeId, string name);

private:
    RegisterBicycle* control;
};
