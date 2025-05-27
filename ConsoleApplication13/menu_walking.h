#pragma once
#include <iostream>
#include <string>
#include "menu.h"
#include "table.h"
#include <vector>
int GetKeyCode() {
	if (GetAsyncKeyState(VK_UP) & 0x8000) return VK_UP;

	if (GetAsyncKeyState(VK_DOWN) & 0x8000) return VK_DOWN;
	if (GetAsyncKeyState(VK_RETURN) & 0x8000) return VK_RETURN;
	Sleep(100);

}
vector<string> main_menu = { "get all data", "get by id", "exit" };

int print_menu(vector<string> menu, int cursor) {
	return cursor;
}