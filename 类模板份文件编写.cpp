#include"Person.hpp"

//��һ�ֽ����ʽ
//#include "Person.cpp"

//�ڶ��ֽ����ʽ     ��.h�͡�cpp����д��һ��  ����׺����Ϊ.hpp


void test01()
{
	Person<string, int> p("ռɽ", 12);
	p.showPerson();
}

int main()
{
	test01();
	system("pause");

	return 0;
}