#include "student.h"
#include <cstring>
#include <iostream>
using namespace std;
void Stu::setName(char *name)
{
	strncpy(this->name,name,20);
}
void Stu::setScore(double score)
{
	this->score = score;
}
void Stu::setSex(char sex)
{
	this->sex = sex;
}
void Stu::introduce(void)
{
	cout<<"introduce��"<<endl;
	cout<<"name��"<<name<<endl;
	cout<<"score��"<<score<<endl;
	cout<<"sex��"<<sex<<endl;
}
