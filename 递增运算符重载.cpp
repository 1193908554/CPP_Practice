#include<iostream>
using namespace std;

class MyInteger
{
	friend ostream& operator<<(ostream& cout, MyInteger& myint);//��Ԫ
public:
	MyInteger()
	{
		m_Num = 0;
	}

	//����ǰ��++�����
	MyInteger& operator++()
	{
		++m_Num;
		return *this;
	}

	//����++���������      int ����ռλ������������������ǰ�úͺ��õ���
	MyInteger operator++(int)//���õ�����������
	{//�ȼ�¼��ǰ�����Ȼ���������ٷ��ؼ�¼��ֵ
		MyInteger tmp = *this;
		m_Num++;
		return tmp;
	}

private:
	int m_Num;
};

ostream& operator<<(ostream& cout, MyInteger& myint)
{
	cout << "m_Num = " << myint.m_Num;
	return cout;
}

void test01()
{
	MyInteger myint;

	cout << ++(++myint) << endl;
	cout << myint << endl;
}

void test02()
{
	MyInteger myint2;

	cout << myint2++ << endl;
	cout << myint2 << endl;
}

int main()
{
	test01();
	test02();

	system("pause");

	return 0;
}