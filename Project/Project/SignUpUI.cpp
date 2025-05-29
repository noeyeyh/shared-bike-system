#include "SignUpUI.h"
#include "SignUp.h"

/*
 * �Լ� �̸� : SignUpUI
 * ��� : ȸ������ UI ��ü ������. ���� ��ü�� �ʱ�ȭ
 * ���� ���� : ȸ������ ���� ��ü ������
 * ��ȯ�� : ����
 */
SignUpUI::SignUpUI(SignUp* control) {
    this->control = control;
}

/*
 * �Լ� �̸� : startInterface
 * ��� : UI �������̽� ����
 * ���� ���� : ����
 * ��ȯ�� : ����
 */
void SignUpUI::startInterface()
{
    // �� ���������� ���� ������̱⿡ ����� ����
}

/*
 * �Լ� �̸� : requestSignUp
 * ��� : �Է� ���Ͽ��� ȸ�� ������ �а� ȸ������ ��û�� ����
 * ���� ���� : �Է� ���� ��Ʈ��, ��� ���� ��Ʈ��
 * ��ȯ�� : ����
 */
void SignUpUI::requestSignUp(ifstream& in, ofstream& out) {
    string id, pw, phone;
    in >> id >> pw >> phone;

    control->addNewUser(id, pw, phone);
    showSignUpResult(out, id, pw, phone);
}

/*
 * �Լ� �̸� : showSignUpResult
 * ��� : ȸ������ ����� ��� ���Ͽ� ���
 * ���� ���� : ��� ���� ��Ʈ��, ���̵�, ��й�ȣ, ��ȭ��ȣ
 * ��ȯ�� : ����
 */
void SignUpUI::showSignUpResult(ofstream& out, string id, string pw, string phone) {
    out << "1.1. ȸ������" << endl;
    out << "> " << id << " " << pw << " " << phone << endl;
    out << endl;
}
