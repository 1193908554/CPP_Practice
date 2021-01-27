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
 

int main()
{


	system("pause");

	return 0;
}