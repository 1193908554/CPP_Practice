#include<iostream>
using namespace std;

class Person
{
public:
	Person()
	{
		cout << "Ĭ�Ϲ��캯������" << endl;
	}

	Person(int age,int height)
	{
		m_Age = age;
		m_Height = new int(height);//�ֶ��ͷ�
		cout << "�вι��캯������" << endl;
	}

	Person(const Person& p)
	{
		m_Age = p.m_Age;
		m_Height = new int(*p.m_Height);//�������
		//m_Height = p.m_Height������Ĭ����ִ�����д���
		cout << "�������캯������" << endl;
	}

	~Person()
	{
		//���������ٵ�������һ���ͷŲ���
		if (m_Height != NULL)
		{
			delete m_Height;
			m_Height = NULL;
		}
		cout << "������������" << endl;
	}

private:

public:
	int m_Age;
	int* m_Height;//����
};


void test01()
{
	Person p1(18,160);

	cout << "p1�����䣺" << p1.m_Age << "����Ϊ��" << *p1.m_Height << endl;

	Person p2(p1);
	cout << "p2�����䣺" << p2.m_Age << "����Ϊ��" << *p2.m_Height << endl;
}

int main()
{
	test01();

	system("pause");

	return 0;
}