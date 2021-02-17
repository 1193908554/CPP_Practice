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
	ofstream ofs("person.txt", ios::out | ios::binary);

	Person p = { "张三", 18 };

	ofs.write((const char*)&p, sizeof(Person));

	ofs.close();//关闭文件
}

int main()
{
	test01();
	system("pause");

	return 0;
}