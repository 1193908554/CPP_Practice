#include<iostream>
#include"circle.h"
#include"point.h" 

//���һ��Բ����͵��࣬������ԭ�Ĺ�ϵ
//����Բ��
//����Բ��
//����Բ��

//class Point
//{
//public:
//	//����x����
//	void setX(int x)
//	{
//		m_x = x;
//	}
//	//��ȡx����
//	int getX()
//	{
//		return m_x;
//	}
//	//����y����
//	void setY(int y)
//	{
//		m_y = y;
//	}
//	//��ȡy����
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
//	//���ð뾶
//	void setR(int r)
//	{
//		m_R = r;
//	}
//	//��ȡ�뾶
//	int getR()
//	{
//		return m_R;
//	}
//	//����Բ��
//	void setCenter(Point center)
//	{
//		m_Center = center;
//	}
//	//��ȡԲ��
//	Point getCenter()
//	{
//		return m_Center;
//	}
//private:
//	int m_R;//�뾶
//	
//	Point m_Center;//Բ��
//};

//�жϵ��Բ�Ĺ�ϵ
void isInCircle(Circle& c, Point& p)
{
	//��������֮���ƽ��
	int distance = 
	(c.getCenter().getX() - p.getX())* (c.getCenter().getX() - p.getX()) +
		(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());

	//����뾶��ƽ��
	int rDistance = p.getX() * p.getY();

	if (distance == rDistance)
	{
		cout << "����Բ��" << endl;
	}
	else if (distance > rDistance)
	{
		cout << "����Բ��" << endl;
	}
	else
	{
		cout << "����Բ��" << endl;
	}
}

int main()
{
	//����Բ
	Circle c;
	c.setR(10);
	Point center;
	center.setX(10);
	center.setY(0);
	c.setCenter(center);

	//������
	Point p;
	p.setX(10);
	//p.setY(10);//Բ��
	//p.setY(11);//Բ��
	p.setY(9);//Բ��

	isInCircle(c, p);

	system("pause");

	return 0;
}
