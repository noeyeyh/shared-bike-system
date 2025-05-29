#pragma once
#include <string>
using namespace std;

class Bicycle {
public:
    Bicycle();
    Bicycle(string id, string name);

    string getId();
    string getName();

private:
    string bikeId;
    string name;
};
