#pragma once
/*********************2.��ඨ�巽��*****************************/
//class Singleton 
//{
//	// ������Ա
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
///*Singleton(const Singleton&);��Singleton & operate = (const Singleton&);
//����������Ҫ������˽�õģ�����ֻ������ʵ�֡������Ӻ����������ķ�ʽ(Singleton s = Singleton::Instance();)��ʹ�õ���ʱ��
//����������Ԫ���л��������ģ����������Ǳ���*/
//	Singleton(const Singleton&);
//	Singleton & operator=(const Singleton&);
//};
/*********************2.��ඨ�巽��*****************************/



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
