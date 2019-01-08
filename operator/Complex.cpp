#include"Complex.h"
#include <iostream>
using namespace std;

int ComplexNumber::getReal(void)const
{
	return real;
}
int ComplexNumber::getImage(void)const
{
	return image;
}
void ComplexNumber::uprint(void)const
{
	cout << real <<"+"<<image<<"i"<<endl;
}
ComplexNumber::ComplexNumber(void)
{
    cout << "ComplexNumber::ComplexNumber()"<<endl;
}
ComplexNumber::ComplexNumber(const int &real,const int &image)
	:real(real),image(image)
{
}

ComplexNumber ComplexNumber::operator-(const ComplexNumber& num2)
{
	int real = this->real-num2.real;
	int image = this->image-num2.image;
	ComplexNumber num3(real,image);
	return num3;
}

