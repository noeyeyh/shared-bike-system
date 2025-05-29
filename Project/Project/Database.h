#pragma once
#include <vector>
#include "Member.h"
#include "Bicycle.h"

class DataBase {
public:
    DataBase();

    void addNewUser(Member* user);
    void addNewManager(Member* manager);
    std::vector<Member*> getMemberList();

    void setLoginIndex(int index);
    int getLoginIndex();

    void registerBicycle(Bicycle* bike);
    std::vector<Bicycle*> getBicycleList();

private:
    std::vector<Member*> memberList;
    std::vector<Bicycle*> bicycleList;
    int loginIndex;
};
