/*#include<iostream>
using namespace std;
#include<string>
//结构体指针
struct student
{
	string name;
	int age;
	int score;
};
int main()
{
	//创建学生结构体变量
	struct student s = { "zs",18,100 };

	//通过指针指向结构体变量
	//int* p = &s;           //不兼容
	struct student* p = &s;
	//或者
	//student* p = &s;

	//通过指针访问结构体变量中的数据
	//s.name = "zs";
	p->name = "李四";
	cout << "姓名： " << p->name << "年龄： " << p->age << "分数： " << p->score << endl;


	system("pause");
	return 0;
}*/