#include<iostream>
#include<deque>
#include<algorithm>//标准算法头文件
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
	deque<int>d;//默认构造
	d.push_back(10);
	d.push_back(20);
	d.push_back(30);
	d.push_front(100);
	d.push_front(200);
	d.push_front(300);

	printDeque(d);//300 200 100 10 20 30

	sort(d.begin(), d.end());//默认升序
	//对于支持随机访问的迭代器的容器，都支持sort算法
	cout << "排序后！" << endl;
	printDeque(d);//10 20 30 100 200 300

	
}


int main()
{
	test();
	system("pause");
	return 0;
}