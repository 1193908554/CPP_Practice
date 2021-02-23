#include<iostream>
#include<string>
using namespace std;

void test()
{
	string str = "abcdef";

	string subStr = str.substr(1, 3);
	cout << "subStr = " << subStr << endl;//bcd

}

//使用操作
void test1()
{
	string email = "zhangsan@sina.com";

	//从邮箱地址中，获取  用户名
	int pos = email.find("@");
	cout << pos << endl;//8

	string usrName = email.substr(0, pos);
	cout << usrName << endl;//zhansgan
}

int main()
{
	test();
	test1();
	system("pause");
	return 0;
}