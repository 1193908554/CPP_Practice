#include<iostream>
#include<deque>
using namespace std;

void printDeque(const deque<int>& q)
{
	for (deque<int>::const_iterator it = q.begin(); it != q.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test()
{
	deque<int>d1;//默认构造
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printDeque(d1);

	if (d1.empty())//判断是否为空    空-真
	{
		cout << "为空！" << endl;
	}
	else
	{
		cout << "不为空！" << endl;
		cout << "大小:" << d1.size() << endl;
		//deque没有容量概念
	}

	d1.resize(15);
	printDeque(d1);

	d1.resize(20, 1);
	printDeque(d1);

	d1.resize(11);
	printDeque(d1);

}


int main()
{
	test();
	system("pause");
	return 0;
}