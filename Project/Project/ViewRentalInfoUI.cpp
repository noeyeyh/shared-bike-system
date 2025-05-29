#include "ViewRentalInfoUI.h"
#include "ViewRentalInfo.h"

/*
 * 함수 이름 : ViewRentalInfoUI
 * 기능 : 자전거 대여 정보 조회 UI 객체 생성자. 제어 객체를 초기화
 * 전달 인자 : 대여 정보 제어 객체 포인터
 * 반환값 : 없음
 */
ViewRentalInfoUI::ViewRentalInfoUI(ViewRentalInfo* control) {
    this->control = control;
}

/*
 * 함수 이름 : startInterface
 * 기능 : UI 인터페이스 시작
 * 전달 인자 : 없음
 * 반환값 : 없음
 */
void ViewRentalInfoUI::startInterface() {
    // 이 과제에서는 파일 입출력이기에 기능이 없음
}

/*
 * 함수 이름 : requestViewRentalInfo
 * 기능 : 로그인한 사용자의 자전거 대여 정보를 요청하고 결과 출력 함수 호출
 * 전달 인자 : 입력 파일 스트림, 출력 파일 스트림
 * 반환값 : 없음
 */
void ViewRentalInfoUI::requestViewRentalInfo(ifstream& in, ofstream& out) {
    vector<pair<string, string>> infos = control->showUserBicycles();
    showViewResult(out, infos);
}

/*
 * 함수 이름 : showViewResult
 * 기능 : 사용자가 대여한 자전거 목록을 출력 파일에 출력
 * 전달 인자 : 출력 파일 스트림, 자전거 ID와 이름 쌍의 리스트
 * 반환값 : 없음
 */
void ViewRentalInfoUI::showViewResult(ofstream& out, const vector<pair<string, string>>& bikeInfos) {
    out << "5.1. 자전거 대여 리스트" << endl;
    for (const auto& p : bikeInfos) {
        out << "> " << p.first << " " << p.second << endl;
    }
    out << endl;
}
