#include<iostream>
using namespace std;

////普通实现
//
////Java页面
//
//class Java
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课、登录、注册...（公共头部）" << endl;
//	}
//
//	void footer()
//	{
//		cout << "帮助中心、交流合作、站内地图...（公共底部）" << endl;
//	}
//
//	void left()
//	{
//		cout << "Java、Python、C++...（公共分类列表）" << endl;
//	}
//
//	void content()
//	{
//		cout << "Java学科视频" << endl;
//	}
//};
//
////Python页面
//
//class Python
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课、登录、注册...（公共头部）" << endl;
//	}
//
//	void footer()
//	{
//		cout << "帮助中心、交流合作、站内地图...（公共底部）" << endl;
//	}
//
//	void left()
//	{
//		cout << "Java、Python、C++...（公共分类列表）" << endl;
//	}
//
//	void content()
//	{
//		cout << "Python学科视频" << endl;
//	}
//};

//继承实现页面
class BasePage//公共
{
public:
	void header()
	{
		cout << "首页、公开课、登录、注册...（公共头部）" << endl;
	}
		
	void footer()
	{
		cout << "帮助中心、交流合作、站内地图...（公共底部）" << endl;
	}
		
	void left()
	{
		cout << "Java、Python、C++...（公共分类列表）" << endl;
	}
};

//Java页面
class Java :public BasePage
{
public:
	void content()
	{
		cout << "Java学科视频" << endl;
	}
};

//Python页面
class Python :public BasePage
{
public:
	void content()
	{
		cout << "Python学科视频" << endl;
	}
};

void test01()
{
	Java ja;
	cout << "Java视频下载界面" << endl;
	ja.header();
	ja.footer();
	ja.left();
	ja.content();

	cout << "____________________" << endl;

	Python py;
	cout << "Python视频下载界面" << endl;
	py.header();
	py.footer();
	py.left();
	py.content();
}

int main()
{
	test01();

	system("pause");
	return 0;
}