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
	deque<int>d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printDeque(d1);

	//等号赋值
	deque<int>d2;
	d2 = d1;
	printDeque(d2);

	//assign
	deque<int>d3;
	d3.assign(d2.begin(), d2.end());
	printDeque(d3);

	deque<int>d4;
	d4.assign(10, 100);
	printDeque(d4);
}

int main()
{
	test();
	system("pause");
	return 0;
}