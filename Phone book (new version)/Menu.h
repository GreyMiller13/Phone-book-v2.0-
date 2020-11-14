#pragma once
#include <iostream>
#include "PersonalData.h"

using namespace std;

class Menu {
private:
	bool setSize = true;
	int countSubscribers = 0;
	vector <PersonalData> vec;
public:
	void ShowMenu() {
		cout << "===========================" << endl
			 << "= 1. Add new subscriber   =" << endl
			 << "= 2. Delete subscriber    =" << endl
			 << "= 3. Search subscriber    =" << endl
			 << "= 4. Show all subscribers =" << endl
			 << "= 5. Show menu            =" << endl
			 << "= 6. Exit                 =" << endl
			 << "===========================" << endl;
	}

	void CreateVectorPersonalData() {
		if (setSize) {
			cout << "Enter size phone book:";
			int size;	cin >> size;
			if (size <= 0) {
				cout << "The size of the phone book is incorrect. The default will be set to 10.";
				size = 10;
			}
			vec.resize(size);
			setSize = false;
		}
		else {
			cout << "The phone book size has already been set" << endl
				<< "No editing possible" << endl;
		}
	}

	void AddNewSubscriber() {
		if (setSize) {
			CreateVectorPersonalData();
		}
			cout << "Firstname:\t";		cin >> vec[countSubscribers].firstname;
			cout << "Secondname:\t";	cin >> vec[countSubscribers].secondname;
			cout << "Patronymic:\t";	cin >> vec[countSubscribers].patronymic;
			cout << "Other info:\t";	cin >> vec[countSubscribers].otherInfo;
			cout << "Mobile number:\t";	cin >> vec[countSubscribers].mobileNumber;
			cout << "Work number:\t";	cin >> vec[countSubscribers].homeNumber;
			cout << "Work number:\t";	cin >> vec[countSubscribers].workNumber;
			cout << "Other number:\t";	cin >> vec[countSubscribers].otherNumber;
			countSubscribers++;
	}

	void ShowPhoneBook() {
		for (int i = 0; i < countSubscribers; i++)
		{
			cout << "Information about " << i + 1 << " subscriber:" << endl
				<< "Firstname:\t" << vec[i].firstname << endl
				<< "Secondname:\t" << vec[i].secondname << endl
				<< "Patronymic:\t" << vec[i].patronymic << endl
				<< "Other info:\t" << vec[i].otherInfo << endl << endl
				<< "Mobile number:\t" << vec[i].mobileNumber << endl
				<< "Home number:\t" << vec[i].homeNumber << endl
				<< "Work number:\t" << vec[i].workNumber << endl
				<< "Other number:\t" << vec[i].otherNumber << endl << endl;
		}
	}

	void DeleteSubscriber() {
		int choice;
		do
		{
			cout << "Enter number subscriber to delete: ";	cin >> choice;
			if (choice <= 0 || choice > vec.size())
				cout << "This subscriber was not found. Try again." << endl;
		} while (choice <= 0 || choice > vec.size());
		vec.erase(vec.begin() + (choice - 1));
		countSubscribers--;
	}

	void FindSubscriber() {
		string search;	cin >> search;
		bool find = true;
		for (int i = 0; i < vec.size(); i++) {
			if (vec[i].firstname == search) {
				cout << "Find " << i+1 << "subscriber" << endl;
				break;
			}
			else if (vec[i].secondname == search) {
				cout << "Find " << i + 1 << "subscriber" << endl;
				break;
			}
			else if (vec[i].patronymic == search) {
				cout << "Find " << i + 1 << "subscriber" << endl;
				break;
			}
			else if (vec[i].otherInfo == search) {
				cout << "Find " << i + 1 << "subscriber" << endl;
				break;
			}
			else if (vec[i].mobileNumber == search) {
				cout << "Find " << i + 1 << "subscriber" << endl;
				break;
			}
			else if (vec[i].homeNumber == search) {
				cout << "Find " << i + 1 << "subscriber" << endl;
				break;
			}
			else if (vec[i].workNumber == search) {
				cout << "Find " << i + 1 << "subscriber" << endl;
				break;
			}
			else if (vec[i].otherNumber == search) {
				cout << "Find " << i + 1 << "subscriber" << endl;
				break;
			}
			else {
				find = false;
			}
		}
		if (!find)
			cout << "Not find" << endl;
	}
};
