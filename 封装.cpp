#include<iostream>
using namespace std;

const double PI = 3.14;

//���һ��Բ�࣬��Բ���ܳ� 
class Circle
{
	//����Ȩ��
	//����Ȩ��
public:
	//����
	int m_r;
	//��Ϊ
	//�ܳ�
	double calaulateZC()
	{
		return 2 * PI * m_r;
	}
};

int main()
{
	//����Բ�Ķ���
	Circle c1;
	//��Բ�Ķ������Ը�ֵ
	c1.m_r = 10;

	cout << "Բ���ܳ���" << c1.calaulateZC() << endl;

	system("pause");

	return 0;
}