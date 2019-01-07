extern int count;
class Student
{
public:
	char name[20];	
	int score;	
	int age;
	
	Student();
	explicit Student(int age);
	Student(const char *name,const int score,const int age);
	
	~Student(void); 
};

