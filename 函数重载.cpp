#include<iostream>
using namespace std;

//函数重载
//函数满足条件：
//同一个作用域
//函数名称相同
//函数参数不同或者类型不同或者顺序不同
void func()
{
	cout << "func的调用1" << endl;
}
void func(int a)
{
	cout << "func(int a)的调用" << endl;
}
void func(double a)
{
	cout << "func(double a)的调用3" << endl;
}
void func(int a, double b)
{
	cout << "func(int a, double b)的调用4" << endl;
}
void func(double a, int b)
{
	cout << "func(double a, int b)的调用4" << endl;
}

int main()
{
	func();
	func(10);
	func(10.5);
	func(10, 10.5);
	func(10.5, 5);
	return 0;
}