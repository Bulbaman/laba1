// Лаб1.cpp: определяет точку входа для консольного приложения.
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
		cout << "Урожай картофеля: " << endl;
		cout << "\tЗасеяно(га): " << ploshad;
		cout << "\n\tСобрано(тонн): " << sobrano;
		cout << "\n\tСредняя урожайность(ц/га): " << srednee;
		cout << "\n\tИтого: Беларусь обеспечена картохой." << endl;
	}
	};

int main()
{
	setlocale(LC_ALL, "Rus");
	Bulba objMessage;
	objMessage.message();
    return 0;
}