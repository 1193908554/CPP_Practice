#include<iostream>
#include<set>
using namespace std;

//查找
void test01()
{
	set<int>s1;
	
	//插入数据
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);

	set<int>::iterator pos = s1.find(100);
	if (pos != s1.end())
	{
		cout << "找到:" << *pos << endl;
	}
	else
	{
		cout << "未找到" << endl;
	}
}

//统计
void test02()
{
	set<int>s1;

	//插入数据
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);
	s1.insert(30);

	//统计30的个数
	int num = s1.count(300);//不管插入几次都算1。没有就0

	cout << "个数：" << num << endl;
}

int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}