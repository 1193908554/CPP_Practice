#include"Person.hpp"

//第一种解决方式
//#include "Person.cpp"

//第二种解决方式     将.h和。cpp内容写到一起  将后缀名改为.hpp


void test01()
{
	Person<string, int> p("占山", 12);
	p.showPerson();
}

int main()
{
	test01();
	system("pause");

	return 0;
}