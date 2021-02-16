#include<iostream>
using namespace std;

class Base
{
public:

	//!? 只要有一个纯虚函数，这个类就称为抽象类
	virtual void func() = 0;//! 纯虚函数
};

class Son :public Base
{
public:
	virtual void func() 
	{
		cout << "func函数调用" << endl;
	};
};

void test01()
{
	//Base b;// 不允许
	Son s;// 子类必须重写父类的纯需函数，否则无法实例化对象
	s.func();

	Base* base = new Son;
	base->func();
}

int main()
{
	test01();

	system("pause");

	return 0;
}