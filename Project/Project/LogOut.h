#pragma once
#include <string>
using namespace std;

class DataBase;
class LogOutUI;

class LogOut {
public:
    LogOut(DataBase* db);

    string logOut(); // ���� ����� ID ��ȯ

private:
    DataBase* db;
    LogOutUI* ui;
};
