#include<iostream>
#include<string>
using namespace std;

class Building
{
	//�ú������Է��ʱ�����˽�г�Ա
	friend void goodGay(Building* building);
public:
	Building()
	{
		m_SittingRoom = "����";
		m_BedRoom = "����";
	}

public:
	string m_SittingRoom;//����

private:
	string m_BedRoom;//����

};

//ȫ�ֺ���  �û���
void goodGay(Building *building)
{
	cout << "�û��ѵ�ȫ�ֺ������ڱ�����" << building->m_SittingRoom << endl;

	cout << "�û��ѵ�ȫ�ֺ������ڱ�����" << building->m_BedRoom << endl;
}

void test01()
{
	Building building;
	goodGay(&building);
}

int main()
{
	test01();
	system("pause");

	return 0;
}