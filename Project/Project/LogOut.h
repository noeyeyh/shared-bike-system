#pragma once
#include <string>
using namespace std;

class DataBase;
class LogOutUI;

class LogOut {
public:
    LogOut(DataBase* db);

    string logOut(); // 현재 사용자 ID 반환

private:
    DataBase* db;
    LogOutUI* ui;
};
