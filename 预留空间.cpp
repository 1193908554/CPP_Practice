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

void test01()
{
	vector<int> v1;//无参构造

	//利用reserve预留空间
	v1.reserve(100000);

	int num = 0;//统计开辟次数
	int* p = NULL;
	for (int i = 0; i < 100000; i++)
	{
		v1.push_back(i);
		if(p != &v1[0])
		{
			p = &v1[0];
			num++;
		}
	}
	cout << num << endl;//30次    预留之后就只分配一次就可以了

}

int main()
{
	test01();
	system("pause");

	return 0;
}