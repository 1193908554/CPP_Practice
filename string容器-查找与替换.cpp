#include<iostream>
#include<string>
using namespace std;

//����
void test01()
{
	string str1 = "abcdefgdede";

	int pos = str1.find("de");//�ҵ����ص�һ���±꣬�Ҳ���Ϊ-1
	if (pos == -1)//����������
	{
		cout << "δ�ҵ��ַ���" << endl;
	}
	else
	{
		cout << "�ҵ���pos = " << pos << endl;
	}

	pos = str1.rfind("de");//����������
	if (pos == -1)
	{
		cout << "δ�ҵ��ַ���" << endl;
	}
	else
	{
		cout << "�ҵ���pos = " << pos << endl;
	}
	
}

void test02()
{
	string str1 = "abcdfeg";

	str1.replace(1, 3, "1234");//a1234feg
	//��1��λ���������ַ��滻Ϊ1234

	cout << "str1 = " << str1 << endl;
}

int main(void)
{
	test01();
	test02();
	system("pause");
	return 0;
}