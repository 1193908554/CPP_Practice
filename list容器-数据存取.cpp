#include<iostream>
#include<list>
using namespace std;

void test01()
{
	list<int>L;
	L.push_back(10);
	L.push_back(20);
	L.push_back(30);
	L.push_back(40);

	//L[0];不可以这样访问
	//at方式也不行
	//本质是链表

	cout << "第一个元素:" << L.front() << endl;
	cout << "最后一个元素：" << L.back() << endl;
	
	//迭代器   验证是否支持随机访问
	list<int>::iterator it = L.begin();
	it++;//可以双向
	it--;
	//it = it + 1;//不可以随机访问

}

int main()
{
	test01();
	system("pause");
	return 0;
}