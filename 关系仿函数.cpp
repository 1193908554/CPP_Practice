#include<iostream>
#include<vector>
#include<functional>//�ڽ���������ͷ�ļ�
#include<algorithm>//�㷨ͷ�ļ�
using namespace std;

class MyCompare//��ηº�������ʡ��
{
public:
	bool operator()(int n, int m)
	{
		return n > m;//����
	}
};

void test01()
{
	vector<int>v;

	v.push_back(10);
	v.push_back(30);
	v.push_back(50);
	v.push_back(40);
	v.push_back(20);

	cout << "����ǰ" << endl;

	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	//����
	//sort(v.begin(), v.end(), MyCompare());
	sort(v.begin(), v.end(), greater<int>());//greater-����
	
	cout << "�����" << endl;
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}