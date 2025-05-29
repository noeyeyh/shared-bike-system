#include "LogOutUI.h"
#include "LogOut.h"

/*
 * 함수 이름 : LogOutUI
 * 기능 : 로그아웃 UI 객체 생성자
 * 전달 인자 : 로그아웃 제어 객체 포인터
 * 반환값 : 없음
 */
LogOutUI::LogOutUI(LogOut* control) {
    this->control = control;
}

/*
 * 함수 이름 : startInterface
 * 기능 : UI 인터페이스 시작
 * 전달 인자 : 없음
 * 반환값 : 없음
 */
void LogOutUI::startInterface() {
    // 이 과제에서는 파일 입출력이기에 기능이 없음
}

/*
 * 함수 이름 : requestLogOut
 * 기능 : 로그아웃 요청 처리. 로그아웃 후 결과 출력 함수 호출
 * 전달 인자 : 입력 파일 스트림, 출력 파일 스트림
 * 반환값 : 없음
 */
void LogOutUI::requestLogOut(ifstream& in, ofstream& out) {
    string id = control->logOut();
    showLogOutResult(out, id);
}

/*
 * 함수 이름 : showLogOutResult
 * 기능 : 로그아웃 결과를 출력 파일에 출력
 * 전달 인자 : 출력 파일 스트림, 사용자 ID
 * 반환값 : 없음
 */
void LogOutUI::showLogOutResult(ofstream& out, string id) {
    out << "2.2. 로그아웃" << endl;
    out << "> " << id << endl;
    out << endl;
}
