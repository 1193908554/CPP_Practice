#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class GreaterFive
{
public:
	bool operator()(int val)//һԪν��
	{
		return val > 5;
	}
};

void test01()
{
	vector<int>v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	//���������д���5������
	//GreaterFive()������������
	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
	//find_if������������������    
	//�ҵ����ض��ڵ�����λ�ã��Ҳ�������v.end����λ��

	if (it == v.end())
	{
		cout << "δ�ҵ�" << endl;
	}
	else
	{
		cout << "�ҵ���λ��" << *it << endl;
	}
	
}

int main()
{
	test01();
	system("pause");
	return 0;
}