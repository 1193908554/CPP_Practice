#pragma once
#include<iostream>
using namespace std;

class Speaker
{
public:

	string GetName();//��ȡ����
	double GetScore(int i);//��ȡ����
	void SetName(string name);//��������
	void SetScore(int i, double score);//���÷���

private:
	string m_Name;//����
	double m_Score[2];//����  ������ֵ÷�
};