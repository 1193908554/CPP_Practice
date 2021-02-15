#include<iostream>
using namespace std;

class Base
{
public:
	Base()
	{
		cout << "Base的构造函数" << endl;
	}

	~Base()
	{
		cout << "Base的析构函数" << endl;
	}
};

class Son :public Base
{
public:
	Son()
	{
		cout << "Son的构造函数" << endl;
	}

	~Son()
	{
		cout << "Son的析构函数" << endl;
	}
};

void test01()
{
	//Base b;

	//先构造父类  再构造子类   析构顺序刚好相反
	Son s;
}

int main()
{
	test01();
	system("pause");
	return 0;
}