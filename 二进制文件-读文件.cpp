#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class Person
{
public:

	char m_Name[64];//姓名
	int m_Age;//年龄
};

void test01()
{
	ifstream ifs;

	ifs.open("person.txt", ios::in | ios::binary);

	if (!ifs.is_open())
	{
		cout << "文件打开失败" << endl;
		return;
	}

	Person p;

	ifs.read((char*)&p, sizeof(Person));

	cout << p.m_Name << endl;
	cout << p.m_Age << endl;

	ifs.close();//关闭文件
}

int main()
{
	test01();
	system("pause");

	return 0;
}