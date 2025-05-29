#include "ViewRentalInfo.h"
#include "ViewRentalInfoUI.h"
#include "DataBase.h"
#include "Member.h"
#include "User.h"
#include "Bicycle.h"
#include <algorithm>

/*
 * 함수 이름 : ViewRentalInfo
 * 기능 : 자전거 대여 정보 조회 객체 생성자. 데이터베이스 연결 및 UI 초기화
 * 전달 인자 : 데이터베이스 포인터
 * 반환값 : 없음
 */
ViewRentalInfo::ViewRentalInfo(DataBase* db) {
    this->db = db;
    this->ui = new ViewRentalInfoUI(this);
    ui->startInterface();
}

/*
 * 함수 이름 : showUserBicycles
 * 기능 : 로그인한 사용자가 대여한 자전거 목록을 반환 (ID 기준 오름차순 정렬)
 * 전달 인자 : 없음
 * 반환값 : 자전거 ID와 이름 쌍의 리스트
 */
vector<pair<string, string>> ViewRentalInfo::showUserBicycles() {
    vector<pair<string, string>> result;

    int idx = db->getLoginIndex();
    Member* member = db->getMemberList()[idx];

    if (User* user = dynamic_cast<User*>(member)) {
        vector<Bicycle*> bikes = user->getBicycleList();
        for (Bicycle* bike : bikes) {
            result.push_back({ bike->getId(), bike->getName() });
        }
    }

    sort(result.begin(), result.end(), [](const pair<string, string>& a, const pair<string, string>& b) {
        return a.first < b.first; // bikeId 오름차순
        });

    return result;
}
