#pragma once
#include<iostream>

class CSingleton
{
public:
	static CSingleton* Instance()
	{
		return _instance;
	}
private:
	CSingleton() {}
	static CSingleton* _instance;
};
CSingleton* CSingleton::_instance = new CSingleton();

