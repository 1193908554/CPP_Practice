#include<iostream>
#include<fstream>
#include<string>
using namespace std;

void test01()
{
	ifstream ifs;

	//���ļ������ж��Ƿ�򿪳ɹ�
	ifs.open("test.txt", ios::in);

	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ��" << endl;
		return ;
	}

	//! ���ļ�
	//��һ��
	char buf[1024] = { 0 };
	while (ifs >> buf)
	{
		cout << buf << endl;
	}

	//�ڶ���
	char buf2[1024] = { 0 };
	while (ifs.getline(buf2, sizeof(buf2)))
	{
		cout << buf2 << endl;
	}

	//������
	string buf3;
	while (getline(ifs, buf3))
	{
		cout << buf3 << endl;
	}

	//������
	char c;//Ч����
	while ((c = ifs.get()) != EOF)//EOF  �ļ�β����һ����ʶ��end of file
	{
		cout << c;
	}

	ifs.close();//�ر��ļ�
}

int main()
{
	test01();
	system("pause");

	return 0;
}