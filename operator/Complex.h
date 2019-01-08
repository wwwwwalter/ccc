class ComplexNumber
{
private:
	int real;
	int image;
public:
	void print()const;
	int getReal()const;
	int getImage()const;
	void uprint()const;
	ComplexNumber(const int& real,const int& image);
	//运算符重载为类成员函数
	ComplexNumber operator-(const ComplexNumber&num2);
	
}; 
