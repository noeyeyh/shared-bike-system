#include "ExitUI.h"
#include "Exit.h"

/*
 * 함수 이름 : ExitUI
 * 기능 : 종료 UI 객체 생성자. 제어 객체 초기화
 * 전달 인자 : 종료 제어 객체 포인터
 * 반환값 : 없음
 */
ExitUI::ExitUI(Exit* control) {
    this->control = control;
}

/*
 * 함수 이름 : startInterface
 * 기능 : UI 인터페이스 시작
 * 전달 인자 : 없음
 * 반환값 : 없음
 */
void ExitUI::startInterface() {
    // 이 과제에서는 파일 입출력이기에 기능이 없음
}

/*
 * 함수 이름 : requestExit
 * 기능 : 종료 요청을 제어 객체에 전달하고 출력 결과 보여줌
 * 전달 인자 : 출력 파일 스트림
 * 반환값 : 없음
 */
void ExitUI::requestExit(ofstream& out) {
    control->exit(out);
}
