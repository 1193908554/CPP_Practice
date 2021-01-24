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
		cout << "ÐÕÃû£º" << h[i].name << ",ÄêÁä£º" << h[i].age << ",ÐÔ±ð£º" << h[i].sex << endl;
	}
}

int main()
{
	struct hero h[5] = 
	{
		{"Áõ±¸",23,"ÄÐ"},
		{"¹ØÓð",22,"ÄÐ"},
		{"ÕÅ·É",20,"ÄÐ"},
		{"ÕÔÔÆ",21,"ÄÐ"},
		{"õõ²õ",19,"Å®"}
	};
	int len = sizeof(h) / sizeof(h[0]);
	cout << "ÅÅÐòÇ°£º" << endl;
	print(h, len);
	bubble_sort(h, len);
	cout << "ÅÅÐòºó£º" << endl;
	print(h, len);
}