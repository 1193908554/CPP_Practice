#include<iostream>
#include<list>
#include<string>
using namespace std;

class Person
{
public:

	Person(string name, int age, int height)
	{
		this->m_Name = name;
		this->m_Age = age;
		this->m_Height = height;
	}

	string m_Name;//姓名
	int m_Age;//年龄
	int m_Height;//身高
};

//指定排序规则
bool comparePerson(Person& p1, Person& p2)
{//高级排序只是在排序规则上再进行一次逻辑规则定制，并不复杂
	//按照年龄作为升序
	if (p1.m_Age == p2.m_Age)
	{
		//年龄相同，按照身高降序
		return p1.m_Height > p2.m_Height;//降序
	}
		
	return p1.m_Age < p2.m_Age;//升序
}

void test01()
{
	list<Person>L;

	//准备数据
	Person p1("刘备", 35, 175);
	Person p2("曹操", 45, 180);
	Person p3("孙权", 40, 175);
	Person p4("赵云", 25, 190);
	Person p5("张飞", 35, 160);
	Person p6("关于", 35, 200);

	//插入数据
	L.push_back(p1);
	L.push_back(p2);
	L.push_back(p3);
	L.push_back(p4);
	L.push_back(p5);
	L.push_back(p6);

	for (list<Person>::iterator it = L.begin(); it != L.end(); it++)
	{
		cout << "姓名：" << it->m_Name << ",年龄：" << it->m_Age << ",身高：" << it->m_Height << endl;
	}

	cout << "-----------------------排序后----------------------" << endl;

	L.sort(comparePerson);
	for (list<Person>::iterator it = L.begin(); it != L.end(); it++)
	{
		cout << "姓名：" << it->m_Name << ",年龄：" << it->m_Age << ",身高：" << it->m_Height << endl;
	}
}

int main()
{
	test01();
	system("pause");
	return 0;
}