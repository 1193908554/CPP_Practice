#include<iostream>
using namespace std;

class Base
{
public:
	Base()
	{
		m_A = 100;
	}
	int m_A;
	void func()
	{
		cout << "Base-func()调用" << endl;
	}
	void func(int a)
	{
		cout << "Base-func(int a)调用" << endl;
	}
};

class Son :public Base
{
public:
	Son()
	{
		m_A = 200;
	}
	int m_A;
	void func()
	{
		cout << "Son-func()调用" << endl;
	}
};

void test01()
{
	Son s;
	cout << "m_A = " << s.m_A << endl;

	//如果通过子类对象  访问到父类中同名成员  需要加一个作用域
	cout << "父类m_A = " << s.Base::m_A << endl;

	s.func();
	s.Base::func();//加作用域  调用父类的
	
	//如果子类中出现和父类同名的成员函数，
	//子类的同名函数会隐藏掉父类中所有的同名成员函数   必须加作用域
	s.Base::func(5);
}

int main()
{
	test01();
	system("pause");
	return 0;
}