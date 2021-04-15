#include<iostream>
#include<string>
using namespace std;

//函数对象在使用时，可以像普通函数那么调用，可以有返回值
class MyAdd
{
public:
	int operator()(int v1, int v2)
	{
		return v1 + v2;
	}
};


void test01()
{
	MyAdd myadd;
	cout << myadd(10, 10) << endl;//这就函数对象的调用
}

//函数对象超过普通函数的概念，函数对象可以有自己的状态
class MyPrint
{
public:
	MyPrint()
	{
		this->count = 0;
	}
	void operator()(string  str)
	{
		cout << str << endl;
		this->count++;
	}

	int count;
};

void test02()
{
	MyPrint myprint;
	myprint("afasdf");
	myprint("afasdf");
	myprint("afasdf");
	cout << "myprint被调用的次数为" << myprint.count << endl;
}


//函数对象可以作为参数传递
void doPrint(MyPrint& mp, string str)
{
	mp(str);//输出
}

void test03()
{
	MyPrint myprint;
	doPrint(myprint,"Hello C++");
}

int main()
{
	test01();
	test02();
	test03();
	system("pause");
	return 0;
}