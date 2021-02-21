#include<iostream>
#include<string>
using namespace std;


template<class T1, class T2>
class Person
{
public:
	Person(T1 name, T2 age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	void showPerson()
	{
		cout << "姓名：" << this->m_Name << "，年龄：" << this->m_Age << endl;
	}

	T1 m_Name;
	T2 m_Age;
};

//1.指定传入类型    最常用
void printPerson1(Person<string, int>& p)
{
	p.showPerson();
}
void test01()
{
	Person<string, int> p("张三", 16);
	printPerson1(p);
}

//2.参数模板化
template<typename T1,typename T2>
void printPerson2(Person<T1, T2>& p)
{
	p.showPerson();
	cout << "T1 的类型：" << typeid(T1).name() << endl;
	cout << "T2 的类型：" << typeid(T2).name() << endl;
}
void test02()
{
	Person<string, int> p("李四", 16);
	printPerson2(p);
}

//3.整个类模板化
template<typename T>
void printPerson3(T &p)
{
	p.showPerson();
	cout << "T 的类型：" << typeid(T).name() << endl;
}
void test03()
{
	Person<string, int> p("王五", 16);
	printPerson3(p);
}

int main()
{
	test01();
	cout << "------------" << endl;
	test02();
	cout << "------------" << endl;
	test03();
	cout << "------------" << endl;

	system("pause");

	return 0;
}