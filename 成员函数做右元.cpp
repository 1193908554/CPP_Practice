#include<iostream>
#include<string>
using namespace std;

class Building;//提前声明，防止报错
class GoodGay
{
public:
	GoodGay();
	void visit();//参观函数 访问Building中的属性
	void visit2();//参观函数 不访问Building中的属性
	Building* building;
};

class Building
{
	//告诉编译器，GoodGay类下的visit成员函数作为
	//本类的好朋友，可与访问私有内容
	friend void GoodGay::visit();
public:
	Building();

public:
	string m_SittingRoom;//客厅

private:
	string m_BedRoom;//卧室

};

//类外写成员函数
Building::Building()
{
	m_SittingRoom = "客厅";
	m_BedRoom = "卧室";
}

GoodGay::GoodGay()
{
	//创建建筑物对象
	building = new Building;
}

void GoodGay::visit()
{
	cout << "好基友类正在访问：" << building->m_SittingRoom << endl;

	cout << "好基友类正在访问：" << building->m_BedRoom << endl;
}

void GoodGay::visit2()
{
	cout << "好基友类正在访问：" << building->m_SittingRoom << endl;

	cout << "好基友类正在访问：" << building->m_BedRoom << endl;
}

void test01()
{
	GoodGay gg;
	gg.visit();
}

int main()
{
	test01();
	system("pause");

	return 0;
}