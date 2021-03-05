#include<iostream>
#include<vector>
#include<functional>//内建函数对象头文件
#include<algorithm>//算法头文件
using namespace std;


void test01()
{
	vector<bool>v;

	v.push_back(true);
	v.push_back(true);
	v.push_back(false);
	v.push_back(true);

	for (vector<bool>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;// 1 1 0 1

	//利用逻辑非  将容器搬用到 v2中， 并执行取反操作
	vector<bool>v2;
	v2.resize(v.size());//先开辟空间  必须的步骤

	transform(v.begin(),v.end(),v2.begin(),logical_not<bool>());
	//搬用    并取反   
	//参数1：原起始位置
	//参数2：原结束位置
	//参数3：新起始位置
	//参数4：取反

	for (vector<bool>::iterator it = v2.begin(); it != v2.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;// 0 0 1 0
}

int main()
{
	test01();
	system("pause");
	return 0;
}