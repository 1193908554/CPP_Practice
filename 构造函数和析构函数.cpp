#include<iostream>
using namespace std;

class Person
{
public:
	Person()//�޲ι��캯��
	{
		cout << "Person���캯������" << endl;
	}

	~Person()//��������
	{
		cout << "Person������������" << endl;
	}
};

void test01()
{
	Person p;//ջ�ϣ�test01ִ����Ͼͻ��ͷ�   �ͷ�ǰִ����������
}

int main()
{
	test01();

	Person p2;
	//������ǰѶ��󴴽����������У��ᵼ�¶�����������ڱ䳤��
	//���ܿ��������������ĵ���

	system("pause");

	return 0;
}