#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string.h>
#include "SignUp.h"
#include "SignUpUI.h"
#include "LogIn.h"
#include "LogInUI.h"
#include "LogOut.h"
#include "LogOutUI.h"
#include "RegisterBicycle.h"
#include "RegisterBicycleUI.h"
#include "RentBicycle.h"
#include "RentBicycleUI.h"
#include "ViewRentalInfo.h"
#include "ViewRentalInfoUI.h"
#include "Exit.h"
#include "ExitUI.h"
#include "DataBase.h"
#include "Manager.h"
#include "Member.h"

using namespace std;

#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

void doTask(ifstream& in_fp, ofstream& out_fp, DataBase& database);

/*
 * 함수 이름 : main
 * 기능 : 프로그램의 시작으로 doTask 실행
 * 전달 인자 : 없음
 * 반환값 : 실행 성공 여부 (0 = 성공, 1 = 실패)
 */
int main() {
    ifstream in_fp(INPUT_FILE_NAME);
    ofstream out_fp(OUTPUT_FILE_NAME);

    if (!in_fp || !out_fp) {
        cerr << "파일 열기에 실패했습니다." << endl;
        return 1;
    }

    DataBase database;

    // admin 계정 미리 등록
    Member* admin = new Manager("admin", "admin");
    database.addNewManager(admin);

    doTask(in_fp, out_fp, database);

    in_fp.close();
    out_fp.close();

    return 0;
}

/*
 * 함수 이름 : doTask
 * 기능 : 사용자 입력에 따라 메뉴 수행
 * 전달 인자 : 입력 파일 스트림 참조, 출력 파일 스트림 참조, 데이터베이스 참조
 * 반환값 : 없음
 */
void doTask(ifstream& in_fp, ofstream& out_fp, DataBase& database) {
    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;

    // Control 객체 준비
    SignUp signUp(&database);
    LogIn login(&database);
    LogOut logout(&database);
    RegisterBicycle registerBicycle(&database);
    RentBicycle rentBicycle(&database);
    ViewRentalInfo viewRental(&database);
    Exit exitControl;

    // UI 객체 명시적으로 생성
    SignUpUI signUpUI(&signUp);
    LogInUI loginUI(&login);
    LogOutUI logoutUI(&logout);
    RegisterBicycleUI registerUI(&registerBicycle);
    RentBicycleUI rentUI(&rentBicycle);
    ViewRentalInfoUI rentalUI(&viewRental);
    ExitUI exitUI(&exitControl);

    while (!is_program_exit && (in_fp >> menu_level_1 >> menu_level_2)) {
        if (menu_level_1 == 1 && menu_level_2 == 1) {
            signUpUI.requestSignUp(in_fp, out_fp);
        }
        else if (menu_level_1 == 2 && menu_level_2 == 1) {
            loginUI.requestLogIn(in_fp, out_fp);
        }
        else if (menu_level_1 == 2 && menu_level_2 == 2) {
            logoutUI.requestLogOut(in_fp, out_fp);
        }
        else if (menu_level_1 == 3 && menu_level_2 == 1) {
            registerUI.requestRegisterBicycle(in_fp, out_fp);
        }
        else if (menu_level_1 == 4 && menu_level_2 == 1) {
            rentUI.requestRentBicycle(in_fp, out_fp);
        }
        else if (menu_level_1 == 5 && menu_level_2 == 1) {
            rentalUI.requestViewRentalInfo(in_fp, out_fp);
        }
        else if (menu_level_1 == 6 && menu_level_2 == 1) {
            exitUI.requestExit(out_fp);
            is_program_exit = 1;
        }
    }
}
