#include<iostream>
#include<string>
using namespace std;

//��ǰ�ñ�����֪��Person�����
template<typename T1, typename T2>
class Person;

//����ʵ��   ����
template<typename T1, typename T2>
void printPerson2(Person<T1, T2> p)
{
	cout << "������" << p.m_Name << "�����䣺" << p.m_Age << endl;
}

template<class T1, class T2>
class Person
{
	//ȫ�ֺ���  ����ʵ��
	friend void printPerson(Person<T1,T2> p)//����ģ�廯
	{
		cout << "������" << p.m_Name << "�����䣺" << p.m_Age << endl;
	}

	//ȫ�ֺ���  ����ʵ��
	//��һ���ղ���ģ���б�     ��Ȼ���������һ����ͨ���� 
	//������ǵ�ȫ�ֺ�������Ҫ�ñ�������ǰ֪���������
	friend void printPerson2<>(Person<T1, T2> p);

public:
	Person(T1 name, T2 age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

private:
	T1 m_Name;
	T2 m_Age;
};



void test01()
{
	Person<string, int> p("Tom", 20);

	printPerson(p);

	Person<string, int> p2("Tom", 20);

	printPerson2(p2);
}

int main()
{
	test01();
	system("pause");

	return 0;
}