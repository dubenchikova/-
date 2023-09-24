#include <iostream>
#include <string>
#include <windows.h>
#include "header.h"
using namespace std;

unsigned short height;

void printSurname()
{
	cout << "Выполнила Дубенчикова А.С. БКС2101:" << endl;
}


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");
	string name;
	unsigned short age = 0;
	double salary = 0;
	unsigned short height = 80;
	unsigned short weight;
	cout << "----1----" << endl;
	ReadPersonData(name, age, salary);
	WritePersonData(name, "80", "20000", &age, salary);
	cout << "----2----" << endl;
	ReadPersonData(name, age, weight, height);
	WritePersonData(name, to_string(weight), to_string(height), &age, 1000);
	printSurname();
	return 0;
}