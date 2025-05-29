#pragma once
#include "Member.h"
#include <string>

class Manager : public Member {
public:
    Manager();
    Manager(string id, string password);
};
