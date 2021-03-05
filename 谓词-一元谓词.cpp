#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class GreaterFive
{
public:
	bool operator()(int val)//一元谓词
	{
		return val > 5;
	}
};

void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	//查找容器中大于5的数字
	//GreaterFive()匿名函数对象
	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
	//find_if就是增加了条件查找    
	//找到返回对于迭代器位置，找不到返回v.end（）位置

	if (it == v.end())
	{
		cout << "未找到" << endl;
	}
	else
	{
		cout << "找到，位置" << *it << endl;
	}
	
}

int main()
{
	test01();
	system("pause");
	return 0;
}