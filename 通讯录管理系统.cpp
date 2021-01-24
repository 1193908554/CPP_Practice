#include<iostream>
#include<string>
#define MAX 1000
using namespace std;

//设计联系人结构体
struct Person
{
	//姓名
	string m_Name;
	//性别
	int m_Sex;
	//年龄
	int age;
	//电话
	string m_Phone;
	//住址
	string m_Addr;
};
//设计通讯录结构体
struct Addressbooks
{
	//通讯录中保存联系人数组
	struct Person  personArray[MAX];
	//通讯录中当前记录联系人的个数
	int m_Size;
};

//1.添加联系人
void addPerson(struct Addressbooks* abs)
{
	//判断通讯录是否已满
	if (abs->m_Size == MAX)
	{
		cout << "通讯录已满" << endl;
		return;
	}

	//添加具体联系人
	//姓名
	string name;
	cout << "请输入姓名：" << endl;
	cin >> name;
	abs->personArray[abs->m_Size].m_Name = name;
	
	
	//性别
	int sex = 0;
	cout << "请输入性别(1-男，2-女)：" << endl;
	while (true)
	{
		//如果输入合法值，就正常退出，否则就再次输入
		cin >> sex;
		if (sex >= 1 || sex <= 2)
		{
			abs->personArray[abs->m_Size].m_Sex = sex;
			break;
		}
		cout << "输入有误，请重新输入" << endl;
	}
	//年龄
	int age = 0;
	cout << "请输入年龄：" << endl;
	while (true)
	{
		//如果输入合法值，就正常退出，否则就再次输入
		cin >> age;
		if (age >= 0 || sex <= 150)
		{
			abs->personArray[abs->m_Size].age = age;
			break;
		}
		cout << "输入有误，请重新输入" << endl;
	}
	//电话
	string Phone;
	cout << "请输入联系电话：" << endl;
	cin >> Phone;
	abs->personArray[abs->m_Size].m_Phone = Phone;
	//地址
	string address;
	cout << "请输入家庭住址：" << endl;
	cin >> address;
	abs->personArray[abs->m_Size].m_Addr = address;

	//更新通讯录的人数
	abs->m_Size++;

	cout << "添加成功" << endl;

	system("pause");//按任意键继续
	system("cls");//清屏操作
}

//2.显示所有联系人
void showPerson(struct Addressbooks* abs)
{
	//判断通讯录中人数是否为0，如果为0就提示为空，反之显示联系人信息
	if (abs->m_Size == 0)
	{
		cout << "当前记录为空" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << "姓名：" << abs->personArray[i].m_Name << "\t";
			cout << "性别：" << (abs->personArray[i].m_Sex == 1 ? "男":"女") << "\t";

			cout << "年龄：" << abs->personArray[i].age << "\t";
			cout << "电话：" << abs->personArray[i].m_Phone << "\t";
			cout << "住址：" << abs->personArray[i].m_Addr << endl;
 		}
	}

	system("pause");//按任意键继续
	system("cls");//清屏操作
}

//检测联系人是否存在，如果存在，返回联系人所在数组中的具体的位置，不存在返回-1；
int isExist(struct Addressbooks* abs, string name)
{
	for (int i = 0; i < abs->m_Size; i++)
	{

		if (abs->personArray[i].m_Name == name)
		{
			return i;
		}
	}
	return -1;
}

//3.删除指定联系人
void deletePerson(struct Addressbooks* abs)
{
	cout << "请输入删除的联系人姓名：" << endl;

	string name;

	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1)
	{
		//查找到人，要进行删除操作
		for (int i = ret; i < abs->m_Size - 1; i++)
		{
			//数据前移
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->m_Size--;//更新通讯录中的人员数

		cout << "删除成功！" << endl;
	}
	else
	{

		cout << "查无此人" << endl;
	}

	system("pause");//按任意键继续
	system("cls");//清屏操作

}


//4、查找指定联系人信息
void findPerson(struct Addressbooks* abs)
{
	cout << "请输入你要查找的联系人" << endl;
	string name;
	cin >> name;
	//判断联系人是否存在
	int ret = isExist(abs, name);
	if (ret != -1)//找到联系人
	{
		cout << "姓名：" << abs->personArray[ret].m_Name << "\t";
		cout << "性别：" << abs->personArray[ret].m_Sex << "\t";
		cout << "年龄：" << abs->personArray[ret].age << "\t";
		cout << "电话：" << abs->personArray[ret].m_Phone << "\t";
		cout << "住址：" << abs->personArray[ret].m_Addr << endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}

	system("pause");
	system("cls");
}

//5、修改指定联系人信息
void modifyPerson(struct Addressbooks* abs)
{
	cout << "请输入你要修改的联系人姓名：" << endl;
	string name;
	cin >> name;

	int ret = isExist(abs, name);
	if (ret != -1)
	{
		//姓名
		string name;
		cout << "请输入姓名：" << endl;
		cin >> name;
		abs->personArray[ret].m_Name = name;
		//性别
		int sex = 0;
		cout << "请输入性别(1-男，0-女):" << endl;
		while (true)
		{
			cin >> sex;
			if (sex == 0 || sex == 1)
			{
				abs->personArray[ret].m_Sex = sex;
				break;
			}
			else
			{
				cout << "输入有误！请重新输入。" << endl;
			}
		}
		//年龄
		int age = 0;
		cout << "请输入年龄：" << endl;
		cin >> age;
		abs->personArray[ret].age = age;
		//电话
		string phone;
		cout << "请输入联系电话：" << endl;
		cin >> phone;
		abs->personArray[ret].m_Phone = phone;

		//住址
		string address;
		cout << "请输入家庭地址：" << endl;
		cin >> address;
		abs->personArray[ret].m_Addr = address;
		cout << "修改成功" << endl;

	}
	else
	{
		cout << "查无此人" << endl;
	}

	system("pause");
	system("cls");
}

//6、清空所有人联系人
void cleanPerson(struct Addressbooks* abs)
{
	abs->m_Size = 0;//将当前记录联系人数量重置为0，做逻辑清空
	cout << "通讯录已清空" << endl;
	
	system("pause");
	system("cls");
}

//菜单
void showMenu()
{ 
	cout << "***********************" << endl;
	cout << "*****1、添加联系人*****" << endl;
	cout << "*****2、显示联系人*****" << endl;
	cout << "*****3、删除联系人*****" << endl;
	cout << "*****4、查找联系人*****" << endl;
	cout << "*****5、修改联系人*****" << endl;
	cout << "*****6、清空联系人*****" << endl;
	cout << "*****0、退出通讯录*****" << endl;
	cout << "***********************" << endl;
}


int main()
{
	//创建通讯录的结构体变量
	struct Addressbooks abs;

	//初始化通讯录中归档前记录人员个数
	abs.m_Size = 0;

	int select = 0;//创建用户选择的变量

	while (true)
	{
		//菜单调用
		showMenu();

		cin >> select;
		switch (select)
		{
		case 1:  //1、添加联系人
			addPerson(&abs);//利用改地址传递，才能修饰实参
			break;
		case 2:  //1、显示联系人
			showPerson(&abs);
			break;
		case 3:  //1、删除联系人
			deletePerson(&abs);
			break;
		case 4:  //1、查找联系人
			findPerson(&abs);
			break;
		case 5:  //1、修改联系人
			modifyPerson(&abs);
			break;
		case 6:  //1、清空联系人
			cleanPerson(&abs);
			break;
		case 0:  //1、退出通讯录
			cout << "欢迎下次使用" << endl;
			system("oause");
			return 0;
			break;
		default:
			break;
		}
	}

	system("pause");
	return 0;
}