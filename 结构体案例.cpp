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
//		cout << "教师姓名：" << T[i].tname <<"教师所带的学生如下："<< endl;
//		for (int j = 0; j < 5; j++)
//		{
//			cout << "\t学生姓名：" << T[i].stu[j].sname << " 学生成绩" << T[i].stu[j].score << endl;
//		}
//	}
//}
//
//int main()
//{
//	srand((unsigned int)time(NULL));//随机种子
//	struct Teacher T[3];
//	int len = sizeof(T) / sizeof(T[0]);
//	alloacteSpace(T, len);
//	printInfo(T, len);
//	return 0;
//}