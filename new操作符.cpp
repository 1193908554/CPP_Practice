#include<iostream>
using namespace std;
//new的基本语法
int* func()
{
	//在堆区创建整形数据
	int* p = new int(10);
	return p;
}

void test01()
{
	int* p = func();
	cout << *p << endl;
	cout << *p << endl;
	//堆区的数据，由程序员管理开辟，程序员管理释放
	//释放delete
	delete p;
	//cout << *p << endl;//内存被释放，再次访问就是非法
}

//在堆区利用new开辟一个数组
void test02()
{
	//创建是个整型数组，在堆区
	int* arr = new int[10];
	for (int i = 0; i < 10; i++)
	{//赋值
		arr[i] = i + 100;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
	//释放堆区的数组
	//释放数组时，要加[]才可以
	delete[] arr;
}


int main()
{
	test01();

	test02();

	system("pause");

	return 0;
}