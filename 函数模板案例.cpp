#include<iostream>
using namespace std;

template<typename T>
void mySwap(T&a, T&b)
{
	T temp = a;
	a = b;
	b = temp;
}

template<typename T>
void mySort(T arr[], int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		int max = i;
		for (int j = i + 1; j < len; j++)
		{
			if (arr[max] < arr[j])
			{
				max = j;
			}
		}
		if (max != i)
		{
			//交换
			mySwap(arr[max], arr[i]);

		}
	}
}

template<typename T>
void printArray(T arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void test01()
{
	char charArray[] = "babcfe";
	int num = sizeof(charArray) / sizeof(char);
	mySort(charArray, num);
	
	printArray(charArray, num);

	cout << "------------------" << endl;

	int intArray[] = { 1,9,8,5,6,3,5,4 };
	num = sizeof(intArray) / sizeof(int);
	mySort(intArray, num);
	printArray(intArray, num);
}

int main()
{
	test01();
	system("pause");

	return 0;
}