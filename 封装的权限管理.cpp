#include<iostream>
#include<string>
using namespace std;

//公共权限public       成员在类内可以访问  类外也可以访问
//保护权限protected    成员只能在类内可以访问   可以被继承
//私有权限private      成员类内可以访问  不能被继承
class Person
{
public:
	string m_Name;//名字

protected:
	string m_Car;//汽车

private:
	int m_Password;//银行卡密码

public:
	void func()
	{
		m_Name = "张三";
		m_Car = "拖拉机";
		m_Password = 123456;
	}
};

int main()
{
	Person p1;

	p1.m_Name = "李四";
	p1.m_Car = "奔驰";//保护权限的内容，在类外访问不到
	p1.Password = 123457;//私有权限内容，在类外访问不到

	system("pause");

	return 0;
}