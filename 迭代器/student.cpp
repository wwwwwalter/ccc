#include "student.h"
#include <iostream>
#include <string>
using namespace std;

Student::Student(const string& name,int id)
	:name(name),id(id)
{
}
int Student::getId()const
{
	return id;
}
void Student::introduce()const
{
	cout<<name<<":"<<id<<endl;
}
