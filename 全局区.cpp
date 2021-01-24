//#include<iostream>
//using namespace std;
////c-const g-globl l-local
//int g_a = 10;
//int g_b = 20;
//const int c_g_a = 10;
//int main()
//{
//	//全局区
//
//	//全局变量、静态变量和常量
//
//	//静态变量
//	static int s_a = 10;
//	static int s_b = 20;
//
//	
//
//	//创建普通局部变量
//	int a = 10;
//	int b = 10;
//	cout << "局部变量a的地址为：" << (int)&a << endl;
//	cout << "局部变量b的地址为：" << (int)&b << endl;
//	cout << "-----------------------------------" << endl;
//	cout << "全集变量g_a的地址为：" << (int)&g_a << endl;
//	cout << "全集变量g_b的地址为：" << (int)&g_b << endl;
//	cout << "-----------------------------------" << endl;
//	cout << "静态变量s_a的地址为：" << (int)&s_a << endl;
//	cout << "静态变量s_b的地址为：" << (int)&s_b << endl;
//	cout << "-----------------------------------" << endl;
//	
//	//常量
//	//字符串常量
//	cout << "字符穿常量的地址：" << (int)&"Hello world" << endl;
//	//const修饰常量
//	//const修饰全局变量
//	cout << "const修饰全局常量的地址：" << (int)&c_g_a << endl;
//	//const修饰局部变量
//	const int c_l_a = 10;
//	cout << "const修饰局部常量的地址：" << (int)&c_l_a << endl;
//
//	return 0;
//}