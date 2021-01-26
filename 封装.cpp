#include<iostream>
using namespace std;

const double PI = 3.14;

//设计一个圆类，求圆的周长 
class Circle
{
	//访问权限
	//公共权限
public:
	//属性
	int m_r;
	//行为
	//周长
	double calaulateZC()
	{
		return 2 * PI * m_r;
	}
};

int main()
{
	//创建圆的对象
	Circle c1;
	//给圆的对象属性赋值
	c1.m_r = 10;

	cout << "圆的周长：" << c1.calaulateZC() << endl;

	system("pause");

	return 0;
}