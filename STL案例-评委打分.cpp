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
		cout << "���ڸ�ѡ��" << *itv << "��ʼ��֣�" << endl;
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
		cout << "ѡ�֣�" << *itv << "��ƽ����Ϊ��" << avg << endl;

	}


}

int main()
{

	srand((unsigned int)time(NULL));//�������   ��������������������
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


	string m_Name;//����
	int m_Score;//ƽ����
};

void createPerson(vector<Person>& v)
{
	string nameSeed = "ABCDE";
	for (int i = 0; i < 5; i++)
	{
		string name = "ѡ��";
		name += nameSeed[i];

		int score = 0;

		Person p(name, score);

		//��������Person�����������
		v.push_back(p);
	}

}

void setScore(vector<Person>& v)//���
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		//����ί�ķ���������deque����
		deque<int>d;
		for (int i = 0; i < 10; i++)
		{
			int score = rand() % 41 + 60;//60~100
			d.push_back(score);
		}

		/*cout << "ѡ�֣�" << it->m_Name << "��֣�" << endl;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		{
			cout << *dit << " " << " ";
		}
		cout << endl*/;

		//����
		sort(d.begin(), d.end());

		//ȥ����ߺ���ͷ�
		d.pop_back();
		d.pop_front();

		//ȡƽ����
		int sum = 0;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		{
			sum += *dit;
		}
		int avg = sum / d.size();

		//��ƽ���ָ���ѡ��
		it->m_Score = avg;
	}


}

void showScore(vector<Person>& v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "������" << it->m_Name << "��ƽ����Ϊ��" << it->m_Score << endl;
	}
}

int main()
{
	srand((unsigned int)time(NULL));//�������   ��������������������

	//1����5��ѡ��
	vector<Person>v;//���ѡ��
	createPerson(v);

	//�������
	/*for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "������" << it->m_Name << "��ƽ���֣�" << it->m_Score << endl;
	}*/

	//2������ѡ�ִ��
	setScore(v);

	//3��ʾ���÷�
	showScore(v);

	system("pause");
	return 0;
}