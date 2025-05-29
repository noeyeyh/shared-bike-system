#include "RentBicycleUI.h"
#include "RentBicycle.h"

/*
 * 함수 이름 : RentBicycleUI
 * 기능 : 자전거 대여 UI 객체 생성자. 제어 객체를 초기화
 * 전달 인자 : 자전거 대여 제어 객체 포인터
 * 반환값 : 없음
 */
RentBicycleUI::RentBicycleUI(RentBicycle* control) {
    this->control = control;
}

/*
 * 함수 이름 : startInterface
 * 기능 : UI 인터페이스 시작
 * 전달 인자 : 없음
 * 반환값 : 없음
 */
void RentBicycleUI::startInterface() {
    // 이 과제에서는 파일 입출력이기에 기능이 없음
}

/*
 * 함수 이름 : requestRentBicycle
 * 기능 : 입력 파일에서 자전거 ID를 읽고 대여 요청을 보냄
 * 전달 인자 : 입력 파일 스트림, 출력 파일 스트림
 * 반환값 : 없음
 */
void RentBicycleUI::requestRentBicycle(ifstream& in, ofstream& out) {
    string bikeId;
    in >> bikeId;

    string name = control->rentBicycle(bikeId);
    showRegisterResult(out, bikeId, name);
}

/*
 * 함수 이름 : showRegisterResult
 * 기능 : 자전거 대여 결과를 출력 파일에 출력
 * 전달 인자 : 출력 파일 스트림, 자전거 ID, 자전거 이름
 * 반환값 : 없음
 */
void RentBicycleUI::showRegisterResult(ofstream& out, string bikeId, string name) {
    out << "4.1. 자전거 대여" << endl;
    out << "> " << bikeId << " " << name << endl;
    out << endl;
}
