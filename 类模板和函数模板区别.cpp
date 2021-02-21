#include<iostream>
#include<string>
using namespace std;

template<class NameType, class AgeType>
class Person
{
public:
	Person(NameType name, AgeType age = int)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	void showPerson()
	{
		cout << "name:" << this->m_Name << endl;
		cout << "age:" << this->m_Age << endl;
	}

	NameType m_Name;
	AgeType m_Age;
};

void test01()
{
	//没有自动类型推导
	//Person p("占山", 12);

	Person<string, int>p("占山", 12);//只能用显示指定类型

	p.showPerson();

	Person<string> p2("zhang", 12);//类模板在模板参数可以有默认值
	//如：Person(NameType name, AgeType age = int)
	p.showPerson();

}

int main()
{
	test01();
	system("pause");

	return 0;
}