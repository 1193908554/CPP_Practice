#include<iostream>
using namespace std;

class Person
{//���ó�Ա��������  �������,һ�㲻�ã���Ϊ�޷�ʵ��cout�����
	friend ostream& operator<<(ostream& cout, Person& p);//��Ԫ

public:
	Person(int a, int b)
	{
		m_A = a;
		m_B = b;
	}
private:
	int m_A;
	int m_B;
};

//һ�㲻�ã���Ϊ�޷�ʵ��cout�����
//����operator(cout,p),��cout<<p
ostream& operator<<(ostream& cout, Person& p)
{
	cout << "m_A = " << p.m_A << ",m_B = " << p.m_B;
	return cout;
}

void test01()
{
	Person p1(10,10);
	cout << p1 << endl;
}

int main()
{
	test01();

	system("pause");

	return 0;
}