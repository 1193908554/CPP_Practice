#include<iostream>
#include<vector>
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

//存放自定类
void test01()
{
	vector<Person>v;

	//创建对象
	Person p1("a", 14);
	Person p2("b", 15);
	Person p3("c", 17);
	Person p4("d", 18);

	//向容器中添加数据
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	//遍历
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{//*it是Person类型
		cout << "姓名：" << (*it).m_Name << ",年龄:" << (*it).m_Age << endl;

		//cout << "姓名：" << it->m_Name << ",年龄:" << it->m_Age << endl;
		//把迭代器当做指针对待
	}
}

//存放指针
void test02()
{
	vector<Person*>v;

	//创建对象
	Person p1("a", 14);
	Person p2("b", 15);
	Person p3("c", 17);
	Person p4("d", 18);

	//向容器中添加数据
	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);
	v.push_back(&p4);

	//遍历
	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "姓名：" << (*it)->m_Name << ",年龄:" << (*it)->m_Age << endl;
	}//*it是Person*类型
}

int main()
{
	test01();
	test02();

	system("pause");

	return 0;
}