#include "RegisterBicycle.h"
#include "RegisterBicycleUI.h"
#include "DataBase.h"
#include "Bicycle.h"

/*
 * �Լ� �̸� : RegisterBicycle
 * ��� : ������ ��� ��ü ������. �����ͺ��̽� ���� �� UI �ʱ�ȭ
 * ���� ���� : �����ͺ��̽� ������
 * ��ȯ�� : ����
 */
RegisterBicycle::RegisterBicycle(DataBase* db) {
    this->db = db;
    this->ui = new RegisterBicycleUI(this);
    ui->startInterface();
}

/*
 * �Լ� �̸� : registerBicycle
 * ��� : ������ ��ü�� �����ϰ� �����ͺ��̽��� ���
 * ���� ���� : ������ ID, ������ �̸�
 * ��ȯ�� : ����
 */
void RegisterBicycle::registerBicycle(string bikeId, string name) {
    Bicycle* newBike = new Bicycle(bikeId, name);
    db->registerBicycle(newBike);
}
