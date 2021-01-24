//#include<iostream>
//#include<string>
//using namespace std;
//
//struct student
//{
//	string name;
//	int age;
//	int score;
//};
////值传递
//void printSutdent1(struct student s)
//{
//	cout << "值传递函数打印" << "姓名：" << s.name << "年级：" << s.age << "成绩" << s.score << endl;
//}
//
//void printSutdent2(struct student* p)
//{
//	cout << "值传递函数打印" << "姓名：" << p->name << "年级：" << p->age << "成绩" << p->score << endl;
//}
//
//int main()
//{
//	struct student s = {"张三",18,96};
//	printSutdent1(s);
//	printSutdent2(&s);
//	cout << "main函数打印" <<"姓名：" << s.name << "年级：" << s.age << "成绩" << s.score << endl;
//}