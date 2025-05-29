#include "LogInUI.h"
#include "LogIn.h"

/*
 * 함수 이름 : LogInUI
 * 기능 : 로그인 UI 클래스 생성자
 * 전달 인자 : 로그인 제어 객체 포인터
 * 반환값 : 없음
 */
LogInUI::LogInUI(LogIn* control) {
    this->control = control;
}

/*
 * 함수 이름 : startInterface
 * 기능 : UI 인터페이스 시작
 * 전달 인자 : 없음
 * 반환값 : 없음
 */
void LogInUI::startInterface() {
    // 이 과제에서는 파일 입출력이기에 기능이 없음
}

/*
 * 함수 이름 : requestLogIn
 * 기능 : 입력 파일에서 ID와 비밀번호를 받아 로그인 요청을 보냄
 * 전달 인자 : 입력 파일 스트림, 출력 파일 스트림
 * 반환값 : 없음
 */
void LogInUI::requestLogIn(ifstream& in, ofstream& out) {
    string id, pw;
    in >> id >> pw;

    control->login(id, pw);
    showLogInResult(out, id, pw);
}

/*
 * 함수 이름 : showLogInResult
 * 기능 : 로그인 결과를 출력 파일에 출력
 * 전달 인자 : 출력 파일 스트림, 아이디, 비밀번호
 * 반환값 : 없음
 */
void LogInUI::showLogInResult(ofstream& out, string id, string pw) {
    out << "2.1. 로그인" << endl;
    out << "> " << id << " " << pw << endl;
    out << endl;
}
