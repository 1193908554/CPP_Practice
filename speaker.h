#pragma once
#include<iostream>
using namespace std;

class Speaker
{
public:

	string GetName();//获取姓名
	double GetScore(int i);//获取分数
	void SetName(string name);//设置姓名
	void SetScore(int i, double score);//设置分数

private:
	string m_Name;//姓名
	double m_Score[2];//分数  最多俩轮得分
};