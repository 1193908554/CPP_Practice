#include<iostream>
#include<string>
using namespace std;

void test()
{
	string str1 = "我";
	str1 += "爱玩王者荣耀";//追加
	cout << "str1 = " << str1 << endl;

	str1 += '!';
	cout << "str1 = " << str1 << endl;

	string str2 = "LOL DNF";
	str1 += str2;
	cout << "str1 = " << str1 << endl;

	string str3 = "I";
	str3.append(" love ");
	cout << "str3 = " << str3 << endl;

	str3.append("game abcsd", 4);
	cout << "str3 = " << str3 << endl;

	str3.append(str2);
	cout << "str3 = " << str3 << endl;

	str3.append(str2, 0, 3);
	cout << "str3 = " << str3 << endl;

	str3.append(str2, 3, 6);
	cout << "str3 = " << str3 << endl;
}

int main()
{
	test();
	system("pause");
	return 0;
}