#include<iostream>
using namespace std;

class Person
{
public:
	//1����Ա��������+��
	//����Perosn p3 = p1.operator+(p2);
	Person operator+(Person& p)
	{
		Person tmp;
		tmp.m_A = this->m_A + p.m_A;
		tmp.m_B = this->m_B + p.m_B;
		return tmp;
	}

	int m_A;
	int m_B;
};

//2��ȫ�ֺ�������+��
//����Perosn p3 = operator+(p1,p2);
Person operator+(Person& p1, Person& p2)
{
	Person tmp;
	tmp.m_A = p1.m_A + p2.m_A;
	tmp.m_B = p1.m_A + p2.m_B;
	return tmp;
}

//��������
Person operator+(Person& p1, int num)
{
	Person tmp;
	tmp.m_A = p1.m_A + num;
	tmp.m_B = p1.m_A + num;
	return tmp;
}


void test01()
{
	Person p1;
	p1.m_A = 10;
	p1.m_B = 10;

	Person p2;
	p2.m_A = 10;
	p2.m_B = 10;

	//��Ա����
	Person p3 = p1.operator+(p2);

	//ȫ�ֺ���
	Person p3 = operator+(p1, p2);

	Person p3 = p1 + p2;

	//��������
	Person p4 = p1 + 10;

	cout << "m_A = " << p3.m_A << ",m_B = " << p3.m_B << endl;
	cout << "m_A = " << p4.m_A << ",m_B = " << p4.m_B << endl;
}

int main()
{
	test01();

	system("pause");

	return 0;
}