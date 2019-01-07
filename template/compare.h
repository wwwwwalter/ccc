#include <cstring>
template <typename T>
bool isequal(T i,T j);


template <typename T>
bool isequal(T i,T j)
{
	return i==j;
}

template<>
bool isequal<char*>(char *s1,char *s2)
{
	return strcmp(s1,s2);
}
