#include "singleTon.h"
SingleTon *SingleTon::instance = 0;
//int Stu::age = 20;

SingleTon::SingleTon()
{
	
}

SingleTon *SingleTon::getInstance()
{
	if(instance == 0)
	{
		instance = new SingleTon();
	}
	return instance;
}
