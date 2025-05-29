#include "SignUpUI.h"
#include "SignUp.h"

/*
 * 함수 이름 : SignUpUI
 * 기능 : 회원가입 UI 객체 생성자. 제어 객체를 초기화
 * 전달 인자 : 회원가입 제어 객체 포인터
 * 반환값 : 없음
 */
SignUpUI::SignUpUI(SignUp* control) {
    this->control = control;
}

/*
 * 함수 이름 : startInterface
 * 기능 : UI 인터페이스 시작
 * 전달 인자 : 없음
 * 반환값 : 없음
 */
void SignUpUI::startInterface()
{
    // 이 과제에서는 파일 입출력이기에 기능이 없음
}

/*
 * 함수 이름 : requestSignUp
 * 기능 : 입력 파일에서 회원 정보를 읽고 회원가입 요청을 보냄
 * 전달 인자 : 입력 파일 스트림, 출력 파일 스트림
 * 반환값 : 없음
 */
void SignUpUI::requestSignUp(ifstream& in, ofstream& out) {
    string id, pw, phone;
    in >> id >> pw >> phone;

    control->addNewUser(id, pw, phone);
    showSignUpResult(out, id, pw, phone);
}

/*
 * 함수 이름 : showSignUpResult
 * 기능 : 회원가입 결과를 출력 파일에 출력
 * 전달 인자 : 출력 파일 스트림, 아이디, 비밀번호, 전화번호
 * 반환값 : 없음
 */
void SignUpUI::showSignUpResult(ofstream& out, string id, string pw, string phone) {
    out << "1.1. 회원가입" << endl;
    out << "> " << id << " " << pw << " " << phone << endl;
    out << endl;
}
