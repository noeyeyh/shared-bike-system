// Manager.cpp
#include "Manager.h"

/*
 * �Լ� �̸� : Manager
 * ��� : ������ �⺻ ������
 * ���� ���� : ����
 * ��ȯ�� : ����
 */
Manager::Manager() : Member() {}

/*
 * �Լ� �̸� : Manager
 * ��� : ���̵�� ��й�ȣ�� �޾� ������ ��ü�� ����
 * ���� ���� : ������ ���̵�, ��й�ȣ
 * ��ȯ�� : ����
 */
Manager::Manager(string id, string password)
    : Member(id, password) {
}
