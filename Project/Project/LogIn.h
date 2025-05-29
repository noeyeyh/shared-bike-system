#pragma once
#include <string>
using namespace std;

class DataBase;
class LogInUI;

class LogIn {
public:
    LogIn(DataBase* db);

    bool login(string id, string pw); // 로그인 성공 여부 반환

private:
    DataBase* db;
    LogInUI* ui;
};
