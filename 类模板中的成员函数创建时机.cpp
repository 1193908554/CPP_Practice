#include<iostream>
using namespace std;

class Person
{
public:
	void showPerson1()
	{
		cout << "Person1 show" << endl;
	}
};

class Person2
{
public:
	void showPerson2()
	{
		cout << "Person2 show" << endl;
	}
};

template<class T>
class MyClass
{
public:
	T obj;

	//��ģ���еĳ�Ա����  ֻ���ڵ���ʱ�Żᴴ��
	void func1()
	{
		obj.showPerson1();
	}

	void func2()
	{
		obj.showPerson2();
	}
};


void test01()
{
	MyClass<Person>m;
	m.func1();
	m.func2();//����,ֻ���ڵ���ʱ��Żᱨ��

}

int main()
{
	test01();
	system("pause");

	return 0;
}