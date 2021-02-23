#include<iostream>
#include<vector>
using namespace std;

void printVector(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	vector<int>v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector(v1);

	if (v1.empty())//真 就是空
	{
		cout << "v1为空" << endl;
	}
	else
	{
		cout << "v1不为空" << endl;
		cout << "容量：" << v1.capacity() << endl;
		cout << "大小：" << v1.size() << endl;
	}

	//重新指定大小
	v1.resize(15, 100); //比原来长的话，默认用0填充, 也可以指定
	printVector(v1);

	v1.reserve(5);//比原来短的话，超过部分会删除
	printVector(v1);


}

int main()
{
	test01();
	system("pause");

	return 0;
}