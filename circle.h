#pragma once  //��ֹͷ�ļ��ظ�
#include<iostream>
#include"point.h"
using namespace std;

class Circle
{
public:
	//���ð뾶
	void setR(int r);

	//��ȡ�뾶
	int getR();

	//����Բ��
	void setCenter(Point center);

	//��ȡԲ��
	Point getCenter();
 
private:
	int m_R;//�뾶

	Point m_Center;//Բ��
};