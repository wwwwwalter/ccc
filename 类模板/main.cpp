#include <iostream>
#include "myArray.h"
#include "pair.h"
using namespace std;
int main(int argc, char** argv) {
	MyArray<string>arr;
	int i = 0;
	for(i = 0;i<10;++i)
	{
		arr.addValue("hello");
	}
	for(i = 0;i<10;++i)
	{
		cout << arr.indexof(i)<<endl;
	}
	
	MyArray<double>*double_arr = new MyArray<double>[10];
	
	Pair<char,int> pair;
	Pair<int,char> pair2;
	
		
	return 0; 
}
