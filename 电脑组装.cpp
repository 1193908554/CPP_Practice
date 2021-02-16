#include<iostream>
using namespace std;

//����ͬ�����
class  CPU//����CPU��
{
public:
	//����ļ��㺯��
	virtual void calcuate() = 0;
};

//�����Կ���
class VideoCard
{
public:
	//�������ʾ����
	virtual void display() = 0;
};

//�����ڴ�����
class Memory
{
public:
	//����Ĵ洢����
	virtual void storage() = 0;
};

//������
class Computer
{
public:
	Computer(CPU* cpu, VideoCard* vc, Memory* mem)
	{
		m_cpu = cpu;
		m_vc = vc;
		m_mem = mem;
	}

	//�ṩ�����ĺ���
	void work()
	{
		//������������������ýӿ�
		m_cpu->calcuate();

		m_vc->display();

		m_mem->storage();
	}
	 
	//�ṩ��������  �ͷ������������
	~Computer()
	{
		//�ͷ�cpu���
		if (m_cpu != NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		}

		//�ͷ��Կ����
		if (m_vc != NULL)
		{
			delete m_vc;
			m_vc = NULL;
		}

		//�ͷ��ڴ������
		if (m_mem != NULL)
		{
			delete m_mem;
			m_mem = NULL;
		}
	}

private:

	CPU* m_cpu;//CPU���ָ��
	VideoCard* m_vc;//�Կ����ָ��
	Memory* m_mem;//�ڴ���ָ��
};

//���峧��
class IntelCPU :public CPU//Intel����
{
public:
	void calcuate()
	{
		cout << "����Intel��CPU��ʼ������" << endl;
	}
};

class IntelVideoCard :public VideoCard
{
public:
	void display()
	{
		cout << "����Intel���Կ���ʼ��ʾ��" << endl;
	}
};

class IntelMemory :public Memory
{
public:
	void storage()
	{
		cout << "����Intel���ڴ�����ʼ�洢��" << endl;
	}
};


class LenovoCPU :public CPU//Lenovo����
{
public:
	void calcuate()
	{
		cout << "����Lenovo��CPU��ʼ������" << endl;
	}
};

class LenovoVideoCard :public VideoCard
{
public:
	void display()
	{
		cout << "����Lenovo���Կ���ʼ��ʾ��" << endl;
	}
};

class LenovoMemory :public Memory
{
public:
	void storage()
	{
		cout << "����Lenovo���ڴ�����ʼ�洢��" << endl;
	}
};

void test01()
{
	//��һ̨����
	cout << "��һ̨����" << endl;
	CPU* intelCpu = new IntelCPU;
	VideoCard* intelCard = new IntelVideoCard;
	Memory* intelMem = new IntelMemory;

	//������һ̨����
	Computer* computer1 = new Computer(intelCpu, intelCard, intelMem);
	computer1->work();
	delete computer1;

	cout << "---------------------" << endl;
	cout << "�ڶ�̨����" << endl;
	//�ڶ�̨����
	Computer* computer2 = new Computer(new LenovoCPU, new LenovoVideoCard, new LenovoMemory);
	computer2->work();
	delete computer2;

	cout << "---------------------" << endl;
	cout << "����̨����" << endl;
	//�ڶ�̨����
	Computer* computer3 = new Computer(new IntelCPU, new LenovoVideoCard, new IntelMemory);
	computer3->work();
	delete computer3;

}



int main()
{
	test01();

	system("pause");
	return 0;
}
