#include <cstring>
//函数模板的声明
template <typename T>
bool isequal(T i,T j);

//函数模板的实现
template <typename T>
bool isequal(T i,T j)
{
	return i==j;
}
//函数模板的特化实现
template<>
bool isequal<char*>(char *s1,char *s2)
{
	return strcmp(s1,s2);
}
