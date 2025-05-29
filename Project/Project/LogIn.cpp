#include "LogIn.h"
#include "LogInUI.h"
#include "DataBase.h"
#include "Member.h"

/*
 * 함수 이름 : LogIn
 * 기능 : 로그인 객체 생성자
 * 전달 인자 : 데이터베이스 포인터
 * 반환값 : 없음
 */
LogIn::LogIn(DataBase* db) {
    this->db = db;
    this->ui = new LogInUI(this);
    ui->startInterface();
}

/*
 * 함수 이름 : login
 * 기능 : 아이디와 비밀번호를 이용한 로그인 시도. 성공 시 로그인 인덱스 설정
 * 전달 인자 : 아이디, 비밀번호
 * 반환값 : 로그인 성공 여부
 */
bool LogIn::login(string id, string pw) {
    vector<Member*> members = db->getMemberList();

    for (int i = 0; i < members.size(); ++i) {
        if (members[i]->getId() == id && members[i]->getPassword() == pw) {
            db->setLoginIndex(i); // 로그인 성공 시 인덱스 저장
            return true;
        }
    }

    return false;
}
