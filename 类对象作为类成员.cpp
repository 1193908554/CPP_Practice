#include<iostream>
#include<string>
using namespace std;

class Phone
{
public:
	Phone(string phone)
	{
		cout << "phone构造" << endl;
		m_PName = phone;
	}
	~Phone()
	{
		cout << "phone析构" << endl;
	}
	string m_PName;

};

//当其他类对象作为本类成员，构造时先构造类对象，然后再构造本身。
//析构时刚好相反。
class Person
{
public:
	Person(string name, string PName) :m_Name(name), m_Phone(PName) 
	{//Phone m_Phone = PName  隐式转换
		cout << "Person构造" << endl;
	}
	~Person()
	{
		cout << "Person析构" << endl;
	}
	string m_Name;
	Phone m_Phone;
};

void test01()
{
	Person p("张三", "苹果9");
	cout << p.m_Name << p.m_Phone.m_PName << endl;
}


int main()
{
	test01();

	system("pause");

	return 0;
}