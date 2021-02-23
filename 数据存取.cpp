#include<iostream>
#include<vector>
using namespace std;

void test01()
{
	vector<int> v1;//无参构造

	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}


	//利用[]来访问
	for (int i = 0; i < 10; i++)
	{
		cout << v1[i] << " ";
	}
	cout << endl;

	//利用at（）方法
	for (int i = 0; i < 10; i++)
	{
		cout << v1.at(i) << " ";
	}
	cout << endl;

	//获取第一个元素
	cout << "第一个元素：" << v1.front() << endl;

	//获取最后一个元素
	cout << "最后一个元素：" << v1.back() << endl;

}

int main()
{
	test01();
	system("pause");

	return 0;
}