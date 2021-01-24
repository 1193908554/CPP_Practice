//#include<iostream>
//
//using namespace std;
//
////1值传递
//void mySwap01(int a, int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
////2地址传递
//void mySwap02(int* a, int* b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
////3引用传递
//void mySwap03(int& a, int& b)//引用接收，就是别名
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	//mySwap01(a, b);//值传递，形参不会修饰实参
//	//mySwap02(&a, &b);//地址传递，形参会修饰实参
//
//	mySwap03(a, b);//引用传递，新参会修饰实参
//
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	return 0;
//}