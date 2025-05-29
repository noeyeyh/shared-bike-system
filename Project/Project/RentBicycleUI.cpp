#include "RentBicycleUI.h"
#include "RentBicycle.h"

/*
 * �Լ� �̸� : RentBicycleUI
 * ��� : ������ �뿩 UI ��ü ������. ���� ��ü�� �ʱ�ȭ
 * ���� ���� : ������ �뿩 ���� ��ü ������
 * ��ȯ�� : ����
 */
RentBicycleUI::RentBicycleUI(RentBicycle* control) {
    this->control = control;
}

/*
 * �Լ� �̸� : startInterface
 * ��� : UI �������̽� ����
 * ���� ���� : ����
 * ��ȯ�� : ����
 */
void RentBicycleUI::startInterface() {
    // �� ���������� ���� ������̱⿡ ����� ����
}

/*
 * �Լ� �̸� : requestRentBicycle
 * ��� : �Է� ���Ͽ��� ������ ID�� �а� �뿩 ��û�� ����
 * ���� ���� : �Է� ���� ��Ʈ��, ��� ���� ��Ʈ��
 * ��ȯ�� : ����
 */
void RentBicycleUI::requestRentBicycle(ifstream& in, ofstream& out) {
    string bikeId;
    in >> bikeId;

    string name = control->rentBicycle(bikeId);
    showRegisterResult(out, bikeId, name);
}

/*
 * �Լ� �̸� : showRegisterResult
 * ��� : ������ �뿩 ����� ��� ���Ͽ� ���
 * ���� ���� : ��� ���� ��Ʈ��, ������ ID, ������ �̸�
 * ��ȯ�� : ����
 */
void RentBicycleUI::showRegisterResult(ofstream& out, string bikeId, string name) {
    out << "4.1. ������ �뿩" << endl;
    out << "> " << bikeId << " " << name << endl;
    out << endl;
}
