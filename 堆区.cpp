//#include<iostream>
//using namespace std;
//
//int* func()
//{
//	//利用new关键字，可以将数据据开辟到堆区
//	//指针 本质也是局部变量也放在栈上，指针保存的数据放在堆区
//	int* p = new int(10);//在堆区开辟内存 ，把内存的编号给返回
//	return p;
//}
//
//int main()
//{
//	//堆区开辟数据
//	int* p = func();
//
//	cout << *p << endl;
//	cout << *p << endl;
//	cout << *p << endl;
//	cout << *p << endl;
//	return 0;
//}