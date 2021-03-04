#include<iostream>
#include<set>
using namespace std;

void printSet(const set<int>s)
{
	for (set<int>::const_iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//��С
void test01()
{
	set<int>s1;

	s1.insert(10);
	s1.insert(130);
	s1.insert(80);
	s1.insert(20);

	//��ӡ����
	printSet(s1);

	//�ж��Ƿ�Ϊ��
	if (s1.empty())
	{
		cout << "Ϊ��" << endl;
	}
	else
	{
		cout << "��Ϊ��" << endl;
		cout << "��С��" << s1.size() << endl;
	}
}

//����
void test02()
{
	set<int>s1;

	s1.insert(10);
	s1.insert(130);
	s1.insert(80);
	s1.insert(20);

	set<int>s2;

	s2.insert(12);
	s2.insert(5);
	s2.insert(20);
	s2.insert(15);

	cout << "����ǰ��" << endl;

	printSet(s1);//10 20 80 130
	printSet(s2);//5 12 15 20

	cout << "������" << endl;
	
	s1.swap(s2);//����
	printSet(s1);//5 12 15 20
	printSet(s2);//10 20 80 130
}

int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}