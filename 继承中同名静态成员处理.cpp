#include<iostream>
using namespace std;

class Base
{
public:

	static int m_A;
	static void func()
	{
		cout << "Base-func()调用" << endl;
	}
	static void func(int a)
	{
		cout << "Base-func(int a)调用" << endl;
	}
};
int Base::m_A = 100;
class Son :public Base
{
public:

	static int m_A;
	static void func()
	{
		cout << "Son-func()调用" << endl;
	}
};
int Son::m_A = 200;
void test01()
{
	//通过对象访问
	Son s;
	cout << "Son 下的m_A = " << s.m_A << endl;
	cout << "Base 下的m_A = " << s.Base::m_A << endl;

	//通过类名来访问
	cout << "Son 下的m_A = " << Son::m_A << endl;
	//第一个冒号代表通过类名的方式访问  第二个冒号表示访问父类的作用域下
	cout << "Base 下的m_A = " << Son::Base::m_A << endl;

	//通过对象访问
	s.func();//直接调用 ，就是自己
	s.Base::func();//调用父类的，加作用域

	//通过类名来访问
	Son::func();
	Son::Base::func();
	Son::Base::func(10);
}

int main()
{ 
	test01();
	system("pause");
	return 0;
}