#include<iostream>
#include<string>
using namespace std;

class Person
{
public:
	static void func()//内存中只有一份
	{
		m_A = 100;//静态成员函数可以访问  静态成员变量
		m_B = 100;//静态成员函数 不可以访问   非静态成员变量  
				  //无法区分到底是那个对象的m_B属性
		cout << "static void func 调用" << endl;
	}
	static int m_A;//静态成员变量
	int m_B = 200;

	//静态成员函数也就是有访问权限的
private:
	static void func2()
	{
		cout << "static void func2调用" << endl;
	}
};

int Person::m_A = 0;
void test01()
{
	//通过对象访问
	Person p;
	p.func();
	//通过类名访问
	Person::func();
	Person::func2();//没有访问权限，类外访问不到私有的函数
}


int main()
{
	test01();

	system("pause");

	return 0;
}