#include<iostream>
#include<vector>
using namespace std;

void test01()
{
	vector<int> v1;//�޲ι���

	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}


	//����[]������
	for (int i = 0; i < 10; i++)
	{
		cout << v1[i] << " ";
	}
	cout << endl;

	//����at��������
	for (int i = 0; i < 10; i++)
	{
		cout << v1.at(i) << " ";
	}
	cout << endl;

	//��ȡ��һ��Ԫ��
	cout << "��һ��Ԫ�أ�" << v1.front() << endl;

	//��ȡ���һ��Ԫ��
	cout << "���һ��Ԫ�أ�" << v1.back() << endl;

}

int main()
{
	test01();
	system("pause");

	return 0;
}