#include<iostream>
#include<string>
using namespace std;

void test01()
{
	string s1;//Ĭ�Ϲ���

	const char* str = "Hello World!";
	string s2(str);//ʹ��c���Է���ַ�����ʼ��
	cout << s2 << endl;

	string s3(s2);//ʹ��C++���Է���ַ�����ʼ��
	cout << s3 << endl;

	string s4(10, 'a');//ʹ��n���ַ�a��ʼ��
	cout << s4 << endl;
}

int main()
{
	test01();
	system("pause");

	return 0;
}