#include<iostream>
#include<string>
using namespace std;

//打印输出类
class MyPrint
{
public:

	//重载函数调用运算符
	void operator()(string test)
	{
		cout << test << endl;
	}
};

void MyPrint2(string test)
{
	cout << test << endl;
}

void test01()
{
	MyPrint myprint;

	myprint("Hello world!");//仿函数调用

	MyPrint2("Hello world!");//函数调用
}

//仿函数非常灵活，没有固定写法
//加法类

class Myadd
{
public:
	int operator()(int num1, int num2)//仿函数
	{
		return num1 + num2;
	}
};

void test02()
{
	Myadd myadd;
	int num = myadd(10, 20);//仿函数调用
	cout <<"num = " << num << endl;

	//匿名函数对象
	cout << Myadd()(100, 110) << endl;
}

int main()
{
	test01();
	test02();

	system("pause");

	return 0;
}