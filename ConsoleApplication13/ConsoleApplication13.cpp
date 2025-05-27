#include <iostream>
#include <string>
#include "menu.h"
#include "table.h"
#include "menu_walking.h"
using namespace std;



int function(vector <string>, int cursor) {
	

}




int main() {

	int selected_item = 0;
	while (true) {
        system("cls");
		print_menu(main_menu);
		char key = getch();
        switch (key) {
        case 72: // Клавиша вверх (обычно код 72, можно проверять на разных платформах)
            if (selected_item > 0) {
                selected_item--;
            }
            break;
        case 80: // Клавиша вниз (обычно код 80)
            if (selected_item < main_menu.size() - 1) {
                selected_item++;
            }
            break;
        case 27: // Клавиша Esc (для выхода из меню, необязательно)
            return 0;
            // Добавьте обработку других клавиш, если необходимо
        default:
            break;
		

	}

	}

}

 


