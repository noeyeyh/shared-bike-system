#pragma once
#include <string>
#include <fstream>
using namespace std;

class SignUp;

class SignUpUI {
public:
    SignUpUI(SignUp* control);

    void startInterface();
    void requestSignUp(ifstream& in, ofstream& out);
    void showSignUpResult(ofstream& out, string id, string pw, string phone);

private:
    SignUp* control;
};