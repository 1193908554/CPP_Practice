#include<iostream>
using namespace std;

class Base
{
public:

	//!? ֻҪ��һ�����麯���������ͳ�Ϊ������
	virtual void func() = 0;//! ���麯��
};

class Son :public Base
{
public:
	virtual void func() 
	{
		cout << "func��������" << endl;
	};
};

void test01()
{
	//Base b;// ������
	Son s;// ���������д����Ĵ��躯���������޷�ʵ��������
	s.func();

	Base* base = new Son;
	base->func();
}

int main()
{
	test01();

	system("pause");

	return 0;
}