#include <iostream>
#include "singleTon.h"
#include <cstdio>
int main(int argc, char** argv)
{
	SingleTon *instance = SingleTon::getInstance();
	printf("instance:%p\n",instance);
	instance = SingleTon::getInstance();
	printf("instance:%p\n",instance);
	instance = SingleTon::getInstance();
	printf("instance:%p\n",instance);
	instance = SingleTon::getInstance();
	printf("instance:%p\n",instance);
	
	return 0;	
}
//world
