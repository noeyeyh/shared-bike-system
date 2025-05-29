#pragma once
#include <vector>
#include <string>
using namespace std;

class DataBase;
class ViewRentalInfoUI;

class ViewRentalInfo {
public:
    ViewRentalInfo(DataBase* db);

    vector<pair<string, string>> showUserBicycles(); 

private:
    DataBase* db;
    ViewRentalInfoUI* ui;
};
