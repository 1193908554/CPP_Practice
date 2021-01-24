#include<iostream>
#include<string>
#define MAX 1000
using namespace std;

//�����ϵ�˽ṹ��
struct Person
{
	//����
	string m_Name;
	//�Ա�
	int m_Sex;
	//����
	int age;
	//�绰
	string m_Phone;
	//סַ
	string m_Addr;
};
//���ͨѶ¼�ṹ��
struct Addressbooks
{
	//ͨѶ¼�б�����ϵ������
	struct Person  personArray[MAX];
	//ͨѶ¼�е�ǰ��¼��ϵ�˵ĸ���
	int m_Size;
};

//1.�����ϵ��
void addPerson(struct Addressbooks* abs)
{
	//�ж�ͨѶ¼�Ƿ�����
	if (abs->m_Size == MAX)
	{
		cout << "ͨѶ¼����" << endl;
		return;
	}

	//��Ӿ�����ϵ��
	//����
	string name;
	cout << "������������" << endl;
	cin >> name;
	abs->personArray[abs->m_Size].m_Name = name;
	
	
	//�Ա�
	int sex = 0;
	cout << "�������Ա�(1-�У�2-Ů)��" << endl;
	while (true)
	{
		//�������Ϸ�ֵ���������˳���������ٴ�����
		cin >> sex;
		if (sex >= 1 || sex <= 2)
		{
			abs->personArray[abs->m_Size].m_Sex = sex;
			break;
		}
		cout << "������������������" << endl;
	}
	//����
	int age = 0;
	cout << "���������䣺" << endl;
	while (true)
	{
		//�������Ϸ�ֵ���������˳���������ٴ�����
		cin >> age;
		if (age >= 0 || sex <= 150)
		{
			abs->personArray[abs->m_Size].age = age;
			break;
		}
		cout << "������������������" << endl;
	}
	//�绰
	string Phone;
	cout << "��������ϵ�绰��" << endl;
	cin >> Phone;
	abs->personArray[abs->m_Size].m_Phone = Phone;
	//��ַ
	string address;
	cout << "�������ͥסַ��" << endl;
	cin >> address;
	abs->personArray[abs->m_Size].m_Addr = address;

	//����ͨѶ¼������
	abs->m_Size++;

	cout << "��ӳɹ�" << endl;

	system("pause");//�����������
	system("cls");//��������
}

//2.��ʾ������ϵ��
void showPerson(struct Addressbooks* abs)
{
	//�ж�ͨѶ¼�������Ƿ�Ϊ0�����Ϊ0����ʾΪ�գ���֮��ʾ��ϵ����Ϣ
	if (abs->m_Size == 0)
	{
		cout << "��ǰ��¼Ϊ��" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << "������" << abs->personArray[i].m_Name << "\t";
			cout << "�Ա�" << (abs->personArray[i].m_Sex == 1 ? "��":"Ů") << "\t";

			cout << "���䣺" << abs->personArray[i].age << "\t";
			cout << "�绰��" << abs->personArray[i].m_Phone << "\t";
			cout << "סַ��" << abs->personArray[i].m_Addr << endl;
 		}
	}

	system("pause");//�����������
	system("cls");//��������
}

//�����ϵ���Ƿ���ڣ�������ڣ�������ϵ�����������еľ����λ�ã������ڷ���-1��
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

//3.ɾ��ָ����ϵ��
void deletePerson(struct Addressbooks* abs)
{
	cout << "������ɾ������ϵ��������" << endl;

	string name;

	cin >> name;
	int ret = isExist(abs, name);
	if (ret != -1)
	{
		//���ҵ��ˣ�Ҫ����ɾ������
		for (int i = ret; i < abs->m_Size - 1; i++)
		{
			//����ǰ��
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->m_Size--;//����ͨѶ¼�е���Ա��

		cout << "ɾ���ɹ���" << endl;
	}
	else
	{

		cout << "���޴���" << endl;
	}

	system("pause");//�����������
	system("cls");//��������

}


//4������ָ����ϵ����Ϣ
void findPerson(struct Addressbooks* abs)
{
	cout << "��������Ҫ���ҵ���ϵ��" << endl;
	string name;
	cin >> name;
	//�ж���ϵ���Ƿ����
	int ret = isExist(abs, name);
	if (ret != -1)//�ҵ���ϵ��
	{
		cout << "������" << abs->personArray[ret].m_Name << "\t";
		cout << "�Ա�" << abs->personArray[ret].m_Sex << "\t";
		cout << "���䣺" << abs->personArray[ret].age << "\t";
		cout << "�绰��" << abs->personArray[ret].m_Phone << "\t";
		cout << "סַ��" << abs->personArray[ret].m_Addr << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}

	system("pause");
	system("cls");
}

//5���޸�ָ����ϵ����Ϣ
void modifyPerson(struct Addressbooks* abs)
{
	cout << "��������Ҫ�޸ĵ���ϵ��������" << endl;
	string name;
	cin >> name;

	int ret = isExist(abs, name);
	if (ret != -1)
	{
		//����
		string name;
		cout << "������������" << endl;
		cin >> name;
		abs->personArray[ret].m_Name = name;
		//�Ա�
		int sex = 0;
		cout << "�������Ա�(1-�У�0-Ů):" << endl;
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
				cout << "�����������������롣" << endl;
			}
		}
		//����
		int age = 0;
		cout << "���������䣺" << endl;
		cin >> age;
		abs->personArray[ret].age = age;
		//�绰
		string phone;
		cout << "��������ϵ�绰��" << endl;
		cin >> phone;
		abs->personArray[ret].m_Phone = phone;

		//סַ
		string address;
		cout << "�������ͥ��ַ��" << endl;
		cin >> address;
		abs->personArray[ret].m_Addr = address;
		cout << "�޸ĳɹ�" << endl;

	}
	else
	{
		cout << "���޴���" << endl;
	}

	system("pause");
	system("cls");
}

//6�������������ϵ��
void cleanPerson(struct Addressbooks* abs)
{
	abs->m_Size = 0;//����ǰ��¼��ϵ����������Ϊ0�����߼����
	cout << "ͨѶ¼�����" << endl;
	
	system("pause");
	system("cls");
}

//�˵�
void showMenu()
{ 
	cout << "***********************" << endl;
	cout << "*****1�������ϵ��*****" << endl;
	cout << "*****2����ʾ��ϵ��*****" << endl;
	cout << "*****3��ɾ����ϵ��*****" << endl;
	cout << "*****4��������ϵ��*****" << endl;
	cout << "*****5���޸���ϵ��*****" << endl;
	cout << "*****6�������ϵ��*****" << endl;
	cout << "*****0���˳�ͨѶ¼*****" << endl;
	cout << "***********************" << endl;
}


int main()
{
	//����ͨѶ¼�Ľṹ�����
	struct Addressbooks abs;

	//��ʼ��ͨѶ¼�й鵵ǰ��¼��Ա����
	abs.m_Size = 0;

	int select = 0;//�����û�ѡ��ı���

	while (true)
	{
		//�˵�����
		showMenu();

		cin >> select;
		switch (select)
		{
		case 1:  //1�������ϵ��
			addPerson(&abs);//���øĵ�ַ���ݣ���������ʵ��
			break;
		case 2:  //1����ʾ��ϵ��
			showPerson(&abs);
			break;
		case 3:  //1��ɾ����ϵ��
			deletePerson(&abs);
			break;
		case 4:  //1��������ϵ��
			findPerson(&abs);
			break;
		case 5:  //1���޸���ϵ��
			modifyPerson(&abs);
			break;
		case 6:  //1�������ϵ��
			cleanPerson(&abs);
			break;
		case 0:  //1���˳�ͨѶ¼
			cout << "��ӭ�´�ʹ��" << endl;
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