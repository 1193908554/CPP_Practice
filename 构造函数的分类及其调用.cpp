#include<iostream>
using namespace std;

class Person
{
public:
	Person()//无参构造（默认构造）
	{
		cout << "无参构造函数调用" << endl;
	}
	Person(int a)//有参构造
	{
		cout << "有参构造函数调用" << endl;
	}
	Person(const Person& p)//拷贝构造函数   格式const 类名& p
	{//将传入的数据拷贝到当前属性上面
		age = p.age;
		cout << "拷贝构造函数调用" << endl;
	}

	~Person()
	{
		cout << "析构函数调用" << endl;
	}
private:
	int age;
};

//调用
void test01()
{
	//括号法
	//调用默认构造方法不要加（）
	Person p;//默认无参
	Person p2(10);//有参调用
	Person p3(p2);//拷贝调用

	//显示法
	//Person（10）匿名对象   特征：当前行执行结束后，系统会立即回收掉。
	Person p4;//默认无参
	Person p5 = Person(10);//有参调用
	Person p6 = Person(p2);//拷贝调用

	//隐形转换法
	Person p7 = 10;//有参调用
	Person p8 = p7;//拷贝调用
}

int main()
{
	test01();

	system("pause");

	return 0;
}