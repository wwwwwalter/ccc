#include <iostream>
#include "student.h"
using namespace std;
int main(int argc, char** argv) {
	Student stu("walter",25,120);
	cout <<stu.name<<endl;
	cout <<stu.age<<endl;
	cout <<stu.score<<endl;
	

	Student *stus = new Student[5];
	for(int i = 0;i<5;++i)
	{
		cout <<stus[i].age<<endl;
	}
	delete[]stus;

	return 0;	
}
