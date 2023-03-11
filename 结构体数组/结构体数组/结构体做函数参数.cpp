/*#include<iostream>
using namespace std;
#include<string>
//值传递和地址传递
//结构体做函数的参数
//将学生传入到一个参数中，打印学生身上索引信息
struct student
{
	string name;
	int age;
	int score;
};

//打印学生信息的函数
//1、值传递
void printStudent1(struct student s)
{
	s.age = 60;
	cout << "子函数一中 姓名 " << s.name << endl << "子函数一中 年龄 " << s.age << endl << "子函数一中 成绩 " << s.score << endl;
}
//2、地址传递
void printStudent2(struct student *p)
{
	p->age = 90;
	cout << "子函数二中 姓名 " << p->name << endl << "子函数二中 年龄 " << p->age << endl << "子函数二中 成绩 " << p->score << endl;
}

int main()
{
	struct student s;
	s.name = "张三";
	s.age = 10;
	s.score = 100;

	//cout << " xm " << s.name << "  age  " << s.age << "  score  " << endl;

	printStudent1(s);
	printStudent2(&s);
	cout << "main函数中 姓名 " << s.name << endl << "main函数中 年龄 " << s.age << endl << "main函数中 成绩 " << s.score << endl;
	
	system("pause");
	return 0;
}*/