#include<iostream>
using namespace std;

class Cube//������
{
public:
	//���ó�
	void setL(int l)
	{
		m_L = l;
	}
	//��ȡ��
	int getL()
	{
		return m_L;
	}
	//���ÿ�
	void setW(int w)
	{
		m_W = w;
	}
	//��ȡ��
	int getW()
	{
		return m_W;
	}
	//���ø�
	void setH(int h)
	{
		m_H = h;
	}
	//��ȡ��
	int getH()
	{
		return m_H;
	}
	//��ȡ���������
	int calculateS()
	{
		return 2 * m_L * m_W + 2 * m_W * m_H + 2 * m_L * m_H;
	}
	//��ȡ���������
	int calculateV()
	{
		return m_L * m_H * m_W;
	}
	//���ó�Ա�����ж������������Ƿ����
	bool isSameByClass(Cube &c)
	{
		if (m_L == c.getL() && m_W == c.getW() && m_H == c.getH())
		{
			return true;
		}
		return false;
	}

private:
	int m_L;//��
	int m_W;//��
	int m_H;//��
};

//����ȫ�ֺ����ж����������Ƿ����
bool isSame(Cube& c1, Cube& c2)
{
	if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH())
	{
		return true;
	}
	return false;
}

int main()
{
	Cube c1;
	c1.setL(10);
	c1.setW(10);
	c1.setH(10);

	cout << "c1�������" << c1.calculateS() << endl;
	cout << "c1�������" << c1.calculateV() << endl;

	Cube c2;
	c2.setL(10);
	c2.setW(10);
	c2.setH(10);

	cout << "c2�������" << c1.calculateS() << endl;
	cout << "c2�������" << c1.calculateV() << endl;

	bool ret = isSame(c1, c2);
	if (ret)
	{
		cout << "���" << endl;
	}
	else
	{
		cout << "�����" << endl;
	}

	bool ret2 = c1.isSameByClass(c2);
	if (ret2)
	{
		cout << "���" << endl;
	}
	else
	{
		cout << "�����" << endl;
	}

	system("pause");

	return 0;
}