#include<iostream>
#include<string>
using namespace std;

//提前让编译器知道Person类存在
template<typename T1, typename T2>
class Person;

//类外实现   内容
template<typename T1, typename T2>
void printPerson2(Person<T1, T2> p)
{
	cout << "姓名：" << p.m_Name << "，年龄：" << p.m_Age << endl;
}

template<class T1, class T2>
class Person
{
	//全局函数  类内实现
	friend void printPerson(Person<T1,T2> p)//参数模板化
	{
		cout << "姓名：" << p.m_Name << "，年龄：" << p.m_Age << endl;
	}

	//全局函数  类外实现
	//加一个空参数模板列表     不然会把它当成一个普通函数 
	//如果我们的全局函数，需要让编译器提前知道这个函数
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