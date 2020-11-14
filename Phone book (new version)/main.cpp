#include <iostream>
#include <vector>
#include "PersonalData.h"
#include "Menu.h"

void Interface();

using namespace std;

int main() {
	Interface();
	return 0;
}

void Interface() {
	Menu menu;
	menu.ShowMenu();
	int choice;
	do
	{
		do	//проверка корректного выбора
		{
			cout << "Enter you choice (1-6): "; cin >> choice;
			if (choice < 1 || choice > 6)
				cout << "Wrong choice. Try again." << endl;
		} while (choice < 1 || choice > 6);
		switch (choice)
		{
		case 1:
			menu.AddNewSubscriber();
			break;
		case 2:
			menu.DeleteSubscriber();
			break;
		case 3:
			menu.FindSubscriber();
			break;
		case 4:
			menu.ShowPhoneBook();
			break;
		case 5:
			menu.ShowMenu();
			break;
		case 6:
			cout << "You left the program" << endl;
			break;
		}
	} while (choice != 6);
}