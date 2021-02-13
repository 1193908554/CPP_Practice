#include<iostream>
using namespace std;

class Person
{
public:
	Person(int age)
	{
		m_age = new int(age);
	}

	Person& operator=(Person& p)//防止多次赋值，所以要有返回值
	{
		//编译器提供的是浅拷贝
		/*m_age = p.m_age;*/

		//应该先判断该属性在堆区，如果有先释放干净，然后再深拷贝
		if (m_age != NULL)
		{
			delete m_age;
			m_age = NULL;
		}

		//深拷贝
		m_age = new int(*p.m_age);

		return *this;
	}

	~Person()
	{
		if (m_age != NULL)
		{
			delete m_age;
			m_age = NULL;
		}
	}

	int *m_age;

};

void test01()
{
	 Person p1(18);
	 
	 Person p2(20);

	 Person p3(30);

	 p3 = p2 = p1;
	 //p2 = p1;//将p1属性给p2
	 cout << "p1的年龄" << *p1.m_age << endl;

	 cout << "p2的年龄" << *p2.m_age << endl;

	 cout << "p3的年龄" << *p3.m_age << endl;
}

int main()
{
	test01();

	/*int a = 10;
	int b = 20;
	int c = 30;
	c = b = a;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "c=" << c << endl;*/

	system("pause");
	return 0;
}