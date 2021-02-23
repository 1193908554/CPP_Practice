#include<iostream>
#include<vector>
using namespace std;

void printVector(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
//基本使用
void test01()
{
	vector<int> v1;//无参构造

	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}

	//互换前
	cout << "互换前" << endl;
	printVector(v1);

	vector<int> v2;//无参构造

	for (int i = 0; i < 10; i++)
	{
		v2.push_back(10 - i);
	}

	printVector(v2);

	//互换后
	cout << "互换后" << endl;
	v1.swap(v2);

	printVector(v1);
	printVector(v2);

}

//实际用途

void test02()
{
	vector<int>v;
	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);
	}

	cout << "容量：" << v.capacity() << endl;//138255
	cout << "大小：" << v.size() << endl; //100000

	v.resize(3);//重新指定大小
	cout << "容量：" << v.capacity() << endl;//容量并没有变化138255
	cout << "大小：" << v.size() << endl;//100000

	//巧用swap可以收缩内存空间
	vector<int>(v).swap(v);
	//先以v的大小创建一个匿名对象，然后交换    匿名对象在执行完后就回收了
	cout << "容量：" << v.capacity() << endl;//3
	cout << "大小：" << v.size() << endl;//3
}

int main()
{
	test01();
	test02();
	system("pause");

	return 0;
}