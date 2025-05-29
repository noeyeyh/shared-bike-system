#include "User.h"

/*
 * 함수 이름 : User
 * 기능 : 기본 생성자. 회원 정보를 초기화하고 자전거 리스트를 비움
 * 전달 인자 : 없음
 * 반환값 : 없음
 */
User::User() : Member() {
    phoneNumber = "";
    rentedBicycles.clear();
}

/*
 * 함수 이름 : User
 * 기능 : 아이디, 비밀번호, 전화번호를 받아 사용자 객체를 생성
 * 전달 인자 : 아이디, 비밀번호, 전화번호
 * 반환값 : 없음
 */
User::User(string id, string password, string phoneNumber)
    : Member(id, password), phoneNumber(phoneNumber) {
    rentedBicycles.clear();
}

/*
 * 함수 이름 : addBicycleToUser
 * 기능 : 자전거를 사용자 대여 목록에 추가
 * 전달 인자 : 자전거 객체 포인터
 * 반환값 : 없음
 */
void User::addBicycleToUser(Bicycle* bike) {
    rentedBicycles.push_back(bike);
}

/*
 * 함수 이름 : getBicycleList
 * 기능 : 사용자가 대여한 자전거 리스트를 반환
 * 전달 인자 : 없음
 * 반환값 : 자전거 객체 포인터 리스트
 */
vector<Bicycle*> User::getBicycleList() {
    return rentedBicycles;
}
