#include<iostream>
#include"MyArray.hpp"
using namespace std;

void printArray(MyArray<int>& arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl;
}

void test01()
{
	MyArray<int> arr1(5);
	for (int i = 0; i < 5; i++)
	{
		arr1.Push_Back(i);
	}
	
	cout << "arr1输出:" << endl;
	printArray(arr1);

	cout << "arr1的容量：" << arr1.getCapacity() << endl;
	cout << "arr1的大小：" << arr1.getSize() << endl;
	cout << "------------------" << endl;

	MyArray<int> arr2(arr1);

	cout << "arr2输出:" << endl;
	printArray(arr2);

	//尾删
	arr2.Pop_Back();

	cout << "arr2的容量：" << arr2.getCapacity() << endl;
	cout << "arr2的大小：" << arr2.getSize() << endl;
	cout << "------------------" << endl;

	/*MyArray<int> arr3(100);
	arr3 = arr1;*/
}

//测试自定义数据类型
class Person
{
public:
	Person() {};
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	string m_Name;
	int m_Age;
};

void printPersonArray(MyArray<Person>& arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << "姓名：" << arr[i].m_Name << "，年龄：" << arr[i].m_Age << endl;
	}
}

void test02()
{
	MyArray<Person> arr(10);

	Person p1("张三", 13);
	Person p2("李四", 14);
	Person p3("王五", 15);
	Person p4("赵六", 17);
	Person p5("小明", 18);

	arr.Push_Back(p1);
	arr.Push_Back(p2);
	arr.Push_Back(p3);
	arr.Push_Back(p4);
	arr.Push_Back(p5);

	//打印数组
	printPersonArray(arr);

	cout << "arr的容量：" << arr.getCapacity() << endl;
	cout << "arr的大小：" << arr.getSize() << endl;


}

int main()
{
	test01();
	test02();

	system("pause");

	return 0;
}