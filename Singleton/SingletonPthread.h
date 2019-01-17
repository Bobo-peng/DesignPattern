#pragma once
/*********************2.简洁定义方法*****************************/
//class Singleton 
//{
//	// 其它成员
//public:
//	int singleton;
//public:
//	static Singleton &Instance() {
//		static Singleton instance;
//		return instance;
//	}
//
//private:
//	Singleton() {
//		cout << "Singleton" << endl;
//	}
///*Singleton(const Singleton&);和Singleton & operate = (const Singleton&);
//函数，我们要声明成私用的，并且只声明不实现。这样子后如果用上面的方式(Singleton s = Singleton::Instance();)来使用单例时，
//不管是在友元类中还是其它的，编译器都是报错。*/
//	Singleton(const Singleton&);
//	Singleton & operator=(const Singleton&);
//};
/*********************2.简洁定义方法*****************************/



//class CSingleton
//{
//private:
//	CSingleton()
//	{
//		pthread_mutex_init(&mtx, 0);
//		//cout << "Singleton...." << endl;
//	}
//	static CSingleton *p;
//public:
//	int sm;
//	static pthread_mutex_t mtx;
//	static CSingleton* Instance()
//	{
//		if (p == NULL)
//		{
//			pthread_mutex_lock(&mtx);
//			p = new CSingleton();
//			cout << " new p:" << p << endl;
//			pthread_mutex_unlock(&mtx);
//		}
//		return p;
//	}
//};
//pthread_mutex_t CSingleton::mtx;
//CSingleton* CSingleton::p = NULL;
