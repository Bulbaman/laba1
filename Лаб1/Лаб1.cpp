// ���1.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

class Bulba
{
private:
	int ploshad;
	int sobrano;
	int srednee;

public:
	Bulba()
	{
		ploshad = 250;
		sobrano = 9500;
		srednee = 380;
	}

	void message()
	{
		cout << "������ ���������: " << endl;
		cout << "\t�������(��): " << ploshad;
		cout << "\n\t�������(����): " << sobrano;
		cout << "\n\t������� �����������(�/��): " << srednee;
		cout << "\n\t�����: �������� ���������� ��������." << endl;
	}
	};

int main()
{
	setlocale(LC_ALL, "Rus");
	Bulba objMessage;
	objMessage.message();
    return 0;
}