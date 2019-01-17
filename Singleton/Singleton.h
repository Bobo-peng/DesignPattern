#pragma once
#ifndef _SINGLETON_H_ 
#define _SINGLETON_H_ 
#include <iostream> 
using namespace std;
/*********************1.经典定义方法*****************************/

class CSingleton
{
public:
	static CSingleton* Instance()
	{
		if (_instance == NULL)
		{
			_instance = new CSingleton();
		}
		return _instance;
	}
private:
	CSingleton(){}
	static CSingleton* _instance;
};
CSingleton* CSingleton::_instance = NULL;

/*********************1.经典定义方法*****************************/
#endif //~_SINGLETON_H_