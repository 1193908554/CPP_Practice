#include<iostream>
using namespace std;

//动物类
class Animal
{
public:
	int m_Age;
};

//利用虚继承  解决菱形继承问题
//继承之前  加上关键字 virtual  变成虚继承
//Animal类称为 虚基类
//羊
class Sheep :virtual public Animal {};
//驼
class Tuo :virtual public Animal {};
//羊驼
class SheepTuo :public Sheep, public Tuo {};

void test01()
{
	SheepTuo st;

	/*st.Sheep.m_Age = 18;
	st.Tuo::m_Age = 88;*/
	st.m_Age = 50;

	//当菱形继承的时候，俩个父类拥有相同的数据，需要加以作用域区分
	cout << "st.sheep::m_Age" << st.Sheep::m_Age << endl;
	cout << "st.tuo:;m_Age" << st.Tuo::m_Age << endl;

	//但是这份数据我们只要一份，资源浪费
}

int main()
{
	test01();
	system("pause");
	return 0;
}