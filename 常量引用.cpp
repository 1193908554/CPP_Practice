#include<iostream>

using namespace std;

//打印数据（使用const防止修改实参）
void showValue(const int& val)
{
	cout << "val == " << val << endl;
}

int main()
{
	//常量引用
	//使用场景:修饰形参，防止误操作
	int a = 10;
	int& ref = a;
	int& ref2 = 10;//错，引用必须引一块合法的内存空间

	const int& ref3 = 10;
	//加上const编译器将代码修改为int temp = 10;int& ref3 = temp;

	ref3 = 100;//加入const之后变成了了只读，不可以修改

	int a = 100;
	showValue(a);

	system("pause");
	return 0;
}