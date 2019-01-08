#include <iostream>
#include "Complex.h"
using namespace std;

//运算符重载为函数
ComplexNumber operator+(const ComplexNumber& num1,const ComplexNumber&num2)
{
	int real = num1.getReal()+num2.getReal();
	int image = num1.getImage()+num2.getImage();
	ComplexNumber num3(real,image);
	return num3;//局部变量只能值传递 
} 


int main(int argc, char** argv) 
{
	ComplexNumber num1(1,1);
	ComplexNumber num2(2,2);
	ComplexNumber num3 = num1+num2;	
	num3.uprint();
	num3 = num1-num2;
	num3.uprint();
	
	return 0;
}
