//#include<iostream>
//#include<string>
//#include<ctime>
//using namespace std;
//
//struct Student
//{
//	string sname;
//	int score;
//};
//
//struct Teacher
//{
//	string tname;
//	struct Student stu[5];
//};
//
//void alloacteSpace(struct Teacher T[], int len)
//{
//	string nameSeed = "ABCDE";
//	for (int i = 0; i < len; i++)
//	{
//		T[i].tname = "Teacher_";
//		T[i].tname += nameSeed[i];
//		for (int j = 0; j < 5; j++)
//		{
//			T[i].stu[j].sname = "Studnet_";
//			T[i].stu[j].sname += nameSeed[j];
//			
//			int random = rand() % 61 + 40;//40-99 
//			T[i].stu[j].score = random;
//		}
//	}
//}
//
//void printInfo(struct Teacher T[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << "��ʦ������" << T[i].tname <<"��ʦ������ѧ�����£�"<< endl;
//		for (int j = 0; j < 5; j++)
//		{
//			cout << "\tѧ��������" << T[i].stu[j].sname << " ѧ���ɼ�" << T[i].stu[j].score << endl;
//		}
//	}
//}
//
//int main()
//{
//	srand((unsigned int)time(NULL));//�������
//	struct Teacher T[3];
//	int len = sizeof(T) / sizeof(T[0]);
//	alloacteSpace(T, len);
//	printInfo(T, len);
//	return 0;
//}