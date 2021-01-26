#include<iostream>
using namespace std;

class Person//人类
{
public:
	//设置姓名
	void setName(string name)
	{
		m_Name = name;
	}
	//获取姓名
	string getName()
	{
		return m_Name;
	}
	//获取年龄
	int getAge()
	{
		m_Age = 0;
		return m_Age;
	}
	void setLover(string lover)
	{
		m_Lover = lover;
	}
	
private:
	//姓名  可读可写
	string m_Name;
	//年龄  只读
	int m_Age;
	//情人   只写
	string m_Lover;
};
int main()
{
	Person p;
	p.setName("张三");
	cout << "姓名为：" << p.getName() << endl;
	cout << "年龄为：" << p.getAge() << endl;
	p.setAge(20);//不能写
	p.setLover("党倩");
	cout << "情人为：" << p.getLover() << endl;//不能读
	system("pause");

	return 0;
}