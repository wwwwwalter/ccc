#include<string>
#include <iostream>
using namespace std;
class Student
{
private:
	int id;
	string name;
public:
	Student(const string &name,int id);
	int getId()const;
	void introduce()const;			
};
