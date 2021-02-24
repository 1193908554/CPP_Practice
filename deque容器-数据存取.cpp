#include<iostream>
#include<deque>
using namespace std;

void test()
{
	deque<int>d1;//默认构造
	d1.push_back(10);
	d1.push_back(20);
	d1.push_back(30);
	d1.push_front(100);
	d1.push_front(200);
	d1.push_front(300);


	//通过【】来访问
	for (int i = 0; i < d1.size(); i++)//300 200 100 10 20 30
	{
		cout << d1[i] << " ";
	}
	cout << endl;

	//通过at方法来访问
	for (int i = 0; i < d1.size(); i++)//300 200 100 10 20 30
	{
		cout << d1.at(i) << " ";
	}
	cout << endl;

	cout << "第一个元素：" << d1.front() << endl;//300
	cout << "最后一个元素:" << d1.back() << endl;//30
}


int main()
{
	test();
	system("pause");
	return 0;
}