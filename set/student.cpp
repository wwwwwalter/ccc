#include "student.h"
#include <iostream>
using namespace std;
Student::Student(const string&name,int id)
{
	this->name = name;
	this->id = id;
}
int Student::getId()const 
{
	return id;
}
void Student::introduce()const
{
	cout << name<<":"<<id<<endl;
}
