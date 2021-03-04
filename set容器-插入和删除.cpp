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

	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);

	printSet(s1);

	//删除
	s1.erase(s1.begin());//删除第一个元素

	printSet(s1);//20 30 40

	//删除重载版本
	s1.erase(30);
	printSet(s1);//20 40

	//清空
	//s1.erase(s1.begin(), s1.end());
	s1.clear();
	printSet(s1);//已空
}

int main()
{
	test01();
	system("pause");
	return 0;
}