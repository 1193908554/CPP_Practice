#include<iostream>
using namespace std;

////��ͨʵ��
//
////Javaҳ��
//
//class Java
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Ρ���¼��ע��...������ͷ����" << endl;
//	}
//
//	void footer()
//	{
//		cout << "�������ġ�����������վ�ڵ�ͼ...�������ײ���" << endl;
//	}
//
//	void left()
//	{
//		cout << "Java��Python��C++...�����������б�" << endl;
//	}
//
//	void content()
//	{
//		cout << "Javaѧ����Ƶ" << endl;
//	}
//};
//
////Pythonҳ��
//
//class Python
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Ρ���¼��ע��...������ͷ����" << endl;
//	}
//
//	void footer()
//	{
//		cout << "�������ġ�����������վ�ڵ�ͼ...�������ײ���" << endl;
//	}
//
//	void left()
//	{
//		cout << "Java��Python��C++...�����������б�" << endl;
//	}
//
//	void content()
//	{
//		cout << "Pythonѧ����Ƶ" << endl;
//	}
//};

//�̳�ʵ��ҳ��
class BasePage//����
{
public:
	void header()
	{
		cout << "��ҳ�������Ρ���¼��ע��...������ͷ����" << endl;
	}
		
	void footer()
	{
		cout << "�������ġ�����������վ�ڵ�ͼ...�������ײ���" << endl;
	}
		
	void left()
	{
		cout << "Java��Python��C++...�����������б�" << endl;
	}
};

//Javaҳ��
class Java :public BasePage
{
public:
	void content()
	{
		cout << "Javaѧ����Ƶ" << endl;
	}
};

//Pythonҳ��
class Python :public BasePage
{
public:
	void content()
	{
		cout << "Pythonѧ����Ƶ" << endl;
	}
};

void test01()
{
	Java ja;
	cout << "Java��Ƶ���ؽ���" << endl;
	ja.header();
	ja.footer();
	ja.left();
	ja.content();

	cout << "____________________" << endl;

	Python py;
	cout << "Python��Ƶ���ؽ���" << endl;
	py.header();
	py.footer();
	py.left();
	py.content();
}

int main()
{
	test01();

	system("pause");
	return 0;
}