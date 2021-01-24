#include<iostream>
using namespace std;

//函数默认参数
//如果我们自己传入数，就用我们自己的数据。否则就用默认值
int func(int a, int b = 20, int c = 30)
{
	return a + b + c;
}

//注意事项
//1.如果某个位置已经有了默认参数，那么从这个位置往后，从左往右都必须有默认值
//如:func(int a, int b = 20, int c)错误
//2.声明和实现只能有一个默认参数（二选一，否则会报错）
int func2(int a = 10, int b = 20);
int func2(int a, int b)
{
	return a + b;
}
int main()
{
	cout << func(10, 20, 30) << endl;//60
	cout << func(20) << endl;//70
	cout << func(10, 30) << endl;//70

	cout << func2() << endl;//30
	cout << func2(30) << endl;//50
	
	system("pause");

	return 0;
}

