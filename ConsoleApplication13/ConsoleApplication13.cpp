#include <iostream>
#include <string>
#include "menu.h"
#include "table.h"
#include "menu_walking.h"
using namespace std;




int main() {
	while (1) {
		int i = GetKeyCode();
		if (i == VK_RETURN) return 0;
	}
	while (true) {
		print_menu();
		int choice;
		cout << "\nenter your choice: ", cin >> choice;
	
		choice1(choice);
	}
	
	return 0
}  


