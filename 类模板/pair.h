#include <iostream>
using namespace std;
//类模板声明 
template <typename T1,typename T2>
class Pair
{
private:
	T1 first;
	T2 second;
public:
	Pair();
};
//类模板实现
template <typename T1,typename T2>
Pair<T1,T2>::Pair()
{
	cout << "Pair<T1,T2>::Pair()"<<endl;
}

//类模板偏特化声明 
template <typename T2>
class Pair<char,T2>
{
public:
	Pair();  
};
//类模板偏特化实现
template<typename T2>
Pair<char,T2>::Pair()
{
	cout<<"Pair<char,T2>::Pair()"<<endl;
} 

 
