#include<iostream>
using namespace std;

//父类
class Base1
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son1 :public Base1
{
public:
	void func()
	{
		m_A = 10;//父类中公共权限成员,到子类依旧是公共权限
		m_B = 10;//父类中保护权限成员,到子类依旧是保护权限
		//m_C = 10;//父类中私有权限成员,子类访问不到
	}
};

class Son2 :protected Base1
{
public:
	void func()
	{
		m_A = 10;//父类中公共权限成员,到子类变成了保护权限
		m_B = 10;//父类中保护权限成员,到子类依旧是保护权限
		//m_C = 10;//父类中私有权限成员,子类访问不到
	}
};

class Son3 :private Base1
{
public:
	void func()
	{
		m_A = 10;//父类中公共权限成员,到子类变成了私有权限
		m_B = 10;//父类中保护权限成员,到子类变成了私有权限
		//m_C = 10;//父类中私有权限成员,子类访问不到
	}
};

class GrandSon3 :public Son3
{
public:
	void func()
	{
	//	m_A = 10;//到了Son3变成了私有属性，即使是儿子也是访问不到
	//	m_B = 10;//到了Son3变成了私有属性，即使是儿子也是访问不到
	//	m_C = 10;//到了Son3变成了私有属性，即使是儿子也是访问不到
	}
};

void test01()
{
	Son1 s1;
	s1.m_A = 100;
	//s1.m_B = 100;//保护属性，类外不可以访问
	//s1.m_C = 100;//私有属性，类外不可以访问

	Son2 s2;
	//s2.m_A = 100;//在son2中变为了保护权限，类外访问不到
	//s2.m_B = 100;//在son2中变为了保护权限，类外访问不到

	Son3 s3;
	//s3.m_A = 100;//在son3中变为了私有权限，类外访问不到
	//s3.m_B = 100;//在son3中变为了私有权限，类外访问不到
}

int main()
{
	test01();
	system("pause");
	return 0;
}