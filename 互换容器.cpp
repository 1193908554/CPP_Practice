#include<iostream>
#include<vector>
using namespace std;

void printVector(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
//����ʹ��
void test01()
{
	vector<int> v1;//�޲ι���

	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}

	//����ǰ
	cout << "����ǰ" << endl;
	printVector(v1);

	vector<int> v2;//�޲ι���

	for (int i = 0; i < 10; i++)
	{
		v2.push_back(10 - i);
	}

	printVector(v2);

	//������
	cout << "������" << endl;
	v1.swap(v2);

	printVector(v1);
	printVector(v2);

}

//ʵ����;

void test02()
{
	vector<int>v;
	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);
	}

	cout << "������" << v.capacity() << endl;//138255
	cout << "��С��" << v.size() << endl; //100000

	v.resize(3);//����ָ����С
	cout << "������" << v.capacity() << endl;//������û�б仯138255
	cout << "��С��" << v.size() << endl;//100000

	//����swap���������ڴ�ռ�
	vector<int>(v).swap(v);
	//����v�Ĵ�С����һ����������Ȼ�󽻻�    ����������ִ�����ͻ�����
	cout << "������" << v.capacity() << endl;//3
	cout << "��С��" << v.size() << endl;//3
}

int main()
{
	test01();
	test02();
	system("pause");

	return 0;
}