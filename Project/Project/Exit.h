#pragma once
#include <fstream>
using namespace std;

class ExitUI;

class Exit {
public:
    void exit(ofstream& out);

private:
    ExitUI* ui;
};
