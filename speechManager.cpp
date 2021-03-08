#include"speechManager.h"

//构造函数
SpeechManager::SpeechManager() 
{
	//初始化容器和属性
	this->initSpeech();

	//创建12名选手
	this->createSpeaker();

	//读取信息
	this->loadRecord();
}

//展示菜单
void SpeechManager::show_Menu()
{
	cout << "****************************************" << endl;
	cout << "************欢迎参加演讲比赛************" << endl;
	cout << "************1.开始演讲比赛**************" << endl;
	cout << "************2.查看往届记录**************" << endl;
	cout << "************3.清空比赛记录**************" << endl;
	cout << "************0.退出比赛程序**************" << endl;
	cout << "****************************************" << endl;
	cout << endl;
}

//初始化容器和属性
void SpeechManager::initSpeech()
{
	//容器为空
	this->v1.clear();
	this->v2.clear();
	this->vVictory.clear();
	this->m_Speaker.clear();

	//初始化比赛轮数
	this->m_Index = 1;

	//初始化记录容器
	this->m_Record.clear();
}

//创建12名选手
void SpeechManager::createSpeaker()
{
	string nameSeed = "ABCDEFGHIJKL";
	for (int i = 0; i < nameSeed.size(); i++)
	{
		string name = "选手";
		name += nameSeed[i];

		Speaker sp;
		sp.SetName(name);

		for (int i = 0; i < 2; i++)
		{
			sp.SetScore(i, 0);
		}
		

		//创建选手编号，并且放入到v1容器中
		this->v1.push_back(i + 10001);

		//选手编号以及对应选手，放入到map容器中
		this->m_Speaker.insert(make_pair(i + 10001, sp));

	}
}

//开始比赛  比赛整个流程控制函数
void SpeechManager::startSpeech()
{
	//第一轮开始比赛

	//1.抽签   使用洗牌函数
	this->speechDraw();

	//2.比赛
	this->speechContest();

	//3.显示晋级结果
	this->showScore();

	//第二轮比赛
	this->m_Index++;

	//1.抽签   使用洗牌函数
	this->speechDraw();

	//2.比赛
	this->speechContest();

	//3.显示最终结果
	this->showScore();

	//4.保存数据到文件中 
	this->saveRecord();

	//重置比赛         将当前比赛结果放入文件中
	//初始化属性
	this->initSpeech();

	//创建选手
	this->createSpeaker();

	//获取往届记录
	this->loadRecord();

	cout << "本届比赛完毕" << endl;
	system("pause");
	system("cls");

}

//抽签
void SpeechManager::speechDraw()
{
	cout << "第<<" << this->m_Index << ">>轮比赛选手正在抽签" << endl;
	cout << "----------------------" << endl;
	cout << "抽奖后演讲顺序如下：" << endl;

	if (1 == this->m_Index)
	{
		//第一轮
		random_shuffle(v1.begin(), v1.end());//洗牌函数
		for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)//遍历输出
		{
			cout << *it << " ";
		}
		cout << endl; 
	}
	else
	{
		//第二轮
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

//比赛函数
void SpeechManager::speechContest()
{
	cout << "----第<<" << this->m_Index << ">>轮比赛正式开始----" << endl;

	//准备临时容器  存放小组成绩
	multimap<double, int, greater<double>>groupScore;
	//? 此处greater<double>（）后面没有括号

	int num = 0;//统计人员个数

	vector<int>v_Src;//比赛选手容器
	if (this->m_Index == 1)
	{
		v_Src = v1;
	}
	else
	{
		v_Src = v2;
	}

	//遍历所有选手进行比赛
	for (vector<int>::iterator it = v_Src.begin(); it != v_Src.end(); it++)
	{
		num++;

		//评委打分
		deque<double>d;
		for (int i = 0; i < 10; i++)
		{
			double score = (rand() % 401 + 600) / 10.f;//600-1000
			//cout << score << "\t";
			d.push_back(score);
		}
		//cout << endl;
		sort(d.begin(), d.end(),greater<double>());//大于函数   降序

		//去掉最高分，去掉最低分
		d.pop_front();//去掉最高分
		d.pop_back();//去掉最低分

		double sum = accumulate(d.begin(), d.end(), 0);//总和

		double avg = sum / (double)d.size();//平均值

		//打印平均分
		/*cout << "编号：" << *it << ",姓名：" << this->m_Speaker[*it].GetName()
			<< "，平均分:" << avg << endl;*/

		//将平均分放入map容器
		this->m_Speaker[*it].SetScore(this->m_Index - 1, avg);

		//将打分数据  放入到临时容器中
		groupScore.insert(make_pair(avg, *it));//key是得分，value是选手编号

		//每六人取出前三名
		if (num % 6 == 0)
		{
			cout << "第" << num / 6 << "小组比赛名次如下：" << endl;
			for (multimap<double, int, greater<double>>::iterator it = groupScore.begin();
				it != groupScore.end(); it++)
			{
				cout << "编号：" << it->second
					<< "，姓名：" << this->m_Speaker[it->second].GetName()
					<< "，成绩：" << this->m_Speaker[it->second].GetScore(this->m_Index - 1) << endl;
			}

			//取走前三名
			int count = 0;
			for (multimap<double, int, greater<double>>::iterator it = groupScore.begin();
				it != groupScore.end() && count < 3; it++, count++)
			{
				if (this->m_Index == 1)
				{
					v2.push_back(it->second);//取走编号
				 }
				else
				{
					vVictory.push_back(it->second);//取走编号
				}
			}
			groupScore.clear();//清空
			cout << endl;
		}
	}
	cout << "-------第" << this->m_Index << "轮比赛完毕------" << endl;
	system("pause");
}

//显示得分
void SpeechManager::showScore()
{
	cout << "-----第"<<this->m_Index<<"轮晋级选手信息如下：------" << endl;

	vector<int>v;

	if (1 == this->m_Index) //第一轮比赛结果
	{
		v = v2;
	}
	else//第二轮比赛结果
	{
		v = vVictory;
	}

	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "选手编号：" << *it
			<< "，姓名：" << this->m_Speaker[*it].GetName()
			<< "，选手成绩：" << this->m_Speaker[*it].GetScore(m_Index - 1) 
			<< endl;
	}
	cout << endl;

	system("pause");
	system("cls");

	this->show_Menu();
}

//保存记录
void SpeechManager::saveRecord()
{
	ofstream ofs;
	//追加的方式写文件
	ofs.open(FILENAME, ios::out | ios::app);//app-追加

	if (!ofs.is_open())
	{
		cout << "文件打开失败,请重新尝试一次！" << endl;
		ofs.clear();//关闭
		return;
	}

	//将每个选手的数据  写入文件中
	for (vector<int>::iterator it = vVictory.begin(); it != vVictory.end(); it++)
	{
		//保存编号和成绩    一行保存了冠军亚军季军三人信息
		ofs << *it << "," << this->m_Speaker[*it].GetScore(1) << ",";
	}
	ofs << endl;

	//关闭文件
	ofs.clear();
	cout << "记录已经保存" << endl;

	//更新文件状态
	this->fileIsEmpty = false;

}

//读取记录
void SpeechManager::loadRecord()
{
	ifstream ifs(FILENAME, ios::in);//读文件
	
	//文件不存在
	if (!ifs.is_open())
	{
		//cout << "文件不存在" << endl;
		this->fileIsEmpty = true;
		ifs.clear();//关闭
		return;
	}

	//文件被清空了
	char ch;
	ifs >> ch;//读取开头单个字符
	if (ifs.eof())//如果是文件结束符 就是文件被清除了
	{
		cout << "文件为空" << endl;
		this->fileIsEmpty = true;
		ifs.clear();//关闭
		return;
	}

	//文件不为空  取出
	this->fileIsEmpty = false;

	ifs.putback(ch);//将上面读取的单个字符 再放回来

	string data;
	int index = 0;//届数

	while (ifs >> data)
	{
		//cout << data << endl;
		//解析
		vector<string>v;//存放6个string字符串

		int  pos = -1;//查找逗号的位置

		int start = 0;//查找起始位置

		while (true)
		{
			pos = data.find(",",start);
			if (pos == -1)
			{
				//没有找到
				break;
			}
			//找到
			string temp = data.substr(start, pos - start);
			//cout << temp << endl;
			v.push_back(temp);

			start = pos + 1;
		}
		this->m_Record.insert(make_pair(index, v));
		index++;//届数自增
		
	}

	ifs.close();

	//测试 m_Record容器 输出
	/*for (map<int, vector<string>>::iterator it = m_Record.begin(); 
		it != m_Record.end(); it++)
	{
		cout << "第" << it->first << "届记录如下："
			<< "\n冠军编号：" << it->second[0] << "\t冠军成绩：" << it->second[1]
			<< "\t亚军编号：" << it->second[2] << "\t亚军成绩:" << it->second[3]
			<< "\t季军编号：" << it->second[4] << "\t季军成绩：" << it->second[5]
			<< endl;
	}*/
}

//显示往届记录
void SpeechManager::showRecord()
{
	if (this->fileIsEmpty)
	{
		cout << "文件不存在，或记录为空" << endl;
	}
	else
	{
		for (int i = 0; i < this->m_Record.size(); i++)
		{
			cout << "第" << i + 1 << "届记录如下："
				<< "\n冠军编号：" << this->m_Record[i][0]
				<< "\t冠军成绩：" << this->m_Record[i][1]
				<< "\t亚军编号：" << this->m_Record[i][2]
				<< "\t亚军成绩: " << this->m_Record[i][3]
				<< "\t季军编号：" << this->m_Record[i][4]
				<< "\t季军成绩：" << this->m_Record[i][5]
				<< endl;
		}
	}
	
	system("pause");
	system("cls");
}

//清空文件
void SpeechManager::clearRecord()
{
	cout << "是否·确定清空文件" << endl;
	cout << "1、是" << endl;
	cout << "2、否" << endl;

	int select = 0;

	cin >> select;

	if (select == 1)
	{
		//确定清空
		ofstream ofs(FILENAME,ios::trunc);//如果文件存在先删除，再创建一个空的
		ofs.close();//关闭

		//初始化容器和属性
		this->initSpeech();

		//创建12名选手
		this->createSpeaker();

		//加载往届信息
		this->loadRecord();

		cout << "清空成功" << endl;
	}

	system("pause");
	system("cls");
}

//退出系统
void SpeechManager::exitSystem()
{
	cout << "欢迎下次使用" << endl;
	system("pause");
	exit(0);//正常退出 - 0
}


//析构函数
SpeechManager::~SpeechManager() 
{

}