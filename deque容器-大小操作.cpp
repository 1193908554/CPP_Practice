#include<iostream>
#include<deque>
using namespace std;

void printDeque(const deque<int>& q)
{
	for (deque<int>::const_iterator it = q.begin(); it != q.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test()
{
	deque<int>d1;//Ĭ�Ϲ���
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printDeque(d1);

	if (d1.empty())//�ж��Ƿ�Ϊ��    ��-��
	{
		cout << "Ϊ�գ�" << endl;
	}
	else
	{
		cout << "��Ϊ�գ�" << endl;
		cout << "��С:" << d1.size() << endl;
		//dequeû����������
	}

	d1.resize(15);
	printDeque(d1);

	d1.resize(20, 1);
	printDeque(d1);

	d1.resize(11);
	printDeque(d1);

}


int main()
{
	test();
	system("pause");
	return 0;
}