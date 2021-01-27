#include<iostream>
using namespace std;

class Person
{
public:
	Person()//无参构造（默认构造）
	{
		cout << "无参构造函数调用" << endl;
	}
	Person(int age)//有参构造
	{
		m_age = age;
		cout << "有参构造函数调用" << endl;
	}
	Person(const Person& p)//拷贝构造函数   格式const 类名& p
	{//将传入的数据拷贝到当前属性上面
		m_age = p.m_age;
		cout << "拷贝构造函数调用" << endl;
	}

	~Person()
	{
		cout << "析构函数调用" << endl;
	}
private:
	int m_age;
};

//使用一个已经创建完毕的对象来初始化一个对象
void test01()
{
	Person p1(20);
	Person p2(p1);
}

//值传递的方式给函数参数传值
void doWork(Person p)
{

}
void test02()
{
	Person p;//无参调用
	doWork(p);//会调用拷贝构造函数

}

//以值方式返回局部对象
Person doWork2()//返回时候会根据p1创建一个新的对象
{
	Person p2;//默认构造
	cout << (int*)&p2 << endl;
	return p2;
}
void test03()
{
	Person p3 = doWork2();
	cout << (int*)&p3 << endl;
}

int main()
{
	test01();
	cout << "-------------------" << endl;
	test02();
	cout << "-------------------" << endl;
	test03();

	system("pause");

	return 0;
}