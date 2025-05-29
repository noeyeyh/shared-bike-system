#pragma once
#include <fstream>
#include <string>
using namespace std;

class LogIn;

class LogInUI {
public:
    LogInUI(LogIn* control);

    void startInterface();
    void requestLogIn(ifstream& in, ofstream& out);
    void showLogInResult(ofstream& out, string id, string pw);

private:
    LogIn* control;
};
