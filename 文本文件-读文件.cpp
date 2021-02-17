#include<iostream>
#include<fstream>
#include<string>
using namespace std;

void test01()
{
	ifstream ifs;

	//打开文件，并判断是否打开成功
	ifs.open("test.txt", ios::in);

	if (!ifs.is_open())
	{
		cout << "文件打开失败" << endl;
		return ;
	}

	//! 读文件
	//第一种
	char buf[1024] = { 0 };
	while (ifs >> buf)
	{
		cout << buf << endl;
	}

	//第二种
	char buf2[1024] = { 0 };
	while (ifs.getline(buf2, sizeof(buf2)))
	{
		cout << buf2 << endl;
	}

	//第三种
	string buf3;
	while (getline(ifs, buf3))
	{
		cout << buf3 << endl;
	}

	//第四种
	char c;//效率慢
	while ((c = ifs.get()) != EOF)//EOF  文件尾部的一个标识，end of file
	{
		cout << c;
	}

	ifs.close();//关闭文件
}

int main()
{
	test01();
	system("pause");

	return 0;
}