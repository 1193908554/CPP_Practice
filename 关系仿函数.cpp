#include<iostream>
#include<vector>
#include<functional>//内建函数对象头文件
#include<algorithm>//算法头文件
using namespace std;

class MyCompare//这段仿函数可以省略
{
public:
	bool operator()(int n, int m)
	{
		return n > m;//降序
	}
};

void test01()
{
	vector<int>v;

	v.push_back(10);
	v.push_back(30);
	v.push_back(50);
	v.push_back(40);
	v.push_back(20);

	cout << "排序前" << endl;

	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	//降序
	//sort(v.begin(), v.end(), MyCompare());
	sort(v.begin(), v.end(), greater<int>());//greater-大于
	
	cout << "排序后" << endl;
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
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