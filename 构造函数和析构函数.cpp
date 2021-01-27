#include<iostream>
using namespace std;

class Person
{
public:
	Person()//无参构造函数
	{
		cout << "Person构造函数调用" << endl;
	}

	~Person()//析构函数
	{
		cout << "Person析构函数调用" << endl;
	}
};

void test01()
{
	Person p;//栈上，test01执行完毕就会释放   释放前执行析构函数
}

int main()
{
	test01();

	Person p2;
	//如果我们把对象创建在主函数中，会导致对象的声明周期变长，
	//可能看不到析构函数的调用

	system("pause");

	return 0;
}