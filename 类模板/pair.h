#include <iostream>
using namespace std;
//��ģ������ 
template <typename T1,typename T2>
class Pair
{
private:
	T1 first;
	T2 second;
public:
	Pair();
};
//��ģ��ʵ��
template <typename T1,typename T2>
Pair<T1,T2>::Pair()
{
	cout << "Pair<T1,T2>::Pair()"<<endl;
}

//��ģ��ƫ�ػ����� 
template <typename T2>
class Pair<char,T2>
{
public:
	Pair();  
};
//��ģ��ƫ�ػ�ʵ��
template<typename T2>
Pair<char,T2>::Pair()
{
	cout<<"Pair<char,T2>::Pair()"<<endl;
} 

 
