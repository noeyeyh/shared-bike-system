#include "Bicycle.h"

/*
 * �Լ� �̸� : Bicycle
 * ��� : �⺻ ������. ������ ID�� �̸��� �� ���ڿ��� �ʱ�ȭ
 * ���� ���� : ����
 * ��ȯ�� : ����
 */
Bicycle::Bicycle() {
    bikeId = "";
    name = "";
}

/*
 * �Լ� �̸� : Bicycle
 * ��� : ������ ID�� �̸��� �ʱ�ȭ�ϴ� ������
 * ���� ���� : ������ ID, ������ �̸�
 * ��ȯ�� : ����
 */
Bicycle::Bicycle(string id, string name) {
    this->bikeId = id;
    this->name = name;
}

/*
 * �Լ� �̸� : getId
 * ��� : ������ ID ��ȯ
 * ���� ���� : ����
 * ��ȯ�� : ������ ID
 */
string Bicycle::getId() {
    return bikeId;
}

/*
 * �Լ� �̸� : getName
 * ��� : ������ �̸� ��ȯ
 * ���� ���� : ����
 * ��ȯ�� : ������ �̸�
 */
string Bicycle::getName() {
    return name;
}
