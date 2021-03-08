#include"speechManager.h"

//���캯��
SpeechManager::SpeechManager() 
{
	//��ʼ������������
	this->initSpeech();

	//����12��ѡ��
	this->createSpeaker();

	//��ȡ��Ϣ
	this->loadRecord();
}

//չʾ�˵�
void SpeechManager::show_Menu()
{
	cout << "****************************************" << endl;
	cout << "************��ӭ�μ��ݽ�����************" << endl;
	cout << "************1.��ʼ�ݽ�����**************" << endl;
	cout << "************2.�鿴�����¼**************" << endl;
	cout << "************3.��ձ�����¼**************" << endl;
	cout << "************0.�˳���������**************" << endl;
	cout << "****************************************" << endl;
	cout << endl;
}

//��ʼ������������
void SpeechManager::initSpeech()
{
	//����Ϊ��
	this->v1.clear();
	this->v2.clear();
	this->vVictory.clear();
	this->m_Speaker.clear();

	//��ʼ����������
	this->m_Index = 1;

	//��ʼ����¼����
	this->m_Record.clear();
}

//����12��ѡ��
void SpeechManager::createSpeaker()
{
	string nameSeed = "ABCDEFGHIJKL";
	for (int i = 0; i < nameSeed.size(); i++)
	{
		string name = "ѡ��";
		name += nameSeed[i];

		Speaker sp;
		sp.SetName(name);

		for (int i = 0; i < 2; i++)
		{
			sp.SetScore(i, 0);
		}
		

		//����ѡ�ֱ�ţ����ҷ��뵽v1������
		this->v1.push_back(i + 10001);

		//ѡ�ֱ���Լ���Ӧѡ�֣����뵽map������
		this->m_Speaker.insert(make_pair(i + 10001, sp));

	}
}

//��ʼ����  �����������̿��ƺ���
void SpeechManager::startSpeech()
{
	//��һ�ֿ�ʼ����

	//1.��ǩ   ʹ��ϴ�ƺ���
	this->speechDraw();

	//2.����
	this->speechContest();

	//3.��ʾ�������
	this->showScore();

	//�ڶ��ֱ���
	this->m_Index++;

	//1.��ǩ   ʹ��ϴ�ƺ���
	this->speechDraw();

	//2.����
	this->speechContest();

	//3.��ʾ���ս��
	this->showScore();

	//4.�������ݵ��ļ��� 
	this->saveRecord();

	//���ñ���         ����ǰ������������ļ���
	//��ʼ������
	this->initSpeech();

	//����ѡ��
	this->createSpeaker();

	//��ȡ�����¼
	this->loadRecord();

	cout << "����������" << endl;
	system("pause");
	system("cls");

}

//��ǩ
void SpeechManager::speechDraw()
{
	cout << "��<<" << this->m_Index << ">>�ֱ���ѡ�����ڳ�ǩ" << endl;
	cout << "----------------------" << endl;
	cout << "�齱���ݽ�˳�����£�" << endl;

	if (1 == this->m_Index)
	{
		//��һ��
		random_shuffle(v1.begin(), v1.end());//ϴ�ƺ���
		for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)//�������
		{
			cout << *it << " ";
		}
		cout << endl; 
	}
	else
	{
		//�ڶ���
		random_shuffle(v2.begin(), v2.end());
		for (vector<int>::iterator it = v2.begin(); it != v2.end(); it++)
		{
			cout << *it << " ";
		}
		cout << endl;
	}

	cout << "--------------------" << endl;
	system("pause");
	cout << endl; 

}

//��������
void SpeechManager::speechContest()
{
	cout << "----��<<" << this->m_Index << ">>�ֱ�����ʽ��ʼ----" << endl;

	//׼����ʱ����  ���С��ɼ�
	multimap<double, int, greater<double>>groupScore;
	//? �˴�greater<double>��������û������

	int num = 0;//ͳ����Ա����

	vector<int>v_Src;//����ѡ������
	if (this->m_Index == 1)
	{
		v_Src = v1;
	}
	else
	{
		v_Src = v2;
	}

	//��������ѡ�ֽ��б���
	for (vector<int>::iterator it = v_Src.begin(); it != v_Src.end(); it++)
	{
		num++;

		//��ί���
		deque<double>d;
		for (int i = 0; i < 10; i++)
		{
			double score = (rand() % 401 + 600) / 10.f;//600-1000
			//cout << score << "\t";
			d.push_back(score);
		}
		//cout << endl;
		sort(d.begin(), d.end(),greater<double>());//���ں���   ����

		//ȥ����߷֣�ȥ����ͷ�
		d.pop_front();//ȥ����߷�
		d.pop_back();//ȥ����ͷ�

		double sum = accumulate(d.begin(), d.end(), 0);//�ܺ�

		double avg = sum / (double)d.size();//ƽ��ֵ

		//��ӡƽ����
		/*cout << "��ţ�" << *it << ",������" << this->m_Speaker[*it].GetName()
			<< "��ƽ����:" << avg << endl;*/

		//��ƽ���ַ���map����
		this->m_Speaker[*it].SetScore(this->m_Index - 1, avg);

		//���������  ���뵽��ʱ������
		groupScore.insert(make_pair(avg, *it));//key�ǵ÷֣�value��ѡ�ֱ��

		//ÿ����ȡ��ǰ����
		if (num % 6 == 0)
		{
			cout << "��" << num / 6 << "С������������£�" << endl;
			for (multimap<double, int, greater<double>>::iterator it = groupScore.begin();
				it != groupScore.end(); it++)
			{
				cout << "��ţ�" << it->second
					<< "��������" << this->m_Speaker[it->second].GetName()
					<< "���ɼ���" << this->m_Speaker[it->second].GetScore(this->m_Index - 1) << endl;
			}

			//ȡ��ǰ����
			int count = 0;
			for (multimap<double, int, greater<double>>::iterator it = groupScore.begin();
				it != groupScore.end() && count < 3; it++, count++)
			{
				if (this->m_Index == 1)
				{
					v2.push_back(it->second);//ȡ�߱��
				 }
				else
				{
					vVictory.push_back(it->second);//ȡ�߱��
				}
			}
			groupScore.clear();//���
			cout << endl;
		}
	}
	cout << "-------��" << this->m_Index << "�ֱ������------" << endl;
	system("pause");
}

//��ʾ�÷�
void SpeechManager::showScore()
{
	cout << "-----��"<<this->m_Index<<"�ֽ���ѡ����Ϣ���£�------" << endl;

	vector<int>v;

	if (1 == this->m_Index) //��һ�ֱ������
	{
		v = v2;
	}
	else//�ڶ��ֱ������
	{
		v = vVictory;
	}

	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "ѡ�ֱ�ţ�" << *it
			<< "��������" << this->m_Speaker[*it].GetName()
			<< "��ѡ�ֳɼ���" << this->m_Speaker[*it].GetScore(m_Index - 1) 
			<< endl;
	}
	cout << endl;

	system("pause");
	system("cls");

	this->show_Menu();
}

//�����¼
void SpeechManager::saveRecord()
{
	ofstream ofs;
	//׷�ӵķ�ʽд�ļ�
	ofs.open(FILENAME, ios::out | ios::app);//app-׷��

	if (!ofs.is_open())
	{
		cout << "�ļ���ʧ��,�����³���һ�Σ�" << endl;
		ofs.clear();//�ر�
		return;
	}

	//��ÿ��ѡ�ֵ�����  д���ļ���
	for (vector<int>::iterator it = vVictory.begin(); it != vVictory.end(); it++)
	{
		//�����źͳɼ�    һ�б����˹ھ��Ǿ�����������Ϣ
		ofs << *it << "," << this->m_Speaker[*it].GetScore(1) << ",";
	}
	ofs << endl;

	//�ر��ļ�
	ofs.clear();
	cout << "��¼�Ѿ�����" << endl;

	//�����ļ�״̬
	this->fileIsEmpty = false;

}

//��ȡ��¼
void SpeechManager::loadRecord()
{
	ifstream ifs(FILENAME, ios::in);//���ļ�
	
	//�ļ�������
	if (!ifs.is_open())
	{
		//cout << "�ļ�������" << endl;
		this->fileIsEmpty = true;
		ifs.clear();//�ر�
		return;
	}

	//�ļ��������
	char ch;
	ifs >> ch;//��ȡ��ͷ�����ַ�
	if (ifs.eof())//������ļ������� �����ļ��������
	{
		cout << "�ļ�Ϊ��" << endl;
		this->fileIsEmpty = true;
		ifs.clear();//�ر�
		return;
	}

	//�ļ���Ϊ��  ȡ��
	this->fileIsEmpty = false;

	ifs.putback(ch);//�������ȡ�ĵ����ַ� �ٷŻ���

	string data;
	int index = 0;//����

	while (ifs >> data)
	{
		//cout << data << endl;
		//����
		vector<string>v;//���6��string�ַ���

		int  pos = -1;//���Ҷ��ŵ�λ��

		int start = 0;//������ʼλ��

		while (true)
		{
			pos = data.find(",",start);
			if (pos == -1)
			{
				//û���ҵ�
				break;
			}
			//�ҵ�
			string temp = data.substr(start, pos - start);
			//cout << temp << endl;
			v.push_back(temp);

			start = pos + 1;
		}
		this->m_Record.insert(make_pair(index, v));
		index++;//��������
		
	}

	ifs.close();

	//���� m_Record���� ���
	/*for (map<int, vector<string>>::iterator it = m_Record.begin(); 
		it != m_Record.end(); it++)
	{
		cout << "��" << it->first << "���¼���£�"
			<< "\n�ھ���ţ�" << it->second[0] << "\t�ھ��ɼ���" << it->second[1]
			<< "\t�Ǿ���ţ�" << it->second[2] << "\t�Ǿ��ɼ�:" << it->second[3]
			<< "\t������ţ�" << it->second[4] << "\t�����ɼ���" << it->second[5]
			<< endl;
	}*/
}

//��ʾ�����¼
void SpeechManager::showRecord()
{
	if (this->fileIsEmpty)
	{
		cout << "�ļ������ڣ����¼Ϊ��" << endl;
	}
	else
	{
		for (int i = 0; i < this->m_Record.size(); i++)
		{
			cout << "��" << i + 1 << "���¼���£�"
				<< "\n�ھ���ţ�" << this->m_Record[i][0]
				<< "\t�ھ��ɼ���" << this->m_Record[i][1]
				<< "\t�Ǿ���ţ�" << this->m_Record[i][2]
				<< "\t�Ǿ��ɼ�: " << this->m_Record[i][3]
				<< "\t������ţ�" << this->m_Record[i][4]
				<< "\t�����ɼ���" << this->m_Record[i][5]
				<< endl;
		}
	}
	
	system("pause");
	system("cls");
}

//����ļ�
void SpeechManager::clearRecord()
{
	cout << "�Ƿ�ȷ������ļ�" << endl;
	cout << "1����" << endl;
	cout << "2����" << endl;

	int select = 0;

	cin >> select;

	if (select == 1)
	{
		//ȷ�����
		ofstream ofs(FILENAME,ios::trunc);//����ļ�������ɾ�����ٴ���һ���յ�
		ofs.close();//�ر�

		//��ʼ������������
		this->initSpeech();

		//����12��ѡ��
		this->createSpeaker();

		//����������Ϣ
		this->loadRecord();

		cout << "��ճɹ�" << endl;
	}

	system("pause");
	system("cls");
}

//�˳�ϵͳ
void SpeechManager::exitSystem()
{
	cout << "��ӭ�´�ʹ��" << endl;
	system("pause");
	exit(0);//�����˳� - 0
}


//��������
SpeechManager::~SpeechManager() 
{

}