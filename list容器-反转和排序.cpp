#include<iostream>
#include<list>
#include<algorithm>
using namespace std;

void printList(const list<int>& L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

bool myCompare(int v1, int v2)//���ý���
{
	//����   ���õ�һ�������ڵڶ�����
	return v1 > v2;
}

void test01()
{
	list<int>L;

	L.push_back(10);
	L.push_back(20);
	L.push_back(40);
	L.push_back(5);

	printList(L);//10 20 40 5

	//��ת��
	L.reverse();
	printList(L);//5 40 20 10

	//����  
	//���в�֧��������ʵ��������������������ñ�׼�㷨
	//Ȼ���ڲ����ṩһЩ�㷨

	L.sort();//Ĭ������
 	//sort(L.begin(), L.end());//    ��������
	printList(L);//5 10 20 40

	L.sort(myCompare);//����
	printList(L);//40 20 10 5
}

int main()
{
	test01();
	system("pause");
	return 0;
}