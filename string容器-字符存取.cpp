#include<iostream>
#include<string>
using namespace std;

void test01()
{
	string str = "hello";

	cout << str << endl;

	//方法一   访问
	for (int i = 0; i < str.size(); i++)
	{
		cout << str[i] << " ";
	}
	cout << endl;

	//方法二   访问
	for (int i = 0; i < str.size(); i++)
	{
		cout << str.at(i) << " ";
	}
	cout << endl;

	//修改   俩种方法
	str[0] = 'x';
	str.at(1) = 'q';
	cout << str << endl;

}

int main()
{
	test01();
	system("pause");

	return 0;
}