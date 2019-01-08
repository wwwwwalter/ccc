#include <iostream>
#include "student.h"
#include <vector>
using namespace std;

void test1()
{
	vector<int>arr;
	vector<int>::iterator it;
	int i = 0;
	for(i = 0;i<10;++i)
	{
		arr.push_back(i);
	}
	for(it = arr.begin();it!=arr.end();++it)
	{
		cout << *it <<endl;
	}
}

void test2()
{
	vector<Student>arr;
	vector<Student>::iterator it;
	int i = 0;
	for(i = 0;i<10;++i)
	{
		Student stu("tom",i);
		arr.push_back(stu);
	}
	for(it = arr.begin();it!=arr.end();++it)
	{
		it->introduce();
	}
} 

//µü´úÆ÷Ê§Ð§
//ºÜÎ£ÏÕ 
void test3()
{
	vector<int>arr;
	vector<int>::iterator it;
	int i = 0;
	for(i = 0;i<10;++i)
	{
		arr.push_back(i);
	}
	it = arr.end()-1;
	cout << "it:"<<*it<<endl;
	arr.pop_back();
	cout << "it:"<<*it<<endl;	
} 

int main(int argc, char** argv) {
	
	test1();
	cout << "===="<<endl;
	test2();
	cout << "===="<<endl;
	test3();
	return 0; 
}
