#pragma once
#include <iostream>
#include <string>

#include "table.h"
using namespace std;






void print_menu() {
	cout << "\t\t--MENU--\n";
	cout << "1. add case in table\n";
	cout << "2. print case in table/table\n";
	cout << "3. find case in table\n";
	cout << "4. delete case in table\n";
	cout << "0. exit\n";
}





void choice1(int choice) 
{
	bool d = true;

	while (d == true) {

		int choice;
		cout << "\nenter your choice: ", cin >> choice;
		switch (choice) {
		case 1:

			printg();
	

			break;
		case 2:
			add(); 
			break;

		case 0:
			cout << "have a good day, bye!";
			break;
			d = false;
		default:
			cout << "uncorrect number, try again: ";
			break;
		}

	}
	
}

