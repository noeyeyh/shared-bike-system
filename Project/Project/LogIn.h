#pragma once
#include <string>
using namespace std;

class DataBase;
class LogInUI;

class LogIn {
public:
    LogIn(DataBase* db);

    bool login(string id, string pw); // �α��� ���� ���� ��ȯ

private:
    DataBase* db;
    LogInUI* ui;
};
