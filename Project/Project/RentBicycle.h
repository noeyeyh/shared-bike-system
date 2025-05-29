#pragma once
#include <string>
using namespace std;

class DataBase;
class RentBicycleUI;

class RentBicycle {
public:
    RentBicycle(DataBase* db);

    string rentBicycle(string bikeId);  // 자전거 이름 반환

private:
    DataBase* db;
    RentBicycleUI* ui;
};
