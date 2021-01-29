#include<iostream>
using namespace std;

class Person
{
public:
	Person()
	{
		cout << "默认构造函数调用" << endl;
	}

	Person(int age,int height)
	{
		m_Age = age;
		m_Height = new int(height);//手动释放
		cout << "有参构造函数调用" << endl;
	}

	Person(const Person& p)
	{
		m_Age = p.m_Age;
		m_Height = new int(*p.m_Height);//深拷贝操作
		//m_Height = p.m_Height编译器默认人执行这行代码
		cout << "拷贝构造函数调用" << endl;
	}

	~Person()
	{
		//将堆区开辟的数据做一个释放操作
		if (m_Height != NULL)
		{
			delete m_Height;
			m_Height = NULL;
		}
		cout << "析构函数调用" << endl;
	}

private:

public:
	int m_Age;
	int* m_Height;//堆区
};


void test01()
{
	Person p1(18,160);

	cout << "p1的年龄：" << p1.m_Age << "升高为：" << *p1.m_Height << endl;

	Person p2(p1);
	cout << "p2的年龄：" << p2.m_Age << "升高为：" << *p2.m_Height << endl;
}

int main()
{
	test01();

	system("pause");

	return 0;
}