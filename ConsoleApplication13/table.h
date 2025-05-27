#pragma once
#include <iostream>
#include <windows.h>
#include <string>
#include "menu.h"



using namespace std;
struct BIO {
	string name;
	string last_name;

}; 

struct data1 {
	string login;
	string password;

};

struct students {
	BIO bio;
	data1 id;

};

struct list {
	students data;
	list* next;
};

list* head = nullptr;

void printg() {  
	list* new_list = new list;
	cout << "enter a new student: \n name: ";
	cin >> new_list->data.bio.name;
	cout << "laste name: ";
	cin >> new_list->data.bio.last_name;
	
	new_list = nullptr;


	
	if (head == nullptr) {
		head = new_list;
	}
	else {
		list* temp = head;
		while (temp->next != nullptr) {
			temp = temp->next;
		}
		temp->next = new_list;
	}
}


void add() {

	list* temp = new list;

	while (temp->next != nullptr) {
		
		cout << "enter a new student: \n name: ";
		cin >> temp->data.bio.name;
		cout << "laste name: ";
		cin >> temp->data.bio.last_name;
		temp = temp->next; 
	
	}
	

	
}

void find() {

}
void delete_table() {

}