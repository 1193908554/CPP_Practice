#include<iostream>
using namespace std;

class Person
{
public:
	Person()//�޲ι��죨Ĭ�Ϲ��죩
	{
		cout << "�޲ι��캯������" << endl;
	}
	Person(int age)//�вι���
	{
		m_age = age;
		cout << "�вι��캯������" << endl;
	}
	Person(const Person& p)//�������캯��   ��ʽconst ����& p
	{//����������ݿ�������ǰ��������
		m_age = p.m_age;
		cout << "�������캯������" << endl;
	}

	~Person()
	{
		cout << "������������" << endl;
	}
private:
	int m_age;
};

//ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ������
void test01()
{
	Person p1(20);
	Person p2(p1);
}

//ֵ���ݵķ�ʽ������������ֵ
void doWork(Person p)
{

}
void test02()
{
	Person p;//�޲ε���
	doWork(p);//����ÿ������캯��

}

//��ֵ��ʽ���ؾֲ�����
Person doWork2()//����ʱ������p1����һ���µĶ���
{
	Person p2;//Ĭ�Ϲ���
	cout << (int*)&p2 << endl;
	return p2;
}
void test03()
{
	Person p3 = doWork2();
	cout << (int*)&p3 << endl;
}

int main()
{
	test01();
	cout << "-------------------" << endl;
	test02();
	cout << "-------------------" << endl;
	test03();

	system("pause");

	return 0;
}