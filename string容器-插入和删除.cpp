#include<iostream>
#include<string>
using namespace std;

void test()
{
	string str = "hello";

	//插入
	str.insert(1, "111");
	cout << str << endl;//h111ello

	//删除
	str.erase(1, 3);
	cout << str << endl;//hello
}

int main()
{
	test();
	system("pause");
	return 0;
}