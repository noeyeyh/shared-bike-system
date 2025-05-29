#include "User.h"

/*
 * �Լ� �̸� : User
 * ��� : �⺻ ������. ȸ�� ������ �ʱ�ȭ�ϰ� ������ ����Ʈ�� ���
 * ���� ���� : ����
 * ��ȯ�� : ����
 */
User::User() : Member() {
    phoneNumber = "";
    rentedBicycles.clear();
}

/*
 * �Լ� �̸� : User
 * ��� : ���̵�, ��й�ȣ, ��ȭ��ȣ�� �޾� ����� ��ü�� ����
 * ���� ���� : ���̵�, ��й�ȣ, ��ȭ��ȣ
 * ��ȯ�� : ����
 */
User::User(string id, string password, string phoneNumber)
    : Member(id, password), phoneNumber(phoneNumber) {
    rentedBicycles.clear();
}

/*
 * �Լ� �̸� : addBicycleToUser
 * ��� : �����Ÿ� ����� �뿩 ��Ͽ� �߰�
 * ���� ���� : ������ ��ü ������
 * ��ȯ�� : ����
 */
void User::addBicycleToUser(Bicycle* bike) {
    rentedBicycles.push_back(bike);
}

/*
 * �Լ� �̸� : getBicycleList
 * ��� : ����ڰ� �뿩�� ������ ����Ʈ�� ��ȯ
 * ���� ���� : ����
 * ��ȯ�� : ������ ��ü ������ ����Ʈ
 */
vector<Bicycle*> User::getBicycleList() {
    return rentedBicycles;
}
