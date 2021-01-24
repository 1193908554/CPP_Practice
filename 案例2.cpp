#include<iostream>
using namespace std;

struct hero
{
	string name;
	int age;
	string sex;
};

void bubble_sort(struct hero h[], int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (h[j].age > h[j + 1].age)
			{
				struct hero tmp = h[j];
				h[j] = h[j + 1];
				h[j + 1] = tmp;
			}
		}
	}
}

void print(struct hero h[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "������" << h[i].name << ",���䣺" << h[i].age << ",�Ա�" << h[i].sex << endl;
	}
}

int main()
{
	struct hero h[5] = 
	{
		{"����",23,"��"},
		{"����",22,"��"},
		{"�ŷ�",20,"��"},
		{"����",21,"��"},
		{"����",19,"Ů"}
	};
	int len = sizeof(h) / sizeof(h[0]);
	cout << "����ǰ��" << endl;
	print(h, len);
	bubble_sort(h, len);
	cout << "�����" << endl;
	print(h, len);
}