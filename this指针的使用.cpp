#include<iostream>
using namespace std;

class Person
{
public:
	Person(int age)
	{
		 this->age = age;
	}

	Person& PersonAddAge(Person &p)//���ر���ʹ�����÷�ʽ   
	{//�������ֵ�ķ�ʽ�����ǿ���һ���µ����ݣ�������һ���µĶ���
	 //
		this->age += p.age;

		//thisָ��p2��ָ�룬��*thisָ��ľ���p2����
		return *this;
	}

	int age;//m��ʾ��Աmember
};

//������Ƴ�ͻ
void test01()
{
	Person p1(18);
	cout << "p1������" << p1.age << endl;
}

//���ض�������*this
void test02()
{
	Person p1(10);

	Person p2(10);
	
	//��ʽ���˼��
	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
	
	cout << "p2������" << p2.age << endl;
}

int main()
{
	test01();
	test02();

	system("pause");

	return 0;
}