#include<iostream>
#include<fstream>
using namespace std;

void test01() 
{
	ofstream ofs;//创建输入流

	//默认和项目地址相同    E:\编程\代码区\C++代码源\2021新规划\文件
	ofs.open("test.txt", ios::out);//打开文件

	ofs << "姓名：张三" << endl;//写入数据
	ofs << "性别 ：男" << endl;

	ofs.close();//关闭文件
}

int main()
{
	test01();
	system("pause");

	return 0;
}