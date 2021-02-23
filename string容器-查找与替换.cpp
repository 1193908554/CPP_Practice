#include<iostream>
#include<string>
using namespace std;

//查找
void test01()
{
	string str1 = "abcdefgdede";

	int pos = str1.find("de");//找到返回第一个下标，找不到为-1
	if (pos == -1)//从左往右找
	{
		cout << "未找到字符串" << endl;
	}
	else
	{
		cout << "找到，pos = " << pos << endl;
	}

	pos = str1.rfind("de");//从右往左找
	if (pos == -1)
	{
		cout << "未找到字符串" << endl;
	}
	else
	{
		cout << "找到，pos = " << pos << endl;
	}
	
}

void test02()
{
	string str1 = "abcdfeg";

	str1.replace(1, 3, "1234");//a1234feg
	//从1号位置起，三个字符替换为1234

	cout << "str1 = " << str1 << endl;
}

int main(void)
{
	test01();
	test02();
	system("pause");
	return 0;
}