#include<iostream>
#include<string>
using namespace std;

//����������ʹ��ʱ����������ͨ������ô���ã������з���ֵ
class MyAdd
{
public:
	int operator()(int v1, int v2)
	{
		return v1 + v2;
	}
};


void test01()
{
	MyAdd myadd;
	cout << myadd(10, 10) << endl;//��ͺ�������ĵ���
}

//�������󳬹���ͨ�����ĸ����������������Լ���״̬
class MyPrint
{
public:
	MyPrint()
	{
		this->count = 0;
	}
	void operator()(string  str)
	{
		cout << str << endl;
		this->count++;
	}

	int count;
};

void test02()
{
	MyPrint myprint;
	myprint("afasdf");
	myprint("afasdf");
	myprint("afasdf");
	cout << "myprint�����õĴ���Ϊ" << myprint.count << endl;
}


//�������������Ϊ��������
void doPrint(MyPrint& mp, string str)
{
	mp(str);//���
}

void test03()
{
	MyPrint myprint;
	doPrint(myprint,"Hello C++");
}

int main()
{
	test01();
	test02();
	test03();
	system("pause");
	return 0;
}