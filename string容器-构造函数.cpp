#include<iostream>
#include<string>
using namespace std;

void test01()
{
	string s1;//默认构造

	const char* str = "Hello World!";
	string s2(str);//使用c语言风格字符串初始化
	cout << s2 << endl;

	string s3(s2);//使用C++语言风格字符串初始化
	cout << s3 << endl;

	string s4(10, 'a');//使用n个字符a初始化
	cout << s4 << endl;
}

int main()
{
	test01();
	system("pause");

	return 0;
}