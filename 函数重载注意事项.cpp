#include<iostream>
using namespace std;

//������Ϊ��������

void func(int &a)//int &a = 10;�﷨��ͨ��
{
	cout << "func(int &a)����" << endl;
}
void func(const int& a)//int e = 10;const int &a = e;
{
	cout << "func(const int &a)����" << endl;
}

//����������������Ĭ�ϲ���
void func2(int a, int b = 10)
{
	cout << "func2(int &a)����" << endl;
}
void func2(int a = 10)
{
	cout << "func2(int &a)����" << endl;
}
int main()
{
	int a = 10;
	func(a);//a�Ǳ��� ���߲���const��

	func(10);//10�ǳ���������const��

	func2(10);//��������������Ĭ�ϲ��������ֶ����ԡ����������������
	system("pause");
	return 0;
}