#include<iostream>
using namespace std;

//占位参数
//只写数据类型不写形参
//占位参数还可以有默认参数
void func(int a, int = 10)
{
	cout << "this is func" << endl;
}

int main() 
{
	func(10,30);
	return 0;
}