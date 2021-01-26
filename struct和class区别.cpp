#include<iostream>
using namespace std;

class C1//默认权限是私有
{
	int m_A;
};

struct C2//默认权限是公共
{
	int m_A;
};

int main()
{
	C1 c1;
	c1.m_A = 100;//私有无法访问

	C2 c2;
	c2.m_A = 100;//共有可以访问

	system("pasue");

	return 0;
}