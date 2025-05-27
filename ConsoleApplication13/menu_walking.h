#pragma once
#include <iostream>
#include <string>
#include "menu.h"
#include "table.h"
#include <vector>
#include <conio.h>

int GetKeyCode() {
	if (GetAsyncKeyState(VK_UP) & 0x8000) return VK_UP;

	if (GetAsyncKeyState(VK_DOWN) & 0x8000) return VK_DOWN;
	if (GetAsyncKeyState(VK_RETURN) & 0x8000) return VK_RETURN;
	Sleep(100);

}
vector<string> main_menu = { " add case in table\n", " print case in table/table\n", " find case in table\n"," delete case in table\n", " exit\n"};

void print_menu(vector<string> menu) {

	cout << main_menu[0] << endl;
	cout << main_menu[1] << endl;
	cout << main_menu[2] << endl;
	cout << main_menu[3] << endl;
	cout << main_menu[4] << endl;


}
