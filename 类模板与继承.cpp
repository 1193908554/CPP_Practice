#include<iostream>
using namespace std;

template<class T>
class Base
{
public:
	T m;
};

//class Son :public Base//错误，必须要知道父类中的T类型，才能继承给子类
class Son :public Base<int>
{
	
};

void test01()
{
	Son s;
	s.m = 120;
}

//灵活指定父类中的T类型，子类也需要是类模板
template<class T1, class T2>
class Son2 :public Base<T2>//父类中就成了字符型
{
public:
	Son2()
	{
		cout << "T1的类型为：" << typeid(T1).name() << endl;//int
		cout << "T2的类型为：" << typeid(T2).name() << endl;//char
    }
	T1 obj;//这是整形
};

void test02()
{
	Son2<int, char> s;
}

int main()
{
	test01();
	test02();

	system("pause");

	return 0;
}