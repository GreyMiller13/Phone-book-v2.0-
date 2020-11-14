#pragma once
#include <string>

using namespace std;

class PersonalData
{
public:
	string firstname;		//имя
	string secondname;		//фамилия
	string patronymic;		//отчество
	string otherInfo;		//другая информация
	string mobileNumber;	//мобильный номер
	string homeNumber;		//домашний номер
	string workNumber;		//рабочий номер
	string otherNumber;		//другой номер

	//конструктор по умолчанию
	PersonalData() {}

	//инициализатор (по условию задачи) / нигде не используется
	PersonalData(string firstname, string secondname, string patronymic, string otherInfo, string mobileNumber, string homeNumber, string workNumber, string otherNumber) :
	firstname(firstname), secondname(secondname), patronymic(patronymic), otherInfo(otherInfo),
	mobileNumber(mobileNumber), homeNumber(homeNumber), workNumber(workNumber), otherNumber(otherNumber) {}
	
	//деструктор класса (по условию задачи) / нигде не используется
	~PersonalData()	{}

	//встраиваемая функция (по условию задачи) / нигде не используется
	inline void ShowFieldInfo() {
		cout << "Firstname:\t" << firstname << endl
			 << "Secondname:\t" << secondname << endl
			 << "Patronymic:\t" << patronymic << endl
			 << "Other info:\t" << otherInfo << endl << endl
			 << "Mobile number:\t" << mobileNumber << endl
			 << "Home number:\t" << homeNumber << endl
			 << "Work number:\t" << workNumber << endl
			 << "Other number:\t" << otherNumber << endl;
	}
};

