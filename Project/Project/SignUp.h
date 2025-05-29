#pragma once
#include <string>
using namespace std;

class DataBase;
class SignUpUI;

class SignUp {
public:
    SignUp(DataBase* db);

    void addNewUser(string id, string password, string phoneNumber);

private:
    DataBase* db;
    SignUpUI* ui;
};
