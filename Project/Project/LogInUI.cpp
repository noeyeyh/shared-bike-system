#include "LogInUI.h"
#include "LogIn.h"

/*
 * �Լ� �̸� : LogInUI
 * ��� : �α��� UI Ŭ���� ������
 * ���� ���� : �α��� ���� ��ü ������
 * ��ȯ�� : ����
 */
LogInUI::LogInUI(LogIn* control) {
    this->control = control;
}

/*
 * �Լ� �̸� : startInterface
 * ��� : UI �������̽� ����
 * ���� ���� : ����
 * ��ȯ�� : ����
 */
void LogInUI::startInterface() {
    // �� ���������� ���� ������̱⿡ ����� ����
}

/*
 * �Լ� �̸� : requestLogIn
 * ��� : �Է� ���Ͽ��� ID�� ��й�ȣ�� �޾� �α��� ��û�� ����
 * ���� ���� : �Է� ���� ��Ʈ��, ��� ���� ��Ʈ��
 * ��ȯ�� : ����
 */
void LogInUI::requestLogIn(ifstream& in, ofstream& out) {
    string id, pw;
    in >> id >> pw;

    control->login(id, pw);
    showLogInResult(out, id, pw);
}

/*
 * �Լ� �̸� : showLogInResult
 * ��� : �α��� ����� ��� ���Ͽ� ���
 * ���� ���� : ��� ���� ��Ʈ��, ���̵�, ��й�ȣ
 * ��ȯ�� : ����
 */
void LogInUI::showLogInResult(ofstream& out, string id, string pw) {
    out << "2.1. �α���" << endl;
    out << "> " << id << " " << pw << endl;
    out << endl;
}
