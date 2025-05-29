#pragma once
#include <string>
using namespace std;

class Member {
public:
    Member();
    Member(string id, string password);

    virtual ~Member();

    string getId();
    string getPassword();

protected:
    string id;
    string password;
};
