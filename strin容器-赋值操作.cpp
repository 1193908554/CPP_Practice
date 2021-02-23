#include<iostream>
#include<string>
using namespace std;

void test()
{
	string str1;
	str1 = "Hello World!";//char*类型字符串
	cout << "str1 = " << str1 << endl;

	string str2;
	str2 = str1;//把字符串赋给
	cout << "str2 = " << str2 << endl;

	string str3;
	str3 = 'a';//单个字符赋值
	cout << "str3 = " << str3 << endl;

	string str4;
	str4.assign("Hello C++!");//c风格字符串赋值
	cout << "str5 = " << str4 << endl;

	string str5;
	str5.assign("Hello C++!", 5);//只赋给前5个字符
	cout << "str5 = " << str5 << endl;

	string str6;
	str6.assign(str5);//C++风格字符串赋值
	cout << "str6 = " << str6 << endl;

	string str7;
	str7.assign(10, 'q');//用n个字符赋给当前字符串
	cout << "str7 = " << str7 << endl;
}

int main()
{
	test();
	system("pause");
	return 0;
}