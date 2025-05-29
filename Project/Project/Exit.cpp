#include "Exit.h"

/*
 * 함수 이름 : exit
 * 기능 : 종료 메시지를 출력
 * 전달 인자 : 출력 파일 스트림
 * 반환값 : 없음
 */
void Exit::exit(ofstream& out) {
    out << "6.1. 종료";
}
