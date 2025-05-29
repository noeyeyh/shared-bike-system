#pragma once
#include <fstream>
using namespace std;

class Exit;

class ExitUI {
public:
    ExitUI(Exit* control);

    void startInterface();
    void requestExit(ofstream& out);

private:
    Exit* control;
};
