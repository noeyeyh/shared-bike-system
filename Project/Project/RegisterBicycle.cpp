#include "RegisterBicycle.h"
#include "RegisterBicycleUI.h"
#include "DataBase.h"
#include "Bicycle.h"

/*
 * 함수 이름 : RegisterBicycle
 * 기능 : 자전거 등록 객체 생성자. 데이터베이스 연결 및 UI 초기화
 * 전달 인자 : 데이터베이스 포인터
 * 반환값 : 없음
 */
RegisterBicycle::RegisterBicycle(DataBase* db) {
    this->db = db;
    this->ui = new RegisterBicycleUI(this);
    ui->startInterface();
}

/*
 * 함수 이름 : registerBicycle
 * 기능 : 자전거 객체를 생성하고 데이터베이스에 등록
 * 전달 인자 : 자전거 ID, 자전거 이름
 * 반환값 : 없음
 */
void RegisterBicycle::registerBicycle(string bikeId, string name) {
    Bicycle* newBike = new Bicycle(bikeId, name);
    db->registerBicycle(newBike);
}
