#include "DataBase.h"
#include "Member.h"

/*
 * 함수 이름 : DataBase
 * 기능 : 데이터베이스 초기화
 * 전달 인자 : 없음
 * 반환값 : 없음
 */
DataBase::DataBase()
{
	memberList.clear();
}


/*
 * 함수 이름 : addNewUser
 * 기능 : 새로운 회원 추가
 * 전달 인자 : 회원 객체
 * 반환값 : 없음
 */
void DataBase::addNewUser(Member* user)
{
	memberList.push_back(user);
}


/*
 * 함수 이름 : addNewManager
 * 기능 : 새로운 관리자 추가
 * 전달 인자 : 관리자 객체
 * 반환값 : 없음
 */
void DataBase::addNewManager(Member* manager)
{
	memberList.push_back(manager);
}

/*
 * 함수 이름 : getMemberList
 * 기능 : 전체 회원 리스트를 반환
 * 전달 인자 : 없음
 * 반환값 : 회원 포인터 리스트
 */
std::vector<Member*> DataBase::getMemberList() {
	return memberList;
}

/*
 * 함수 이름 : setLoginIndex
 * 기능 : 로그인된 회원의 인덱스를 설정
 * 전달 인자 : 로그인한 회원의 인덱스
 * 반환값 : 없음
 */
void DataBase::setLoginIndex(int index) {
	loginIndex = index;
}

/*
 * 함수 이름 : getLoginIndex
 * 기능 : 로그인된 회원의 인덱스를 반환
 * 전달 인자 : 없음
 * 반환값 : 로그인 인덱스
 */
int DataBase::getLoginIndex() {
	return loginIndex;
}

/*
 * 함수 이름 : registerBicycle
 * 기능 : 새로운 자전거 추가
 * 전달 인자 : 자전거 객체
 * 반환값 : 없음
 */
void DataBase::registerBicycle(Bicycle* bike) {
	bicycleList.push_back(bike);
}

/*
 * 함수 이름 : getBicycleList
 * 기능 : 전체 자전거 리스트를 반환
 * 전달 인자 : 없음
 * 반환값 : 자전거 포인터 리스트
 */
std::vector<Bicycle*> DataBase::getBicycleList() {
	return bicycleList;
}