#pragma once
#include <string>
using namespace std;

class DataBase;
class RentBicycleUI;

class RentBicycle {
public:
    RentBicycle(DataBase* db);

    string rentBicycle(string bikeId);  // ������ �̸� ��ȯ

private:
    DataBase* db;
    RentBicycleUI* ui;
};
