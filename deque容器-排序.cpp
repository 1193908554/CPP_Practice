#include<iostream>
#include<deque>
#include<algorithm>//��׼�㷨ͷ�ļ�
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
	deque<int>d;//Ĭ�Ϲ���
	d.push_back(10);
	d.push_back(20);
	d.push_back(30);
	d.push_front(100);
	d.push_front(200);
	d.push_front(300);

	printDeque(d);//300 200 100 10 20 30

	sort(d.begin(), d.end());//Ĭ������
	//����֧��������ʵĵ���������������֧��sort�㷨
	cout << "�����" << endl;
	printDeque(d);//10 20 30 100 200 300

	
}


int main()
{
	test();
	system("pause");
	return 0;
}