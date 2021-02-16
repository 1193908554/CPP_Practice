#include<iostream>
using namespace std;

class Animal// 动物类
{
public:
	//! 虚函数
	// 函数前面加上virtual关键字，变成虚函数，编译时就不能确定是哪个函数调用了

	virtual void speak()
	{
		cout << "动物在说话" << endl;
	}
};

class Cat :public Animal// 猫
{
public:
	void speak()
	{
		cout << "小猫在说话" << endl;
	}
};

class Dog :public Animal// 狗
{
public:
	void speak()
	{
		cout << "小狗在说话" << endl;
	}
};

//执行说话的函数
//? 地址早绑定  都会走Animal函数   void doSpeak(Animal& animal)
//? 如果想执行猫说话，这个函数就不能提前绑定，
//? 需要在运行阶段进行绑定，地址晚绑定（父类函数加virtual）
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