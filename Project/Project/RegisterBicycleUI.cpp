#include "RegisterBicycleUI.h"
#include "RegisterBicycle.h"

/*
 * �Լ� �̸� : RegisterBicycleUI
 * ��� : ������ ��� UI ��ü ������. ���� ��ü�� �ʱ�ȭ
 * ���� ���� : ������ ��� ���� ��ü ������
 * ��ȯ�� : ����
 */
RegisterBicycleUI::RegisterBicycleUI(RegisterBicycle* control) {
    this->control = control;
}

/*
 * �Լ� �̸� : startInterface
 * ��� : UI �������̽� ����
 * ���� ���� : ����
 * ��ȯ�� : ����
 */
void RegisterBicycleUI::startInterface() {
    // �� ���������� ���� ������̱⿡ ����� ����
}

/*
 * �Լ� �̸� : requestRegisterBicycle
 * ��� : �Է� ���Ͽ��� ������ ������ �а� ��� ��û�� ����
 * ���� ���� : �Է� ���� ��Ʈ��, ��� ���� ��Ʈ��
 * ��ȯ�� : ����
 */
void RegisterBicycleUI::requestRegisterBicycle(ifstream& in, ofstream& out) {
    string bikeId, name;
    in >> bikeId >> name;

    control->registerBicycle(bikeId, name);
    showRegisterResult(out, bikeId, name);
}

/*
 * �Լ� �̸� : showRegisterResult
 * ��� : ������ ��� ����� ��� ���Ͽ� ���
 * ���� ���� : ��� ���� ��Ʈ��, ������ ID, ������ �̸�
 * ��ȯ�� : ����
 */
void RegisterBicycleUI::showRegisterResult(ofstream& out, string bikeId, string name) {
    out << "3.1. ������ ���" << endl;
    out << "> " << bikeId << " " << name << endl;
    out << endl;
}
