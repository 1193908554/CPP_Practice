#include<iostream>
#include<set>
using namespace std;

class MyCompare
{
public:
	bool operator()(int v1, int v2)
	{
		return v1 > v2;//设置降序
	}
};

void test01()
{
	set<int>s;

	s.insert(40);
	s.insert(50);
	s.insert(20);
	s.insert(10);

	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	//指定排序规则从大到小

	set<int, MyCompare>s2;

	s2.insert(40);
	s2.insert(50);
	s2.insert(20);
	s2.insert(10);

	for (set<int, MyCompare>::iterator it = s2.begin(); it != s2.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

}

int main()
{
	test01();
	system("pause");
	return 0;
}