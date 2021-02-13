#include<iostream>
using namespace std;

class MyInteger
{
	friend ostream& operator<<(ostream& cout, MyInteger& myint);//友元
public:
	MyInteger()
	{
		m_Num = 0;
	}

	//重载前置++运算符
	MyInteger& operator++()
	{
		++m_Num;
		return *this;
	}

	//重载++后置运算符      int 代表占位参数，可以用于区分前置和后置递增
	MyInteger operator++(int)//后置递增不能引用
	{//先记录当前结果，然后自增，再返回记录的值
		MyInteger tmp = *this;
		m_Num++;
		return tmp;
	}

private:
	int m_Num;
};

ostream& operator<<(ostream& cout, MyInteger& myint)
{
	cout << "m_Num = " << myint.m_Num;
	return cout;
}

void test01()
{
	MyInteger myint;

	cout << ++(++myint) << endl;
	cout << myint << endl;
}

void test02()
{
	MyInteger myint2;

	cout << myint2++ << endl;
	cout << myint2 << endl;
}

int main()
{
	test01();
	test02();

	system("pause");

	return 0;
}