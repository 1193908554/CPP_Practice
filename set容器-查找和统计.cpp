#include<iostream>
#include<set>
using namespace std;

//����
void test01()
{
	set<int>s1;
	
	//��������
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);

	set<int>::iterator pos = s1.find(100);
	if (pos != s1.end())
	{
		cout << "�ҵ�:" << *pos << endl;
	}
	else
	{
		cout << "δ�ҵ�" << endl;
	}
}

//ͳ��
void test02()
{
	set<int>s1;

	//��������
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);
	s1.insert(30);

	//ͳ��30�ĸ���
	int num = s1.count(300);//���ܲ��뼸�ζ���1��û�о�0

	cout << "������" << num << endl;
}

int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}