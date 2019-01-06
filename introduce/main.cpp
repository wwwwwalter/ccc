#include <iostream>
#include "student.h"
using namespace std;

int main(int argc, char** argv)
{
	char name[20] = "";
	double score = 0.00;
	char sex = 0;
	while(1) {
		Stu stu = Stu();
		cout<<"input name:";
		cin>>name;
		cout<<"input score:";
		cin>>score;
		cout<<"input sex:";
		cin>>sex;

		stu.setName(name);
		stu.setScore(score);
		stu.setSex(sex);
		cout<<"============="<<endl;
		stu.introduce();
		cout <<"=============="<<endl;
	}

	return 0;
}
