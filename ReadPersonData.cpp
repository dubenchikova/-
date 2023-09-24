#include "header.h"
//Вариант 1
void ReadPersonData(string& name, unsigned short& age, double& salary)
{
	name = ReadPersonName();
	age = ReadPersonAge();
	ReadPersonSalary(&salary);
}

//Вариант 2
void ReadPersonData(string& name, unsigned short& age, unsigned short& height, unsigned short& weight)
{
	name = ReadPersonName();
	age = ReadPersonAge();
	height = ReadPersonHeight();
	ReadPersonWeight(weight);
}
