#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class MyCompare//�º���
{
public:
	bool operator()(int val1, int val2)//��Ԫν��
	{
		return val1 > val2;//���ý���
	}
};

void test01()
{
	vector<int>v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(50);
	v.push_back(40);
	v.push_back(30);

	sort(v.begin(),v.end());

	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	//ʹ�ú������󣬸ı��㷨���ԣ���Ϊ�������Ϊ�Ӵ�С
	sort(v.begin(), v.end(), MyCompare());

	cout << "���������" << endl;
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}

}

int main()
{
	test01();
	system("pause");
	return 0;
}