#include<iostream>
#include<list>
#include<algorithm>
using namespace std;

void printList(const list<int>& L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

bool myCompare(int v1, int v2)//设置降序
{
	//降序   就让第一个数大于第二个数
	return v1 > v2;
}

void test01()
{
	list<int>L;

	L.push_back(10);
	L.push_back(20);
	L.push_back(40);
	L.push_back(5);

	printList(L);//10 20 40 5

	//反转后
	L.reverse();
	printList(L);//5 40 20 10

	//排序  
	//所有不支持随机访问迭代器的容器，不可以用标准算法
	//然后内部会提供一些算法

	L.sort();//默认升序
 	//sort(L.begin(), L.end());//    不可以用
	printList(L);//5 10 20 40

	L.sort(myCompare);//降序
	printList(L);//40 20 10 5
}

int main()
{
	test01();
	system("pause");
	return 0;
}