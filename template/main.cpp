#include <iostream>
#include "compare.h"
using namespace std;

int main(int argc, char** argv) {
	cout <<isequal(1,1)<<endl;
	cout <<isequal(1.1,1.2)<<endl;
	cout <<isequal("hello","world")<<endl;
	cout <<isequal("hello","hello")<<endl;
	return 0;
}
