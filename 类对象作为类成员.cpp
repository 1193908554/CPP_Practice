#include<iostream>
#include<string>
using namespace std;

class Phone
{
public:
	Phone(string phone)
	{
		cout << "phone����" << endl;
		m_PName = phone;
	}
	~Phone()
	{
		cout << "phone����" << endl;
	}
	string m_PName;

};

//�������������Ϊ�����Ա������ʱ�ȹ��������Ȼ���ٹ��챾��
//����ʱ�պ��෴��
class Person
{
public:
	Person(string name, string PName) :m_Name(name), m_Phone(PName) 
	{//Phone m_Phone = PName  ��ʽת��
		cout << "Person����" << endl;
	}
	~Person()
	{
		cout << "Person����" << endl;
	}
	string m_Name;
	Phone m_Phone;
};

void test01()
{
	Person p("����", "ƻ��9");
	cout << p.m_Name << p.m_Phone.m_PName << endl;
}


int main()
{
	test01();

	system("pause");

	return 0;
}