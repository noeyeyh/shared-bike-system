#include "Member.h"

/*
 * 함수 이름 : Member
 * 기능 : 기본 생성자. 아이디와 비밀번호를 빈 문자열로 초기화
 * 전달 인자 : 없음
 * 반환값 : 없음
 */
Member::Member() {
    id = "";
    password = "";
}

/*
 * 함수 이름 : ~Member
 * 기능 : Member 클래스 소멸자
 * 전달 인자 : 없음
 * 반환값 : 없음
 */
Member::~Member() {
}

/*
 * 함수 이름 : Member
 * 기능 : 회원 객체를 생성
 * 전달 인자 : 아이디, 비밀번호
 * 반환값 : 없음
 */
Member::Member(string id, string password) {
    this->id = id;
    this->password = password;
}

/*
 * 함수 이름 : getId
 * 기능 : 회원의 아이디를 반환
 * 전달 인자 : 없음
 * 반환값 : 아이디
 */
string Member::getId() {
    return id;
}

/*
 * 함수 이름 : getPassword
 * 기능 : 회원의 비밀번호를 반환
 * 전달 인자 : 없음
 * 반환값 : 비밀번호
 */
string Member::getPassword() {
    return password;
}
