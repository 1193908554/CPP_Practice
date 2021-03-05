#include<iostream>
#include<functional>//内建函数对象头文件
using namespace std;

void test01()
{
	negate<int>n;//取反
	cout << n(50) << endl;//-50

	plus<int>n2;//加法   只能同类型操作
	cout << n2(10, 20) << endl;//30

	minus<int>n3;//减法
	cout << n3(30, 20) << endl;//10

	multiplies<int>n4;//乘法
	cout << n4(10, 10) << endl;//100

	divides<int>n5;//除法
	cout << n5(10, 10) << endl;;//1

	modulus<int>n6;//取模
	cout << n6(10, 6) << endl;//10%6 = 4

}

int main()
{
	test01();
	system("pause");
	return 0;
}