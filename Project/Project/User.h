// User.h
#pragma once
#include "Member.h"
#include "Bicycle.h"
#include <vector>
#include <string>

class User : public Member {
public:
    User();
    User(string id, string password, string phoneNumber);

    void addBicycleToUser(Bicycle* bike);
    vector<Bicycle*> getBicycleList();

private:
    string phoneNumber;
    vector<Bicycle*> rentedBicycles;
};
