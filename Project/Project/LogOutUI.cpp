#include "LogOutUI.h"
#include "LogOut.h"

/*
 * �Լ� �̸� : LogOutUI
 * ��� : �α׾ƿ� UI ��ü ������
 * ���� ���� : �α׾ƿ� ���� ��ü ������
 * ��ȯ�� : ����
 */
LogOutUI::LogOutUI(LogOut* control) {
    this->control = control;
}

/*
 * �Լ� �̸� : startInterface
 * ��� : UI �������̽� ����
 * ���� ���� : ����
 * ��ȯ�� : ����
 */
void LogOutUI::startInterface() {
    // �� ���������� ���� ������̱⿡ ����� ����
}

/*
 * �Լ� �̸� : requestLogOut
 * ��� : �α׾ƿ� ��û ó��. �α׾ƿ� �� ��� ��� �Լ� ȣ��
 * ���� ���� : �Է� ���� ��Ʈ��, ��� ���� ��Ʈ��
 * ��ȯ�� : ����
 */
void LogOutUI::requestLogOut(ifstream& in, ofstream& out) {
    string id = control->logOut();
    showLogOutResult(out, id);
}

/*
 * �Լ� �̸� : showLogOutResult
 * ��� : �α׾ƿ� ����� ��� ���Ͽ� ���
 * ���� ���� : ��� ���� ��Ʈ��, ����� ID
 * ��ȯ�� : ����
 */
void LogOutUI::showLogOutResult(ofstream& out, string id) {
    out << "2.2. �α׾ƿ�" << endl;
    out << "> " << id << endl;
    out << endl;
}
