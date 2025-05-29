#include "DataBase.h"
#include "Member.h"

/*
 * �Լ� �̸� : DataBase
 * ��� : �����ͺ��̽� �ʱ�ȭ
 * ���� ���� : ����
 * ��ȯ�� : ����
 */
DataBase::DataBase()
{
	memberList.clear();
}


/*
 * �Լ� �̸� : addNewUser
 * ��� : ���ο� ȸ�� �߰�
 * ���� ���� : ȸ�� ��ü
 * ��ȯ�� : ����
 */
void DataBase::addNewUser(Member* user)
{
	memberList.push_back(user);
}


/*
 * �Լ� �̸� : addNewManager
 * ��� : ���ο� ������ �߰�
 * ���� ���� : ������ ��ü
 * ��ȯ�� : ����
 */
void DataBase::addNewManager(Member* manager)
{
	memberList.push_back(manager);
}

/*
 * �Լ� �̸� : getMemberList
 * ��� : ��ü ȸ�� ����Ʈ�� ��ȯ
 * ���� ���� : ����
 * ��ȯ�� : ȸ�� ������ ����Ʈ
 */
std::vector<Member*> DataBase::getMemberList() {
	return memberList;
}

/*
 * �Լ� �̸� : setLoginIndex
 * ��� : �α��ε� ȸ���� �ε����� ����
 * ���� ���� : �α����� ȸ���� �ε���
 * ��ȯ�� : ����
 */
void DataBase::setLoginIndex(int index) {
	loginIndex = index;
}

/*
 * �Լ� �̸� : getLoginIndex
 * ��� : �α��ε� ȸ���� �ε����� ��ȯ
 * ���� ���� : ����
 * ��ȯ�� : �α��� �ε���
 */
int DataBase::getLoginIndex() {
	return loginIndex;
}

/*
 * �Լ� �̸� : registerBicycle
 * ��� : ���ο� ������ �߰�
 * ���� ���� : ������ ��ü
 * ��ȯ�� : ����
 */
void DataBase::registerBicycle(Bicycle* bike) {
	bicycleList.push_back(bike);
}

/*
 * �Լ� �̸� : getBicycleList
 * ��� : ��ü ������ ����Ʈ�� ��ȯ
 * ���� ���� : ����
 * ��ȯ�� : ������ ������ ����Ʈ
 */
std::vector<Bicycle*> DataBase::getBicycleList() {
	return bicycleList;
}