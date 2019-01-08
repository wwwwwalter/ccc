#include <iostream>
#include "student.h"
#include <map>
using namespace std;

typedef bool(*cmp_t)(const Student&stu1,const Student&stu2);
bool stuCmp(const Student&stu1,const Student&stu2)
{
	return stu1.getId()<stu2.getId();
}


int main(int argc, char** argv) {
	
	map<Student,double,cmp_t>stus(stuCmp);
	Student stu("tom",1);
	pair<Student,double>p(stu,80); 
	stus.insert(p);
	map<Student,double>::iterator it;
	for(it = stus.begin();it!=stus.end();++it)
	{
		const Student &stu = it->first;
		double score = it->second;
		stu.introduce();
		cout << score<<endl;
	}
	Student stu1("walter",2);
	cout <<stus[stu]<<endl;
	stus[stu1] = stus[stu];
	cout << stus[stu1]<<endl;
	cout << stus.size();
	
	return 0; 
}
