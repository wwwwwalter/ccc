#include <string>
using namespace std;

class Student
{
private:
	int id;
	string name;
public:
	Student(const string& name,int id);
	int getId()const;
	void introduce()const;
};
