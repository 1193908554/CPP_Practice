#include<iostream>
#include<set>
using namespace std;

void printSet(const set<int>s)
{
	for (set<int>::const_iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	set<int>s1;

	//插入数据只有这一种
	s1.insert(30);
	s1.insert(40);
	s1.insert(10);
	s1.insert(20);
	s1.insert(40);

	//遍历
	//set特点  元素插入自动排序，不会插入重复的值
	printSet(s1);//10 20 30 40

	//拷贝构造
	set<int>s2(s1);
	printSet(s2);

	//赋值
	set<int>s3 = s1;
	printSet(s3);
}

int main()
{
	test01();
	system("pause");
	return 0;
}