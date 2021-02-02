#include<iostream>
using namespace std;

class Person
{
public:
	Person(int age)
	{
		 this->age = age;
	}

	Person& PersonAddAge(Person &p)//返回必须使用引用方式   
	{//如果返回值的方式，就是拷贝一份新的数据，创建了一份新的对象
	 //
		this->age += p.age;

		//this指向p2的指针，而*this指向的就是p2本体
		return *this;
	}

	int age;//m表示成员member
};

//解决名称冲突
void test01()
{
	Person p1(18);
	cout << "p1的年龄" << p1.age << endl;
}

//返回对象本身用*this
void test02()
{
	Person p1(10);

	Person p2(10);
	
	//链式编程思想
	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
	
	cout << "p2的年龄" << p2.age << endl;
}

int main()
{
	test01();
	test02();

	system("pause");

	return 0;
}