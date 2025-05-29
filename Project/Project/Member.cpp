#include "Member.h"

/*
 * �Լ� �̸� : Member
 * ��� : �⺻ ������. ���̵�� ��й�ȣ�� �� ���ڿ��� �ʱ�ȭ
 * ���� ���� : ����
 * ��ȯ�� : ����
 */
Member::Member() {
    id = "";
    password = "";
}

/*
 * �Լ� �̸� : ~Member
 * ��� : Member Ŭ���� �Ҹ���
 * ���� ���� : ����
 * ��ȯ�� : ����
 */
Member::~Member() {
}

/*
 * �Լ� �̸� : Member
 * ��� : ȸ�� ��ü�� ����
 * ���� ���� : ���̵�, ��й�ȣ
 * ��ȯ�� : ����
 */
Member::Member(string id, string password) {
    this->id = id;
    this->password = password;
}

/*
 * �Լ� �̸� : getId
 * ��� : ȸ���� ���̵� ��ȯ
 * ���� ���� : ����
 * ��ȯ�� : ���̵�
 */
string Member::getId() {
    return id;
}

/*
 * �Լ� �̸� : getPassword
 * ��� : ȸ���� ��й�ȣ�� ��ȯ
 * ���� ���� : ����
 * ��ȯ�� : ��й�ȣ
 */
string Member::getPassword() {
    return password;
}
