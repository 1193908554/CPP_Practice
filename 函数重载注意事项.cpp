#include<iostream>
using namespace std;

//引用作为重载条件

void func(int &a)//int &a = 10;语法不通过
{
	cout << "func(int &a)调用" << endl;
}
void func(const int& a)//int e = 10;const int &a = e;
{
	cout << "func(const int &a)调用" << endl;
}

//函数重载碰到函数默认参数
void func2(int a, int b = 10)
{
	cout << "func2(int &a)调用" << endl;
}
void func2(int a = 10)
{
	cout << "func2(int &a)调用" << endl;
}
int main()
{
	int a = 10;
	func(a);//a是变量 会走不加const的

	func(10);//10是常量，就走const的

	func2(10);//当函数重载碰到默认参数，出现二义性。尽量避免这种情况
	system("pause");
	return 0;
}