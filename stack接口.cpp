#include<iostream>
#include<stack>
using namespace std;

void test01()
{
	stack<int>s;

	//入栈
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);

	stack<int> s2(s);//拷贝构造

	//只要栈不为空，查看栈顶，并执行操作
	while (!s.empty())
	{
		cout << "栈顶元素：" << s.top() << endl;//40  30  20  10

		//出栈
		s.pop();
	}

	cout << "栈的大小：" << s.size() << endl;//0
}

int main()
{
	test01();
	system("pause");
	return 0;
}