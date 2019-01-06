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
	cout<<"introduce£º"<<endl;
	cout<<"name£º"<<name<<endl;
	cout<<"score£º"<<score<<endl;
	cout<<"sex£º"<<sex<<endl;
}
