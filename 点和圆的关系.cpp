#include<iostream>
#include"circle.h"
#include"point.h" 

//设计一个圆形类和点类，计算点和原的关系
//点在圆上
//点在圆内
//点在圆外

//class Point
//{
//public:
//	//设置x坐标
//	void setX(int x)
//	{
//		m_x = x;
//	}
//	//获取x坐标
//	int getX()
//	{
//		return m_x;
//	}
//	//设置y坐标
//	void setY(int y)
//	{
//		m_y = y;
//	}
//	//获取y坐标
//	int getY()
//	{
//		return m_y;
//	}
//private:
//	int m_x;
//	int m_y;
//};
//
//
//class Circle
//{
//public:
//	//设置半径
//	void setR(int r)
//	{
//		m_R = r;
//	}
//	//获取半径
//	int getR()
//	{
//		return m_R;
//	}
//	//设置圆形
//	void setCenter(Point center)
//	{
//		m_Center = center;
//	}
//	//获取圆形
//	Point getCenter()
//	{
//		return m_Center;
//	}
//private:
//	int m_R;//半径
//	
//	Point m_Center;//圆心
//};

//判断点和圆的关系
void isInCircle(Circle& c, Point& p)
{
	//计算俩点之间的平方
	int distance = 
	(c.getCenter().getX() - p.getX())* (c.getCenter().getX() - p.getX()) +
		(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());

	//计算半径的平方
	int rDistance = p.getX() * p.getY();

	if (distance == rDistance)
	{
		cout << "点在圆上" << endl;
	}
	else if (distance > rDistance)
	{
		cout << "点在圆外" << endl;
	}
	else
	{
		cout << "点在圆内" << endl;
	}
}

int main()
{
	//创建圆
	Circle c;
	c.setR(10);
	Point center;
	center.setX(10);
	center.setY(0);
	c.setCenter(center);

	//创建点
	Point p;
	p.setX(10);
	//p.setY(10);//圆上
	//p.setY(11);//圆外
	p.setY(9);//圆内

	isInCircle(c, p);

	system("pause");

	return 0;
}
