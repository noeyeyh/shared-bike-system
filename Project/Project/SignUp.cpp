#include "SignUp.h"
#include "SignUpUI.h"
#include "User.h"
#include "DataBase.h"

/*
 * 함수 이름 : SignUp
 * 기능 : 회원가입 객체 생성자. 데이터베이스 연결 및 UI 초기화
 * 전달 인자 : 데이터베이스 포인터
 * 반환값 : 없음
 */
SignUp::SignUp(DataBase* db) {
    this->db = db;
    this->ui = new SignUpUI(this);
    ui->startInterface();
}

/*
 * 함수 이름 : addNewUser
 * 기능 : 회원 객체를 생성하고 데이터베이스에 추가
 * 전달 인자 : 아이디, 비밀번호, 전화번호
 * 반환값 : 없음
 */
void SignUp::addNewUser(string id, string password, string phoneNumber) {
    Member* newUser = new User(id, password, phoneNumber);
    db->addNewUser(newUser);
}
