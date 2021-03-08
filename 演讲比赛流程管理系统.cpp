#include<iostream>
#include<string>
#include<ctime>//随机种子
#include"speechManager.h"
using namespace std;



int main()
{
	//随机种子
	srand((unsigned int)time(NULL)); 

	//创建管理类对象
	SpeechManager sm;

	//测试
	/*for (map<int, Speaker>::iterator it = sm.m_Speaker.begin(); it != sm.m_Speaker.end(); it++)
	{
		cout << "选手编号：" << it->first << ",选手姓名：" << it->second.GetName()
			<< ",第一轮成绩：" << it->second.GetScore()[0]
			<< ",第二轮成绩：" << it->second.GetScore()[1] << endl;
	}*/

	while (true)
	{
		sm.show_Menu();

		int choice = 0;//用于存储用户的选择

		cout << "请输入您的选择：" << endl;
		cin >> choice;

		switch (choice)
		{
		case 1://开始比赛
			sm.startSpeech();
			break;
		case 2://查看往届记录
			sm.showRecord();
			break;
		case 3://清空比赛记录
			sm.clearRecord();
			break;
		case 0://退出
			sm.exitSystem();
			break;
		default:
			system("cls");//输出错误-清屏
			break;
		}
	}



	system("pause");
	return 0;
}