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
	//���������Ϊ���Ա����
	ComplexNumber operator-(const ComplexNumber&num2);
	
}; 
