#include<iostream>
#include<fstream>
using namespace std;

void test01() 
{
	ofstream ofs;//����������

	//Ĭ�Ϻ���Ŀ��ַ��ͬ    E:\���\������\C++����Դ\2021�¹滮\�ļ�
	ofs.open("test.txt", ios::out);//���ļ�

	ofs << "����������" << endl;//д������
	ofs << "�Ա� ����" << endl;

	ofs.close();//�ر��ļ�
}

int main()
{
	test01();
	system("pause");

	return 0;
}