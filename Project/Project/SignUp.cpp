#include "SignUp.h"
#include "SignUpUI.h"
#include "User.h"
#include "DataBase.h"

/*
 * �Լ� �̸� : SignUp
 * ��� : ȸ������ ��ü ������. �����ͺ��̽� ���� �� UI �ʱ�ȭ
 * ���� ���� : �����ͺ��̽� ������
 * ��ȯ�� : ����
 */
SignUp::SignUp(DataBase* db) {
    this->db = db;
    this->ui = new SignUpUI(this);
    ui->startInterface();
}

/*
 * �Լ� �̸� : addNewUser
 * ��� : ȸ�� ��ü�� �����ϰ� �����ͺ��̽��� �߰�
 * ���� ���� : ���̵�, ��й�ȣ, ��ȭ��ȣ
 * ��ȯ�� : ����
 */
void SignUp::addNewUser(string id, string password, string phoneNumber) {
    Member* newUser = new User(id, password, phoneNumber);
    db->addNewUser(newUser);
}
