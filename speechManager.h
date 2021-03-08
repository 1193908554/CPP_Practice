#pragma once
#include<iostream>//I/O
#include<vector>//STL
#include<map>//STL
#include<algorithm>//�㷨���� random_shuffle   sort
#include<deque>//STL
#include<functional>//�ڽ�����  greater<double>()
#include<numeric>//accumulate
#include<string>//��ӡ�ַ���
#include<fstream>//�ļ�����
#include"speaker.h"

#define FILENAME "speech.csv"   //�ļ���
using namespace std;

//����ݽ�������
class SpeechManager
{
public:
	//���캯��
	SpeechManager();

	//չʾ�˵�
	void show_Menu();

	//�˳�ϵͳ
	void exitSystem();

	//��������
	~SpeechManager();

	//��ʼ������������
	void initSpeech();

	//����12��ѡ��
	void createSpeaker();

	//��ʼ����  �����������̿��ƺ���
	void startSpeech();

	//��ǩ
	void speechDraw();

	//��������
	void speechContest();

	//��ʾ�÷�
	void showScore();

	//�����¼
	void saveRecord();

	//��ȡ��¼
	void loadRecord();

	//��ʾ�����¼
	void showRecord();

	//����ļ�
	void clearRecord();

	//�ж��ļ��Ƿ�Ϊ��
	bool fileIsEmpty;

	//��������¼����
	map<int, vector<string>>m_Record;


	//! ��Ա����
	//�����һ�ֱ���ѡ�ֱ������
	vector<int>v1;

	//��һ�ֽ���ѡ�ֱ������
	vector<int>v2;

	//ʤ��ǰ�����������
	vector<int>vVictory;

	//��ű���Լ���Ӧ����ѡ������
	map<int, Speaker>m_Speaker;

	//��ű�������
	int m_Index;

};