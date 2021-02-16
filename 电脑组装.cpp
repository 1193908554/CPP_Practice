#include<iostream>
using namespace std;

//抽象不同零件类
class  CPU//抽象CPU类
{
public:
	//抽象的计算函数
	virtual void calcuate() = 0;
};

//抽象显卡类
class VideoCard
{
public:
	//抽象的显示函数
	virtual void display() = 0;
};

//抽象内存条类
class Memory
{
public:
	//抽象的存储函数
	virtual void storage() = 0;
};

//电脑类
class Computer
{
public:
	Computer(CPU* cpu, VideoCard* vc, Memory* mem)
	{
		m_cpu = cpu;
		m_vc = vc;
		m_mem = mem;
	}

	//提供工作的函数
	void work()
	{
		//让零件工作起来，调用接口
		m_cpu->calcuate();

		m_vc->display();

		m_mem->storage();
	}
	 
	//提供析构函数  释放三个电脑零件
	~Computer()
	{
		//释放cpu零件
		if (m_cpu != NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		}

		//释放显卡零件
		if (m_vc != NULL)
		{
			delete m_vc;
			m_vc = NULL;
		}

		//释放内存条零件
		if (m_mem != NULL)
		{
			delete m_mem;
			m_mem = NULL;
		}
	}

private:

	CPU* m_cpu;//CPU零件指针
	VideoCard* m_vc;//显卡零件指针
	Memory* m_mem;//内存条指针
};

//具体厂商
class IntelCPU :public CPU//Intel厂商
{
public:
	void calcuate()
	{
		cout << "这是Intel的CPU开始计算了" << endl;
	}
};

class IntelVideoCard :public VideoCard
{
public:
	void display()
	{
		cout << "这是Intel的显卡开始显示了" << endl;
	}
};

class IntelMemory :public Memory
{
public:
	void storage()
	{
		cout << "这是Intel的内存条开始存储了" << endl;
	}
};


class LenovoCPU :public CPU//Lenovo厂商
{
public:
	void calcuate()
	{
		cout << "这是Lenovo的CPU开始计算了" << endl;
	}
};

class LenovoVideoCard :public VideoCard
{
public:
	void display()
	{
		cout << "这是Lenovo的显卡开始显示了" << endl;
	}
};

class LenovoMemory :public Memory
{
public:
	void storage()
	{
		cout << "这是Lenovo的内存条开始存储了" << endl;
	}
};

void test01()
{
	//第一台电脑
	cout << "第一台电脑" << endl;
	CPU* intelCpu = new IntelCPU;
	VideoCard* intelCard = new IntelVideoCard;
	Memory* intelMem = new IntelMemory;

	//创建第一台电脑
	Computer* computer1 = new Computer(intelCpu, intelCard, intelMem);
	computer1->work();
	delete computer1;

	cout << "---------------------" << endl;
	cout << "第二台电脑" << endl;
	//第二台电脑
	Computer* computer2 = new Computer(new LenovoCPU, new LenovoVideoCard, new LenovoMemory);
	computer2->work();
	delete computer2;

	cout << "---------------------" << endl;
	cout << "第三台电脑" << endl;
	//第二台电脑
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
