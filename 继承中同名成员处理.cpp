#include<iostream>
using namespace std;

class Base
{
public:
	Base()
	{
		m_A = 100;
	}
	int m_A;
	void func()
	{
		cout << "Base-func()����" << endl;
	}
	void func(int a)
	{
		cout << "Base-func(int a)����" << endl;
	}
};

class Son :public Base
{
public:
	Son()
	{
		m_A = 200;
	}
	int m_A;
	void func()
	{
		cout << "Son-func()����" << endl;
	}
};

void test01()
{
	Son s;
	cout << "m_A = " << s.m_A << endl;

	//���ͨ���������  ���ʵ�������ͬ����Ա  ��Ҫ��һ��������
	cout << "����m_A = " << s.Base::m_A << endl;

	s.func();
	s.Base::func();//��������  ���ø����
	
	//��������г��ֺ͸���ͬ���ĳ�Ա������
	//�����ͬ�����������ص����������е�ͬ����Ա����   �����������
	s.Base::func(5);
}

int main()
{
	test01();
	system("pause");
	return 0;
}