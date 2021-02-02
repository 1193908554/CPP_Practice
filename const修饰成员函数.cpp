#include<iostream>
using namespace std;

class Person
{
public:

	//this指针的本质  是指针常量，指针的指向是不可以修改的
	//Person *const this;
	//函数后面加const 相当于上面那句前面加const
	//本来指针指向不可以修改，现在指针指向的值也不能修改
	//const Person *const this;
	void showPerosn() const
	{
		m_A = 100;
		m_B = 100;
		this = NULL;//this指针不可以修改指针的指向的
	}
	void func()
	{
		m_A = 100;
	}

	int m_A;
	mutable int m_B;//特殊变量，即使在常函数也可以修改这个值
	//加mutalbe 
};

void test01()
{
	Person p;
	p.showPerosn();
}

void test02()
{
	const Person p;//在对象前面加const，变为常对象
	p.m_A = 100;
	p.m_B = 100;//特殊变量，在常函数中也可以修改

	//常对象只能调用常函数
	p.showPerosn();
	p.func();//常对象不可以调用普通成员函数，
	//因为普通成员函数可以修改属性
}

int main()
{
	test01();

	system("pause");

	return 0;
}