#include<iostream>
#include<string>
#include<ctime>//�������
#include"speechManager.h"
using namespace std;



int main()
{
	//�������
	srand((unsigned int)time(NULL)); 

	//�������������
	SpeechManager sm;

	//����
	/*for (map<int, Speaker>::iterator it = sm.m_Speaker.begin(); it != sm.m_Speaker.end(); it++)
	{
		cout << "ѡ�ֱ�ţ�" << it->first << ",ѡ��������" << it->second.GetName()
			<< ",��һ�ֳɼ���" << it->second.GetScore()[0]
			<< ",�ڶ��ֳɼ���" << it->second.GetScore()[1] << endl;
	}*/

	while (true)
	{
		sm.show_Menu();

		int choice = 0;//���ڴ洢�û���ѡ��

		cout << "����������ѡ��" << endl;
		cin >> choice;

		switch (choice)
		{
		case 1://��ʼ����
			sm.startSpeech();
			break;
		case 2://�鿴�����¼
			sm.showRecord();
			break;
		case 3://��ձ�����¼
			sm.clearRecord();
			break;
		case 0://�˳�
			sm.exitSystem();
			break;
		default:
			system("cls");//�������-����
			break;
		}
	}



	system("pause");
	return 0;
}