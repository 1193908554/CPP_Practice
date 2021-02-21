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
	
	cout << "arr1���:" << endl;
	printArray(arr1);

	cout << "arr1��������" << arr1.getCapacity() << endl;
	cout << "arr1�Ĵ�С��" << arr1.getSize() << endl;
	cout << "------------------" << endl;

	MyArray<int> arr2(arr1);

	cout << "arr2���:" << endl;
	printArray(arr2);

	//βɾ
	arr2.Pop_Back();

	cout << "arr2��������" << arr2.getCapacity() << endl;
	cout << "arr2�Ĵ�С��" << arr2.getSize() << endl;
	cout << "------------------" << endl;

	/*MyArray<int> arr3(100);
	arr3 = arr1;*/
}

//�����Զ�����������
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
		cout << "������" << arr[i].m_Name << "�����䣺" << arr[i].m_Age << endl;
	}
}

void test02()
{
	MyArray<Person> arr(10);

	Person p1("����", 13);
	Person p2("����", 14);
	Person p3("����", 15);
	Person p4("����", 17);
	Person p5("С��", 18);

	arr.Push_Back(p1);
	arr.Push_Back(p2);
	arr.Push_Back(p3);
	arr.Push_Back(p4);
	arr.Push_Back(p5);

	//��ӡ����
	printPersonArray(arr);

	cout << "arr��������" << arr.getCapacity() << endl;
	cout << "arr�Ĵ�С��" << arr.getSize() << endl;


}

int main()
{
	test01();
	test02();

	system("pause");

	return 0;
}