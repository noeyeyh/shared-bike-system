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
 * �Լ� �̸� : main
 * ��� : ���α׷��� �������� doTask ����
 * ���� ���� : ����
 * ��ȯ�� : ���� ���� ���� (0 = ����, 1 = ����)
 */
int main() {
    ifstream in_fp(INPUT_FILE_NAME);
    ofstream out_fp(OUTPUT_FILE_NAME);

    if (!in_fp || !out_fp) {
        cerr << "���� ���⿡ �����߽��ϴ�." << endl;
        return 1;
    }

    DataBase database;

    // admin ���� �̸� ���
    Member* admin = new Manager("admin", "admin");
    database.addNewManager(admin);

    doTask(in_fp, out_fp, database);

    in_fp.close();
    out_fp.close();

    return 0;
}

/*
 * �Լ� �̸� : doTask
 * ��� : ����� �Է¿� ���� �޴� ����
 * ���� ���� : �Է� ���� ��Ʈ�� ����, ��� ���� ��Ʈ�� ����, �����ͺ��̽� ����
 * ��ȯ�� : ����
 */
void doTask(ifstream& in_fp, ofstream& out_fp, DataBase& database) {
    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;

    // Control ��ü �غ�
    SignUp signUp(&database);
    LogIn login(&database);
    LogOut logout(&database);
    RegisterBicycle registerBicycle(&database);
    RentBicycle rentBicycle(&database);
    ViewRentalInfo viewRental(&database);
    Exit exitControl;

    // UI ��ü ��������� ����
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
