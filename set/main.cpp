#include <iostream>
#include <set>
#include "student.h" 
using namespace std;


typedef bool (*cmp_t)(const Student&stu1,const Student&stu2);
bool Student_Cmp(const Student&stu1,const Student&stu2)
{
	return stu1.getId()<stu2.getId();
}

int main(int argc, char** argv) {
	
	set<Student,cmp_t> stus(Student_Cmp);
	Student stu("Tom",1);
	stus.insert(stu);
	set<Student>::iterator it;
	stus.insert(Student("Mike",2)); 
	for(it = stus.begin();it!=stus.end();++it)
	{
		it->introduce();
	}
	stus.erase(stus.begin());
	set<Student>::iterator ret = stus.find(stu);
	if(ret == stus.end())
	{
		cout <<"no such student"<<endl; 
	}
	else
	{
		ret->introduce();
	}
	
	
	
	return 0; 
}
