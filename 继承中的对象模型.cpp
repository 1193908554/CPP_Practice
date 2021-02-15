#include<iostream>
using namespace std;

class Base
{

public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;//私有属性也会被继承下去，但是你不能访问
};

class Son :public Base
{
public:
	int m_D;
};

void test()
{//父类中所有非静态成员属性都会被子类继承下去
 //父类中私有属性 是被编译器隐藏了  因此访问不到   但是的确继承下去了
	cout << "size of Son = " << sizeof(Son) << endl;//16
}

int main()
{
	test();

	system("pause");
	return 0;
}