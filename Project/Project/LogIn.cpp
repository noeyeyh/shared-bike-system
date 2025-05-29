#include "LogIn.h"
#include "LogInUI.h"
#include "DataBase.h"
#include "Member.h"

/*
 * �Լ� �̸� : LogIn
 * ��� : �α��� ��ü ������
 * ���� ���� : �����ͺ��̽� ������
 * ��ȯ�� : ����
 */
LogIn::LogIn(DataBase* db) {
    this->db = db;
    this->ui = new LogInUI(this);
    ui->startInterface();
}

/*
 * �Լ� �̸� : login
 * ��� : ���̵�� ��й�ȣ�� �̿��� �α��� �õ�. ���� �� �α��� �ε��� ����
 * ���� ���� : ���̵�, ��й�ȣ
 * ��ȯ�� : �α��� ���� ����
 */
bool LogIn::login(string id, string pw) {
    vector<Member*> members = db->getMemberList();

    for (int i = 0; i < members.size(); ++i) {
        if (members[i]->getId() == id && members[i]->getPassword() == pw) {
            db->setLoginIndex(i); // �α��� ���� �� �ε��� ����
            return true;
        }
    }

    return false;
}
