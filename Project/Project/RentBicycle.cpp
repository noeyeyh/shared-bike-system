#include "RentBicycle.h"
#include "RentBicycleUI.h"
#include "DataBase.h"
#include "User.h"
#include "Bicycle.h"
#include <vector>

/*
 * �Լ� �̸� : RentBicycle
 * ��� : ������ �뿩 ��ü ������. �����ͺ��̽� ���� �� UI �ʱ�ȭ
 * ���� ���� : �����ͺ��̽� ������
 * ��ȯ�� : ����
 */
RentBicycle::RentBicycle(DataBase* db) {
    this->db = db;
    this->ui = new RentBicycleUI(this);
    ui->startInterface();
}

/*
 * �Լ� �̸� : rentBicycle
 * ��� : ������ ID�� �޾� �ش� �����Ÿ� �α����� ����ڿ��� �߰�
 * ���� ���� : �뿩�� ������ ID
 * ��ȯ�� : �������� �̸�
 */
string RentBicycle::rentBicycle(string bikeId) {
    // ��ü ������ ����Ʈ���� �ش� ID Ž��
    vector<Bicycle*> bikes = db->getBicycleList();
    Bicycle* target = nullptr;
    for (Bicycle* b : bikes) {
        if (b->getId() == bikeId) {
            target = b;
            break;
        }
    }

    // ã�� �����Ÿ� ���� �α����� ����ڿ��� �߰�
    int idx = db->getLoginIndex();
    Member* member = db->getMemberList()[idx];

    if (User* user = dynamic_cast<User*>(member)) {
        user->addBicycleToUser(target);
        return target->getName();  // �̸� ��ȯ�ؼ� ��¿� ���
    }

    return "Unknown";
}
