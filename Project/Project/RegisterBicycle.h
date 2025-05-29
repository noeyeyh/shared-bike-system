#pragma once
#include <string>
using namespace std;

class DataBase;
class RegisterBicycleUI;

class RegisterBicycle {
public:
    RegisterBicycle(DataBase* db);

    void registerBicycle(string bikeId, string name);

private:
    DataBase* db;
    RegisterBicycleUI* ui;
};
