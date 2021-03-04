#include<iostream>
#include<list>
using namespace std;

void printList(const list<int>& L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	list<int>L;

	//尾插
	L.push_back(10);
	L.push_back(20);
	L.push_back(30);

	//头插
	L.push_front(100);
	L.push_front(200);
	L.push_front(300);

	printList(L);//300 200 100 10 20 30

	//尾删
	L.pop_back();
	printList(L);//300 200 100 10 20

	//头删
	L.pop_front();
	printList(L);//200 100 10 20

	//插入
	L.insert(L.begin(), 1000);//头插
	printList(L);//1000 200 100 10 20

	list<int>::iterator it = L.begin();//创建一个迭代器
	it++;//迭代器偏移

	L.insert(it, 2000);//迭代器插入
	printList(L);//1000 2000 200 100 10 20

	//删除
	it = L.begin();
	it++;
	L.erase(it);//删除当前迭代器所指位置
	printList(L); //1000 200 100 10 20
	
	//按照值移除
	L.push_back(10000);
	L.push_back(10000);
	L.push_back(10000);
	L.push_back(10000);
	L.push_back(10000);

	L.remove(10000);//删除所有的10000
	printList(L);//200 100 10 20

	//清空
	L.clear();
	printList(L);//空了

}

int main()
{
	test01();
	system("pause");
	return 0;
}