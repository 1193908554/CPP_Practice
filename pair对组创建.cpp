#include<iostream>
using namespace std;

void test01()
{
	pair<string, int>p("汤姆", 13);//第一种方式

	cout << "姓名：" << p.first << ",年龄：" << p.second << endl;

	pair<string, int>p2 = make_pair("jerry", 30);//第二种方式
	cout << "姓名：" << p2.first << ",年龄：" << p2.second << endl;

}

int main()
{
	test01();
	system("pause");
	return 0;
}