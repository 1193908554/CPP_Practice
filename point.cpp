#include"point.h"
//设计一个圆形类和点类，计算点和原的关系
//点在圆上
//点在圆内
//点在圆外


//设置x坐标
void Point::setX(int x)
{
	m_x = x;
}
//获取x坐标
int Point::getX()
{
	return m_x;
}
//设置y坐标
void Point::setY(int y)
{
	m_y = y;
}
//获取y坐标
int Point::getY()
{
	return m_y;
}