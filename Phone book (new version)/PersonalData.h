#pragma once
#include <string>

using namespace std;

class PersonalData
{
public:
	string firstname;		//���
	string secondname;		//�������
	string patronymic;		//��������
	string otherInfo;		//������ ����������
	string mobileNumber;	//��������� �����
	string homeNumber;		//�������� �����
	string workNumber;		//������� �����
	string otherNumber;		//������ �����

	//����������� �� ���������
	PersonalData() {}

	//������������� (�� ������� ������) / ����� �� ������������
	PersonalData(string firstname, string secondname, string patronymic, string otherInfo, string mobileNumber, string homeNumber, string workNumber, string otherNumber) :
	firstname(firstname), secondname(secondname), patronymic(patronymic), otherInfo(otherInfo),
	mobileNumber(mobileNumber), homeNumber(homeNumber), workNumber(workNumber), otherNumber(otherNumber) {}
	
	//���������� ������ (�� ������� ������) / ����� �� ������������
	~PersonalData()	{}

	//������������ ������� (�� ������� ������) / ����� �� ������������
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

