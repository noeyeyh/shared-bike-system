#pragma once
#include <fstream>
#include <string>
using namespace std;

class LogOut;

class LogOutUI {
public:
    LogOutUI(LogOut* control);

    void startInterface();
    void requestLogOut(ifstream& in, ofstream& out);
    void showLogOutResult(ofstream& out, string id);

private:
    LogOut* control;
};
