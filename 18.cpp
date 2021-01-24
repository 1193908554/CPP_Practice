//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int arr[2][3] = 
//	{ 
//		{1,2,3,}, 
//		{7,8,9,}
//	};
//
//
//	cout << "行数" << sizeof(arr) / sizeof(arr[0]) << endl;
//	cout << "列数" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;
//
//	cout << "二维数组首地址" << (int)arr << endl;
//	cout << "arr[0]地址" << (int)arr[0] << endl;
//	cout << "arr[0][0]地址" << (int)&arr[0][0] << endl;
//	cout << "arr[1][0]地址" << (int)&arr[1][0] << endl;
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			cout << arr[i][j] << " ";
//		}
//		cout << endl;
//	}
//
//	return 0;
//}