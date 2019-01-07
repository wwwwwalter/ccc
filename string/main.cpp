#include <iostream>
#include <string>

using namespace std;
int main(int argc, char** argv) {
	string str1;
	string str2;
	cout<<"input:"<<endl;
	cin >> str2>>str1;
	cout <<str1<<str2<<endl;
	cout << str1.size()<<endl;
	cout << (str1==str2)<<endl;
	cout <<str1.data()<<endl; 
	printf("%p\n",str1);
	printf("%p\n",str1.data());

	
	return 0;
}
