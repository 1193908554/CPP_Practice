#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class MyCompare//仿函数
{
public:
	bool operator()(int val1, int val2)//二元谓词
	{
		return val1 > val2;//设置降序
	}
};

void test01()
{
	vector<int>v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(50);
	v.push_back(40);
	v.push_back(30);

	sort(v.begin(),v.end());

	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	//使用函数对象，改变算法策略，变为排序规则为从大到小
	sort(v.begin(), v.end(), MyCompare());

	cout << "降序输出：" << endl;
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}

}

int main()
{
	test01();
	system("pause");
	return 0;
}