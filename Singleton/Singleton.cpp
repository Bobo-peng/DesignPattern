#include "stdafx.h"
//#include "Singleton.h" 
#include"HungrySingleton.h"
int main()
{
	CSingleton* sgn1 = CSingleton::Instance();
	CSingleton* sgn2 = CSingleton::Instance();
	return 0;
}