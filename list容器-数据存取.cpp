#include<iostream>
#include<list>
using namespace std;

void test01()
{
	list<int>L;
	L.push_back(10);
	L.push_back(20);
	L.push_back(30);
	L.push_back(40);

	//L[0];��������������
	//at��ʽҲ����
	//����������

	cout << "��һ��Ԫ��:" << L.front() << endl;
	cout << "���һ��Ԫ�أ�" << L.back() << endl;
	
	//������   ��֤�Ƿ�֧���������
	list<int>::iterator it = L.begin();
	it++;//����˫��
	it--;
	//it = it + 1;//�������������

}

int main()
{
	test01();
	system("pause");
	return 0;
}