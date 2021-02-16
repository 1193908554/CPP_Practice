#include<iostream>
#include<string>
using namespace std;

class Animal
{
public:
	Animal()
	{
		cout << "Animal构造函数调用" << endl;
	}

	//virtual ~Animal()//虚析构
	//{
	//	cout << "Animal虚析构函数调用" << endl;
	//}

	//纯虚析构
	virtual ~Animal() = 0;

	//纯虚函数
	//! 需要有具体实现，防止父类也有属性开辟到堆区
	virtual void speak() = 0;
};

Animal::~Animal()
{
	cout << "Animal纯虚析构函数调用" << endl;
}

class Cat :public Animal
{
public:

	Cat(string name)
	{
		cout << "Cat构造函数调用" << endl;
		m_Name = new string(name);
	}

	virtual void speak()
	{
		cout << *m_Name << "小猫在说话" << endl;
	}

	~Cat()
	{
		if (m_Name != NULL)
		{
			cout << "Cat析构函数调用" << endl;
			delete m_Name;
			m_Name = NULL;
		}
	}

	string *m_Name;
};

void test01()
{
	Animal* animal = new Cat("Tom");
	animal->speak();

	//? 父类指针在析构时不会调用子类的析构函数，
	//? 导致子类如果有堆区属性，出现内存泄漏
	delete animal;
}


int main()
{
	test01();

	system("pause");

	return 0;
}