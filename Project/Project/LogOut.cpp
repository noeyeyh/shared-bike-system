#include "LogOut.h"
#include "LogOutUI.h"
#include "DataBase.h"
#include "Member.h"

/*
 * �Լ� �̸� : LogOut
 * ��� : �α׾ƿ� ��ü ������
 * ���� ���� : �����ͺ��̽� ������
 * ��ȯ�� : ����
 */
LogOut::LogOut(DataBase* db) {
    this->db = db;
    this->ui = new LogOutUI(this);
    ui->startInterface();
}

/*
 * �Լ� �̸� : logOut
 * ��� : �α��� ���¸� �����ϰ� �α׾ƿ��� ȸ���� ID�� ��ȯ
 * ���� ���� : ����
 * ��ȯ�� : ȸ���� ID
 */
string LogOut::logOut() {
    int idx = db->getLoginIndex();
    string id = db->getMemberList()[idx]->getId(); // �α׾ƿ� ��� ID ����
    db->setLoginIndex(-1); // �α׾ƿ� ó��
    return id;
}
