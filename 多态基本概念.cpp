#include<iostream>
using namespace std;

class Animal// ������
{
public:
	//! �麯��
	// ����ǰ�����virtual�ؼ��֣�����麯��������ʱ�Ͳ���ȷ�����ĸ�����������

	virtual void speak()
	{
		cout << "������˵��" << endl;
	}
};

class Cat :public Animal// è
{
public:
	void speak()
	{
		cout << "Сè��˵��" << endl;
	}
};

class Dog :public Animal// ��
{
public:
	void speak()
	{
		cout << "С����˵��" << endl;
	}
};

//ִ��˵���ĺ���
//? ��ַ���  ������Animal����   void doSpeak(Animal& animal)
//? �����ִ��è˵������������Ͳ�����ǰ�󶨣�
//? ��Ҫ�����н׶ν��а󶨣���ַ��󶨣����ຯ����virtual��
void doSpeak(Animal& animal) //? Animal &a = cat;
{
	animal.speak();
}

void test01()
{
	Cat cat;
	doSpeak(cat);
	Dog dog;
	doSpeak(dog);
}

void test02()
{
	cout << "sizeof Animal = " << sizeof(Animal) << endl;
}

int main()
{
	test01();
	test02();
	system("pause");

	return 0;
}