#include<iostream>
using namespace std;
//new�Ļ����﷨
int* func()
{
	//�ڶ���������������
	int* p = new int(10);
	return p;
}

void test01()
{
	int* p = func();
	cout << *p << endl;
	cout << *p << endl;
	//���������ݣ��ɳ���Ա�����٣�����Ա�����ͷ�
	//�ͷ�delete
	delete p;
	//cout << *p << endl;//�ڴ汻�ͷţ��ٴη��ʾ��ǷǷ�
}

//�ڶ�������new����һ������
void test02()
{
	//�����Ǹ��������飬�ڶ���
	int* arr = new int[10];
	for (int i = 0; i < 10; i++)
	{//��ֵ
		arr[i] = i + 100;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
	//�ͷŶ���������
	//�ͷ�����ʱ��Ҫ��[]�ſ���
	delete[] arr;
}


int main()
{
	test01();

	test02();

	system("pause");

	return 0;
}