#include<iostream>
using namespace std;

void test01()
{
	pair<string, int>p("��ķ", 13);//��һ�ַ�ʽ

	cout << "������" << p.first << ",���䣺" << p.second << endl;

	pair<string, int>p2 = make_pair("jerry", 30);//�ڶ��ַ�ʽ
	cout << "������" << p2.first << ",���䣺" << p2.second << endl;

}

int main()
{
	test01();
	system("pause");
	return 0;
}