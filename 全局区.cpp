//#include<iostream>
//using namespace std;
////c-const g-globl l-local
//int g_a = 10;
//int g_b = 20;
//const int c_g_a = 10;
//int main()
//{
//	//ȫ����
//
//	//ȫ�ֱ�������̬�����ͳ���
//
//	//��̬����
//	static int s_a = 10;
//	static int s_b = 20;
//
//	
//
//	//������ͨ�ֲ�����
//	int a = 10;
//	int b = 10;
//	cout << "�ֲ�����a�ĵ�ַΪ��" << (int)&a << endl;
//	cout << "�ֲ�����b�ĵ�ַΪ��" << (int)&b << endl;
//	cout << "-----------------------------------" << endl;
//	cout << "ȫ������g_a�ĵ�ַΪ��" << (int)&g_a << endl;
//	cout << "ȫ������g_b�ĵ�ַΪ��" << (int)&g_b << endl;
//	cout << "-----------------------------------" << endl;
//	cout << "��̬����s_a�ĵ�ַΪ��" << (int)&s_a << endl;
//	cout << "��̬����s_b�ĵ�ַΪ��" << (int)&s_b << endl;
//	cout << "-----------------------------------" << endl;
//	
//	//����
//	//�ַ�������
//	cout << "�ַ��������ĵ�ַ��" << (int)&"Hello world" << endl;
//	//const���γ���
//	//const����ȫ�ֱ���
//	cout << "const����ȫ�ֳ����ĵ�ַ��" << (int)&c_g_a << endl;
//	//const���ξֲ�����
//	const int c_l_a = 10;
//	cout << "const���ξֲ������ĵ�ַ��" << (int)&c_l_a << endl;
//
//	return 0;
//}