#include<iostream>
using namespace std;

class Person
{//利用成员函数重载  左运算符,一般不用，因为无法实现cout在左侧
	friend ostream& operator<<(ostream& cout, Person& p);//友元

public:
	Person(int a, int b)
	{
		m_A = a;
		m_B = b;
	}
private:
	int m_A;
	int m_B;
};

//一般不用，因为无法实现cout在左侧
//本质operator(cout,p),简化cout<<p
ostream& operator<<(ostream& cout, Person& p)
{
	cout << "m_A = " << p.m_A << ",m_B = " << p.m_B;
	return cout;
}

void test01()
{
	Person p1(10,10);
	cout << p1 << endl;
}

int main()
{
	test01();

	system("pause");

	return 0;
}