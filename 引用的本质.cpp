//#include<iostream>
//using namespace std;
//
//void func(int& ref)
//{
//	ref = 100;//ref是引用，转换为*ref = 100
//}
//
//int main()
//{
//	int a = 10;
//
//	//自动转换为int *const ref = &a;
//	int& ref = a;
//	ref = 20;
//
//	cout << "a:" << a << endl;//20
//	cout << "ref: " << ref << endl;//20
//	func(a);
//
//	cout << "a:" << a << endl;//100
//	cout << "ref: " << ref << endl;//100
//
//	system("pause");
//	return 0;
//}