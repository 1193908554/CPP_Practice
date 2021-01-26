#pragma once  //防止头文件重复
#include<iostream>
#include"point.h"
using namespace std;

class Circle
{
public:
	//设置半径
	void setR(int r);

	//获取半径
	int getR();

	//设置圆形
	void setCenter(Point center);

	//获取圆形
	Point getCenter();
 
private:
	int m_R;//半径

	Point m_Center;//圆心
};
