#include "student.h"
#include <iostream>
#include <cstring>
using namespace std;

Student::Student()
{
	cout << "Student::Student()"<<endl;
}
Student::Student(int age)
{
	this->age = age;
	cout << "Student::Student(int age)"<<endl;
}
Student::Student(const char* name,const int score,const int age)
	:score(score),age(age)
{
	strncpy(this->name,name,20);
	cout << "Student::Student(void)"<<endl;
}

Student::~Student(void)
{	
	cout << "Student::~Student(void)"<<endl;
}
