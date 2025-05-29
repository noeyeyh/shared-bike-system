#include "ViewRentalInfoUI.h"
#include "ViewRentalInfo.h"

/*
 * �Լ� �̸� : ViewRentalInfoUI
 * ��� : ������ �뿩 ���� ��ȸ UI ��ü ������. ���� ��ü�� �ʱ�ȭ
 * ���� ���� : �뿩 ���� ���� ��ü ������
 * ��ȯ�� : ����
 */
ViewRentalInfoUI::ViewRentalInfoUI(ViewRentalInfo* control) {
    this->control = control;
}

/*
 * �Լ� �̸� : startInterface
 * ��� : UI �������̽� ����
 * ���� ���� : ����
 * ��ȯ�� : ����
 */
void ViewRentalInfoUI::startInterface() {
    // �� ���������� ���� ������̱⿡ ����� ����
}

/*
 * �Լ� �̸� : requestViewRentalInfo
 * ��� : �α����� ������� ������ �뿩 ������ ��û�ϰ� ��� ��� �Լ� ȣ��
 * ���� ���� : �Է� ���� ��Ʈ��, ��� ���� ��Ʈ��
 * ��ȯ�� : ����
 */
void ViewRentalInfoUI::requestViewRentalInfo(ifstream& in, ofstream& out) {
    vector<pair<string, string>> infos = control->showUserBicycles();
    showViewResult(out, infos);
}

/*
 * �Լ� �̸� : showViewResult
 * ��� : ����ڰ� �뿩�� ������ ����� ��� ���Ͽ� ���
 * ���� ���� : ��� ���� ��Ʈ��, ������ ID�� �̸� ���� ����Ʈ
 * ��ȯ�� : ����
 */
void ViewRentalInfoUI::showViewResult(ofstream& out, const vector<pair<string, string>>& bikeInfos) {
    out << "5.1. ������ �뿩 ����Ʈ" << endl;
    for (const auto& p : bikeInfos) {
        out << "> " << p.first << " " << p.second << endl;
    }
    out << endl;
}
