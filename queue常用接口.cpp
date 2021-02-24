#include<iostream>
#include<queue>
#include<string>
using namespace std;

class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	string m_Name;
	int m_Age;
};

void test()
{
	queue<Person>q;

	Person p1("����", 12);
	Person p2("����", 15);
	Person p3("����", 17);
	Person p4("����", 16);

	//���
	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);

	queue<Person>q2(q);//��������
	
	cout << "���д�С��" << q.size() << endl;

	//�ж�ֻҪ���в�Ϊ�գ��鿴��ͷ��Ȼ�����  �Դ�ѭ��
	while (!q.empty())
	{
		cout << "��ͷΪ��" << q.front().m_Name << ","<< q.front().m_Age << endl;
		cout << "��βΪ��" << q.back().m_Name << "," << q.back().m_Age << endl;
		q.pop();
	}

	cout << "���д�С��" << q.size() << endl;
	cout << "--------------" << endl;

	while (!q2.empty())
	{
		cout << "��ͷΪ��" << q2.front().m_Name << "," << q2.front().m_Age << endl;
		cout << "��βΪ��" << q2.back().m_Name << "," << q2.back().m_Age << endl;
		q2.pop();
	}

}

int main()
{
	test();
	system("pause");
	return 0;
}