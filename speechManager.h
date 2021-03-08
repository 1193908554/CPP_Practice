#pragma once
#include<iostream>//I/O
#include<vector>//STL
#include<map>//STL
#include<algorithm>//算法函数 random_shuffle   sort
#include<deque>//STL
#include<functional>//内建函数  greater<double>()
#include<numeric>//accumulate
#include<string>//打印字符串
#include<fstream>//文件操作
#include"speaker.h"

#define FILENAME "speech.csv"   //文件名
using namespace std;

//设计演讲管理类
class SpeechManager
{
public:
	//构造函数
	SpeechManager();

	//展示菜单
	void show_Menu();

	//退出系统
	void exitSystem();

	//析构函数
	~SpeechManager();

	//初始化容器和属性
	void initSpeech();

	//创建12名选手
	void createSpeaker();

	//开始比赛  比赛整个流程控制函数
	void startSpeech();

	//抽签
	void speechDraw();

	//比赛函数
	void speechContest();

	//显示得分
	void showScore();

	//保存记录
	void saveRecord();

	//读取记录
	void loadRecord();

	//显示往届记录
	void showRecord();

	//清空文件
	void clearRecord();

	//判断文件是否为空
	bool fileIsEmpty;

	//存放往届记录容器
	map<int, vector<string>>m_Record;


	//! 成员属性
	//保存第一轮比赛选手编号容器
	vector<int>v1;

	//第一轮晋级选手编号容器
	vector<int>v2;

	//胜出前三名编号容器
	vector<int>vVictory;

	//存放编号以及对应具体选手容器
	map<int, Speaker>m_Speaker;

	//存放比赛轮数
	int m_Index;

};