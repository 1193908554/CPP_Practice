#include<iostream>
using namespace std;

class Person
{
	int m_A;//非静态成员变量  属于类的对象上

	static int m_B;//静态成员变量   不属于类的对象上

	void func();//非静态成员函数   不属于类的对象上
	
	static void func2();//静态成员函数  不属于类的对象上
};
static int m_B = 1;

void test01()
{
	Person p;
	//空对象占用内存空间：1            
	//为了区分空对象占内存的位置  独一无二的地址
	cout << "size of p = " << sizeof(p) << endl;
}

int main()
{
	test01();

	system("pause");

	return 0;
}