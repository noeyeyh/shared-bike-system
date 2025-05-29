#include "ExitUI.h"
#include "Exit.h"

/*
 * �Լ� �̸� : ExitUI
 * ��� : ���� UI ��ü ������. ���� ��ü �ʱ�ȭ
 * ���� ���� : ���� ���� ��ü ������
 * ��ȯ�� : ����
 */
ExitUI::ExitUI(Exit* control) {
    this->control = control;
}

/*
 * �Լ� �̸� : startInterface
 * ��� : UI �������̽� ����
 * ���� ���� : ����
 * ��ȯ�� : ����
 */
void ExitUI::startInterface() {
    // �� ���������� ���� ������̱⿡ ����� ����
}

/*
 * �Լ� �̸� : requestExit
 * ��� : ���� ��û�� ���� ��ü�� �����ϰ� ��� ��� ������
 * ���� ���� : ��� ���� ��Ʈ��
 * ��ȯ�� : ����
 */
void ExitUI::requestExit(ofstream& out) {
    control->exit(out);
}
