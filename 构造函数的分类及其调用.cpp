#include<iostream>
using namespace std;

class Person
{
public:
	Person()//�޲ι��죨Ĭ�Ϲ��죩
	{
		cout << "�޲ι��캯������" << endl;
	}
	Person(int a)//�вι���
	{
		cout << "�вι��캯������" << endl;
	}
	Person(const Person& p)//�������캯��   ��ʽconst ����& p
	{//����������ݿ�������ǰ��������
		age = p.age;
		cout << "�������캯������" << endl;
	}

	~Person()
	{
		cout << "������������" << endl;
	}
private:
	int age;
};

//����
void test01()
{
	//���ŷ�
	//����Ĭ�Ϲ��췽����Ҫ�ӣ���
	Person p;//Ĭ���޲�
	Person p2(10);//�вε���
	Person p3(p2);//��������

	//��ʾ��
	//Person��10����������   ��������ǰ��ִ�н�����ϵͳ���������յ���
	Person p4;//Ĭ���޲�
	Person p5 = Person(10);//�вε���
	Person p6 = Person(p2);//��������

	//����ת����
	Person p7 = 10;//�вε���
	Person p8 = p7;//��������
}

int main()
{
	test01();

	system("pause");

	return 0;
}