#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class Person
{
public:

	char m_Name[64];//����
	int m_Age;//����
};

void test01()
{
	ofstream ofs("person.txt", ios::out | ios::binary);

	Person p = { "����", 18 };

	ofs.write((const char*)&p, sizeof(Person));

	ofs.close();//�ر��ļ�
}

int main()
{
	test01();
	system("pause");

	return 0;
}