#include<iostream>
#include<queue>
#include<string>
using namespace std;

class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	string m_Name;
	int m_Age;
};

void test()
{
	queue<Person>q;

	Person p1("张三", 12);
	Person p2("李四", 15);
	Person p3("王五", 17);
	Person p4("赵六", 16);

	//入队
	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);

	queue<Person>q2(q);//拷贝构造
	
	cout << "队列大小：" << q.size() << endl;

	//判断只要队列不为空，查看队头，然后出队  以此循环
	while (!q.empty())
	{
		cout << "队头为：" << q.front().m_Name << ","<< q.front().m_Age << endl;
		cout << "队尾为：" << q.back().m_Name << "," << q.back().m_Age << endl;
		q.pop();
	}

	cout << "队列大小：" << q.size() << endl;
	cout << "--------------" << endl;

	while (!q2.empty())
	{
		cout << "队头为：" << q2.front().m_Name << "," << q2.front().m_Age << endl;
		cout << "队尾为：" << q2.back().m_Name << "," << q2.back().m_Age << endl;
		q2.pop();
	}

}

int main()
{
	test();
	system("pause");
	return 0;
}