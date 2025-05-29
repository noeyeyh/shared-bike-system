#include "Bicycle.h"

/*
 * 함수 이름 : Bicycle
 * 기능 : 기본 생성자. 자전거 ID와 이름을 빈 문자열로 초기화
 * 전달 인자 : 없음
 * 반환값 : 없음
 */
Bicycle::Bicycle() {
    bikeId = "";
    name = "";
}

/*
 * 함수 이름 : Bicycle
 * 기능 : 자전거 ID와 이름을 초기화하는 생성자
 * 전달 인자 : 자전거 ID, 자전거 이름
 * 반환값 : 없음
 */
Bicycle::Bicycle(string id, string name) {
    this->bikeId = id;
    this->name = name;
}

/*
 * 함수 이름 : getId
 * 기능 : 자전거 ID 반환
 * 전달 인자 : 없음
 * 반환값 : 자전거 ID
 */
string Bicycle::getId() {
    return bikeId;
}

/*
 * 함수 이름 : getName
 * 기능 : 자전거 이름 반환
 * 전달 인자 : 없음
 * 반환값 : 자전거 이름
 */
string Bicycle::getName() {
    return name;
}
