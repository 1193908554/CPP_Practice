#include<iostream>
using namespace std;

class Person
{
public:
	void showClassName()
	{
		cout << "this is Perosn" << endl;
	}
	
	void showPersonAge()
	{//报错因为传入指针为NULL
		if (this == NULL)//提高代码的健壮性
		{
			return ;
		}
		cout << "age is " << m_Age << endl;
	}

	int m_Age;
};


void test01()
{
	Person* p = NULL;

	p->showClassName();

	p->showPersonAge();
}


int main()
{
	test01();

	system("pause");

	return 0;
}