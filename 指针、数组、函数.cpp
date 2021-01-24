//#include<iostream>
//using namespace std;
//
//void swap(int* a, int* b)
//{
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//
//void bubbleSort(int* n, int len)
//{
//	for (int i = 0; i < len - 1; i++)
//	{
//		for (int j = 0; j < len - 1 - i; j++)
//		{
//			if (n[j] > n[j + 1])
//			{
//				swap(&n[j], &n[j + 1]);
//			}
//		}
//	}
//}
//
//void printArray(int* arr ,int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << arr[i] << endl;
//	}
//}
//
//int main()
//{
//	int arr[] = { 4,3,6,9,1,2,10,8,7,5 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	cout << "ÅÅÐòÇ°£º" << endl;
//	printArray(arr, len);
//	bubbleSort(arr, len);
//	cout << "ÅÅÐòºó£º" << endl;
//	printArray(arr, len);
//	return 0;
//}