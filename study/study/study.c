#define _CRT_SECURE_NO_WARNINGS 1
//放在代码第一行
//写代码
//1，写主函数（main函数）
//从第一行开始执行-入口
//写个代码，打印：比特

#include <stdio.h>
#
/*int main()
{
	printf("比特");

	return 0;

}
//编译+链接+运行
//快捷键  ctrl+f5

*/





//数据类型
//计算机语言—写程序—解决生活问题
//浮点数 ，整形 ，
/*char   字符型
* short   短整形
* int     整形
* long    长整型
* long long   长长整形
* float      单精度浮点型
* double     双精度浮点型

*/



/*int main()
{
	//字符类型
	char ch = 'a';
	//整形
	int age = 10;
	//短整形
	short num = 20;
	//长整型
	long weight = 100;
	//浮点型
	float w = 55.5;       //单
	double l = 120.6;    //双
	printf("%d\n", age);


	return 0;
}*/



/*int main()
{
	printf("hele\n");
	printf("嘉欣\n");
	printf("%d\n", 100);//打印一个整数
	printf("%d\n", sizeof(char));//sizeof -关键字-操作符-计算类型或者变量所占空间大小    //1字节
	printf("%d\n", sizeof(short));                                                       //2字节	
	printf("%d\n", sizeof(int));														 //4字节
	printf("%d\n", sizeof(long));														 //4字节
	printf("%d\n", sizeof(long long));                                                   //8字节
	printf("%d\n", sizeof(float));                                                       //4字节
	printf("%d\n", sizeof(double));                                                      //8字节
	
	return 0;

}*/
/*
//byte   比特位
byte=8bit
kb=1024byte
mb=1024kb
gb=1024mb
tb=1024gb
pb=1024tb

*/    

/*char ch = 'a';
int age = 99;
float weight = 100.5;
*/

//生活中的一些数据；
//有些数据不能变：血型，性别，圆周率
//有些数据可变：工资，体重，年龄

/*变量，常量

int a=50         //全局变量
int main()
{
	
	int age = 20;      //局部变量
	double weight = 56.3;
	age = age + 1;
	printf("%d\n", age);
	weight = weight + 2;
	printf("%lf\n", weight);


	return 0;
}*/




//变量分类        局部变量   全局变量
//当局部变量与全局变量名字冲突时，局部优先
//不建议名字一样


/*int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d %d", &a, &b);      //输入两个数，把值赋给a和b（不建议使用scanf，由vs提供，不是c语言标准规定）
	sum = a + b;
	printf("%d\n", sum);


	return 0;
}*/










