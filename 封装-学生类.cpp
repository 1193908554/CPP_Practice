#include<iostream>
#include<string>
using namespace std;

class Student
{
public:
	string m_Name;
	string m_id;
	void setName(string name)
	{
		m_Name = name;
	}
	void setID(string id)
	{
		m_id = id;
	}
	void print()
	{
		cout << "������" << m_Name << "��ѧ�ţ�" << m_id << endl;
	}
};

int main()
{
	Student stu;
	stu.m_Name = "����";
	stu.m_id = "2018050132";
	stu.print();

	Student stu2;
	stu2.setName("��ٻ");
	stu2.setID("2018050138");
	stu2.print();

	system("pause");

	return 0;
}