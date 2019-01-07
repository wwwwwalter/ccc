#include <iostream>
#include "student.h"
#include <vector>
#include <algorithm>

bool stuCmp(const  Student&stu1,const  Student&stu2)
{
	return !(stu1.getId()<stu2.getId()); 
}

void test()
{
	vector<Student> stus;
	int i = 0;
	for(i = 0;i<10;i++)
	{
		Student stu("Tom",i);
		stus.push_back(stu);
	}
	sort(stus.begin(),stus.end(),stuCmp);
	for(i = 0;i<stus.size();++i)
	{
		stus[i].introduce();
	}	
	
}

int main(int argc, char** argv) {
	vector<int>arr;
//	arr.push_back(5);
//	arr.push_back(4);
//	arr.push_back(6);
//	arr.push_back(7);
//	
//	sort(arr.begin(),arr.end());
//	for(int i = 0;i<4;++i)
//	{
//		cout << arr[i]<<endl;
//	}
	
	test();
		
	return 0;
}
