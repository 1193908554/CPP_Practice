#include<iostream>
using namespace std;

class Base
{
public:

	static int m_A;
	static void func()
	{
		cout << "Base-func()����" << endl;
	}
	static void func(int a)
	{
		cout << "Base-func(int a)����" << endl;
	}
};
int Base::m_A = 100;
class Son :public Base
{
public:

	static int m_A;
	static void func()
	{
		cout << "Son-func()����" << endl;
	}
};
int Son::m_A = 200;
void test01()
{
	//ͨ���������
	Son s;
	cout << "Son �µ�m_A = " << s.m_A << endl;
	cout << "Base �µ�m_A = " << s.Base::m_A << endl;

	//ͨ������������
	cout << "Son �µ�m_A = " << Son::m_A << endl;
	//��һ��ð�Ŵ���ͨ�������ķ�ʽ����  �ڶ���ð�ű�ʾ���ʸ������������
	cout << "Base �µ�m_A = " << Son::Base::m_A << endl;

	//ͨ���������
	s.func();//ֱ�ӵ��� �������Լ�
	s.Base::func();//���ø���ģ���������

	//ͨ������������
	Son::func();
	Son::Base::func();
	Son::Base::func(10);
}

int main()
{ 
	test01();
	system("pause");
	return 0;
}