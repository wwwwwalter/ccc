#include <iostream>
using namespace std;
//类模板声明 
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
//类模板的实现 
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

//类模板特化声明 
template<>
class MyArray<double>
{
public:
	MyArray();
};
//类模板特化的实现
//template<> //可省略 
MyArray<double>::MyArray()
{
	cout <<"MyArray<double>::MyArray()"<<endl;
}

