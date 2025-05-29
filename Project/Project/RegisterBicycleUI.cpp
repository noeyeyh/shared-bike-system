#include "RegisterBicycleUI.h"
#include "RegisterBicycle.h"

/*
 * 함수 이름 : RegisterBicycleUI
 * 기능 : 자전거 등록 UI 객체 생성자. 제어 객체를 초기화
 * 전달 인자 : 자전거 등록 제어 객체 포인터
 * 반환값 : 없음
 */
RegisterBicycleUI::RegisterBicycleUI(RegisterBicycle* control) {
    this->control = control;
}

/*
 * 함수 이름 : startInterface
 * 기능 : UI 인터페이스 시작
 * 전달 인자 : 없음
 * 반환값 : 없음
 */
void RegisterBicycleUI::startInterface() {
    // 이 과제에서는 파일 입출력이기에 기능이 없음
}

/*
 * 함수 이름 : requestRegisterBicycle
 * 기능 : 입력 파일에서 자전거 정보를 읽고 등록 요청을 보냄
 * 전달 인자 : 입력 파일 스트림, 출력 파일 스트림
 * 반환값 : 없음
 */
void RegisterBicycleUI::requestRegisterBicycle(ifstream& in, ofstream& out) {
    string bikeId, name;
    in >> bikeId >> name;

    control->registerBicycle(bikeId, name);
    showRegisterResult(out, bikeId, name);
}

/*
 * 함수 이름 : showRegisterResult
 * 기능 : 자전거 등록 결과를 출력 파일에 출력
 * 전달 인자 : 출력 파일 스트림, 자전거 ID, 자전거 이름
 * 반환값 : 없음
 */
void RegisterBicycleUI::showRegisterResult(ofstream& out, string bikeId, string name) {
    out << "3.1. 자전거 등록" << endl;
    out << "> " << bikeId << " " << name << endl;
    out << endl;
}
