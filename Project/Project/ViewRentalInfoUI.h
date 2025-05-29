#pragma once
#include <fstream>
#include <string>
#include <vector>
#include <utility>
using namespace std;

class ViewRentalInfo;

class ViewRentalInfoUI {
public:
    ViewRentalInfoUI(ViewRentalInfo* control);

    void startInterface();
    void requestViewRentalInfo(ifstream& in, ofstream& out);
    void showViewResult(ofstream& out, const vector<pair<string, string>>& bikeInfos);


private:
    ViewRentalInfo* control;
};
