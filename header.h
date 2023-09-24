#pragma once
#include <iostream>
#include <sstream>
using namespace std;

unsigned short ReadPersonAge();
string ReadPersonName();
unsigned short ReadPersonHeight();
void ReadPersonWeight(unsigned short&);
void ReadPersonSalary(double*);
void WritePersonData(const string&, const string&, const string&, const unsigned short*, const double);
void ReadPersonData(string&, unsigned short&, double&);
void ReadPersonData(string&, unsigned short&, unsigned short&, unsigned short&);
void printSurname();
