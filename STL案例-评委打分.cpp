#include<iostream>
#include<vector>
#include<deque>
#include<algorithm>
using namespace std;

//rand()%10 + 1
/*
void Player()
{
	vector<char>v;
	v.push_back('A');
	v.push_back('B');
	v.push_back('C');
	v.push_back('D');
	v.push_back('E');
	
	for (vector<char>::iterator itv = v.begin(); itv != v.end(); itv++)
	{
		cout << "现在给选手" << *itv << "开始打分：" << endl;
		deque<int> d;
		for (int i = 0; i < 10; i++)
		{
			int num = rand() % 10 + 1;
			cout << num << " ";
			d.push_back(num);

		}
		cout << endl;
		sort(d.begin(),d.end());

		int sum = 0;
		deque<int>::iterator itd = d.begin();
		itd++;

		for (int i = 0; i < 8; i++)
		{
			sum += *itd;
			itd++;
		}

		double avg = sum / 8.0;
		cout << "选手：" << *itv << "，平均分为：" << avg << endl;

	}


}

int main()
{

	srand((unsigned int)time(NULL));//随机种子   先随机种子再生成随机数
	Player();
	system("pause");
	return 0;
}

*/


class Person
{
public:
	Person(string name, int score)
	{
		this->m_Name = name;
		this->m_Score = score;
	}


	string m_Name;//姓名
	int m_Score;//平均分
};

void createPerson(vector<Person>& v)
{
	string nameSeed = "ABCDE";
	for (int i = 0; i < 5; i++)
	{
		string name = "选手";
		name += nameSeed[i];

		int score = 0;

		Person p(name, score);

		//将创建的Person对象放入容器
		v.push_back(p);
	}

}

void setScore(vector<Person>& v)//打分
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		//将评委的分数，放入deque容器
		deque<int>d;
		for (int i = 0; i < 10; i++)
		{
			int score = rand() % 41 + 60;//60~100
			d.push_back(score);
		}

		/*cout << "选手：" << it->m_Name << "打分：" << endl;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		{
			cout << *dit << " " << " ";
		}
		cout << endl*/;

		//排序
		sort(d.begin(), d.end());

		//去掉最高和最低分
		d.pop_back();
		d.pop_front();

		//取平均分
		int sum = 0;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		{
			sum += *dit;
		}
		int avg = sum / d.size();

		//将平均分给到选手
		it->m_Score = avg;
	}


}

void showScore(vector<Person>& v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "姓名：" << it->m_Name << "，平均分为：" << it->m_Score << endl;
	}
}

int main()
{
	srand((unsigned int)time(NULL));//随机种子   先随机种子再生成随机数

	//1创建5名选手
	vector<Person>v;//存放选手
	createPerson(v);

	//测试输出
	/*for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "姓名：" << it->m_Name << "，平均分：" << it->m_Score << endl;
	}*/

	//2给五名选手打分
	setScore(v);

	//3显示最后得分
	showScore(v);

	system("pause");
	return 0;
}