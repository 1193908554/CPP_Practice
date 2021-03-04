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

//大小
void test01()
{
	set<int>s1;

	s1.insert(10);
	s1.insert(130);
	s1.insert(80);
	s1.insert(20);

	//打印容器
	printSet(s1);

	//判断是否为空
	if (s1.empty())
	{
		cout << "为空" << endl;
	}
	else
	{
		cout << "不为空" << endl;
		cout << "大小：" << s1.size() << endl;
	}
}

//交换
void test02()
{
	set<int>s1;

	s1.insert(10);
	s1.insert(130);
	s1.insert(80);
	s1.insert(20);

	set<int>s2;

	s2.insert(12);
	s2.insert(5);
	s2.insert(20);
	s2.insert(15);

	cout << "交换前：" << endl;

	printSet(s1);//10 20 80 130
	printSet(s2);//5 12 15 20

	cout << "交换后：" << endl;
	
	s1.swap(s2);//交换
	printSet(s1);//5 12 15 20
	printSet(s2);//10 20 80 130
}

int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}