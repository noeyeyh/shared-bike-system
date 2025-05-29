// Manager.cpp
#include "Manager.h"

/*
 * 함수 이름 : Manager
 * 기능 : 관리자 기본 생성자
 * 전달 인자 : 없음
 * 반환값 : 없음
 */
Manager::Manager() : Member() {}

/*
 * 함수 이름 : Manager
 * 기능 : 아이디와 비밀번호를 받아 관리자 객체를 생성
 * 전달 인자 : 관리자 아이디, 비밀번호
 * 반환값 : 없음
 */
Manager::Manager(string id, string password)
    : Member(id, password) {
}
