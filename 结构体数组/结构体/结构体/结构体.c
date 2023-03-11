#include<stdio.h>

//结构体可以让c语言创建新的类型出来
struct stu
{
	char name[20];
	int age;
	double score;
};
//创建一个书的类型
struct book
{
	char name[20];//成员变量
	float price;
	char id[30];
};
int main()
{
	struct stu a = { "张三",20,85.5 };  //结构体的创建和初始化
	printf("1,%s %d %f\n", a.name,a.age,a.score);
	struct stu* pa = &a; 
	printf("2,%s %d %f\n", (*pa).name, (*pa).age, (*pa).score);
	printf("3,%s %d %f\n", pa->name, pa->age, pa->score);
	
	return 0;
}