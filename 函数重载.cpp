#include<iostream>
using namespace std;

//��������
//��������������
//ͬһ��������
//����������ͬ
//����������ͬ�������Ͳ�ͬ����˳��ͬ
void func()
{
	cout << "func�ĵ���1" << endl;
}
void func(int a)
{
	cout << "func(int a)�ĵ���" << endl;
}
void func(double a)
{
	cout << "func(double a)�ĵ���3" << endl;
}
void func(int a, double b)
{
	cout << "func(int a, double b)�ĵ���4" << endl;
}
void func(double a, int b)
{
	cout << "func(double a, int b)�ĵ���4" << endl;
}

int main()
{
	func();
	func(10);
	func(10.5);
	func(10, 10.5);
	func(10.5, 5);
	return 0;
}