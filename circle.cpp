#include"circle.h"


//设置半径
void Circle::setR(int r)
{
	m_R = r;
}
//获取半径
int Circle::getR()
{
	return m_R;
}
//设置圆形
void Circle::setCenter(Point center)
{
	m_Center = center;
}
//获取圆形
Point Circle::getCenter()
{
	return m_Center;
}

