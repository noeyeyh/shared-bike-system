#include "RentBicycle.h"
#include "RentBicycleUI.h"
#include "DataBase.h"
#include "User.h"
#include "Bicycle.h"
#include <vector>

/*
 * 함수 이름 : RentBicycle
 * 기능 : 자전거 대여 객체 생성자. 데이터베이스 연결 및 UI 초기화
 * 전달 인자 : 데이터베이스 포인터
 * 반환값 : 없음
 */
RentBicycle::RentBicycle(DataBase* db) {
    this->db = db;
    this->ui = new RentBicycleUI(this);
    ui->startInterface();
}

/*
 * 함수 이름 : rentBicycle
 * 기능 : 자전거 ID를 받아 해당 자전거를 로그인한 사용자에게 추가
 * 전달 인자 : 대여할 자전거 ID
 * 반환값 : 자전거의 이름
 */
string RentBicycle::rentBicycle(string bikeId) {
    // 전체 자전거 리스트에서 해당 ID 탐색
    vector<Bicycle*> bikes = db->getBicycleList();
    Bicycle* target = nullptr;
    for (Bicycle* b : bikes) {
        if (b->getId() == bikeId) {
            target = b;
            break;
        }
    }

    // 찾은 자전거를 현재 로그인한 사용자에게 추가
    int idx = db->getLoginIndex();
    Member* member = db->getMemberList()[idx];

    if (User* user = dynamic_cast<User*>(member)) {
        user->addBicycleToUser(target);
        return target->getName();  // 이름 반환해서 출력에 사용
    }

    return "Unknown";
}
