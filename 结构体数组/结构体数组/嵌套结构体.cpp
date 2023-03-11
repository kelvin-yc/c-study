/*#include<iostream>
using namespace std;


//定义学生结构体
struct student
{
	string name;
	int age;
	int socre;

};

//嵌套结构体
//定义老师结构体
struct teacher
{
	int id;
	string name;
	int age;
	struct student stu;
};

int main()
{
	teacher t;
	t.id = 10000;
	t.name = "老王";
	t.age = 50;
	t.stu.name = "小王";
	t.stu.age = 100;
	t.stu.socre = 1000;

	cout << "老师的姓名为：" << t.name << "老师的编号为：" << t.id << "老师的年龄为：" << t.age << "老师的学生姓名为：" << t.stu.name << endl;

	system("pause");
	return 0;
}*/