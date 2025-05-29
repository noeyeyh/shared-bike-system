#include "LogOut.h"
#include "LogOutUI.h"
#include "DataBase.h"
#include "Member.h"

/*
 * 함수 이름 : LogOut
 * 기능 : 로그아웃 객체 생성자
 * 전달 인자 : 데이터베이스 포인터
 * 반환값 : 없음
 */
LogOut::LogOut(DataBase* db) {
    this->db = db;
    this->ui = new LogOutUI(this);
    ui->startInterface();
}

/*
 * 함수 이름 : logOut
 * 기능 : 로그인 상태를 해제하고 로그아웃한 회원의 ID를 반환
 * 전달 인자 : 없음
 * 반환값 : 회원의 ID
 */
string LogOut::logOut() {
    int idx = db->getLoginIndex();
    string id = db->getMemberList()[idx]->getId(); // 로그아웃 대상 ID 저장
    db->setLoginIndex(-1); // 로그아웃 처리
    return id;
}
