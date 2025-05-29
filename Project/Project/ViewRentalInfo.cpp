#include "ViewRentalInfo.h"
#include "ViewRentalInfoUI.h"
#include "DataBase.h"
#include "Member.h"
#include "User.h"
#include "Bicycle.h"
#include <algorithm>

/*
 * �Լ� �̸� : ViewRentalInfo
 * ��� : ������ �뿩 ���� ��ȸ ��ü ������. �����ͺ��̽� ���� �� UI �ʱ�ȭ
 * ���� ���� : �����ͺ��̽� ������
 * ��ȯ�� : ����
 */
ViewRentalInfo::ViewRentalInfo(DataBase* db) {
    this->db = db;
    this->ui = new ViewRentalInfoUI(this);
    ui->startInterface();
}

/*
 * �Լ� �̸� : showUserBicycles
 * ��� : �α����� ����ڰ� �뿩�� ������ ����� ��ȯ (ID ���� �������� ����)
 * ���� ���� : ����
 * ��ȯ�� : ������ ID�� �̸� ���� ����Ʈ
 */
vector<pair<string, string>> ViewRentalInfo::showUserBicycles() {
    vector<pair<string, string>> result;

    int idx = db->getLoginIndex();
    Member* member = db->getMemberList()[idx];

    if (User* user = dynamic_cast<User*>(member)) {
        vector<Bicycle*> bikes = user->getBicycleList();
        for (Bicycle* bike : bikes) {
            result.push_back({ bike->getId(), bike->getName() });
        }
    }

    sort(result.begin(), result.end(), [](const pair<string, string>& a, const pair<string, string>& b) {
        return a.first < b.first; // bikeId ��������
        });

    return result;
}
