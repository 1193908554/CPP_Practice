#include<iostream>
#include<stack>
using namespace std;

void test01()
{
	stack<int>s;

	//��ջ
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);

	stack<int> s2(s);//��������

	//ֻҪջ��Ϊ�գ��鿴ջ������ִ�в���
	while (!s.empty())
	{
		cout << "ջ��Ԫ�أ�" << s.top() << endl;//40  30  20  10

		//��ջ
		s.pop();
	}

	cout << "ջ�Ĵ�С��" << s.size() << endl;//0
}

int main()
{
	test01();
	system("pause");
	return 0;
}