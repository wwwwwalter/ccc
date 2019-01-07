#include <iostream>
using namespace std;
//��ģ������ 
template <typename T>
class MyArray
{
private:
	T data[20];
	int len;
public:
	MyArray();
	T indexof(int index);
	void addValue(T value);
};
//��ģ���ʵ�� 
template <typename T>
MyArray<T>::MyArray()
	:len(0)
{
	
}
template <typename T>
T MyArray<T>::indexof(int index)
{
	return data[index];
}
template <typename T>
void MyArray<T>::addValue(T value)
{
	data[len] = value;
	len++;
}

//��ģ���ػ����� 
template<>
class MyArray<double>
{
public:
	MyArray();
};
//��ģ���ػ���ʵ��
//template<> //��ʡ�� 
MyArray<double>::MyArray()
{
	cout <<"MyArray<double>::MyArray()"<<endl;
}

