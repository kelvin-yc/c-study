#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
//作用域与生命周期
//
//int g_val = 2021;
//int main()
//{
//	printf("hehe\n");
//	printf("1:%d\n", g_val);
//	
//	{
//		int a = 10;
//		printf("a=%d\n", a);
//		printf("2:%d\n", g_val);
//	}
//	
//	printf("3:%d\n", g_val);
//	return 0;
//
//}
//声明变量
//extern int g_val;
//int main()
//{
//	printf("%d\n", g_val);
//
//	return 0;
//}

//变量的生命周期：变量的创建和销毁之间的时间段

//局部变量的生命周期
//全局变量的生命周期
//int main()
//{
//	{
//		int a = 10;
//		printf("%d\n", a);
//
//	}
//	return 0;
//}




//常量
//字面常量
//const修饰常变量
//
//int main()
//{
//
//	/*3.14;
//	10;
//	'a';
//	"abcdeg";*/
//	const int num = 10;
//	//num = 20;    常变量不可修改
//	printf("%d\n", num);//20
//
//	return 0;
//}
 

//字符串+转义字符+注释
//字符串就是一串字符
//字符串在结尾的位置隐藏了一个\0的字符
//\0是字符串的结束标志
// int main()
//{
//	//字符数组-一组相同类型的元素
//
//	/*char arr[]="hello";*/
//	char arr1[4] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);//无法结束 因为字符串以\0结束，但是arr2字符串找不到\0
//	char arr3[] = { 'a','b','c' ,'\0' };
//	printf("%s\n", arr3);
//	int len=strlen("abc");//头文件是string
//	printf("%d\n", len);
//	//求字符串长度
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr3));
//	printf("%d\n", strlen(arr2));         //printf在打印数据时，可以指定打印格式   %d数字    %s字符串   %s一个字符
//
//
//	return 0;
//}
//初始转义字符
/*
	\t  tab
	\n  换行
	\\  防止被理解为转义字符
	\r  回车
	\v  垂直制表符
	\a  警告字符（响一下）
	\f  进纸符
	\b  退格符
	\130   八进制数
	\x30     
*/
//int main()
//{
//	printf("%c\n", '\130');  //八进制的130是十进制的88        X的ASCII值为88
//	printf("%d\n", '\101');  //A-65-8进制-101
//	printf("%c\n", '\x30');  //十六进制的30是十进制的48       48——ASCII  0
//	printf("%d\n", strlen("abc"));//3
//	printf("%d\n", strlen("c:\test\328\test.c"));// "\32是一个八进制数，八进制数不可能出现8"
//	return 0;
//}
//A-65
//B-66
//ASCII码表
//注释
//选择语句
/*int main()
{
	int input = 0;//存放输入变量的值
	printf("加入比特：>\n");
	printf("那就要好好学习（1/0）?>:");
	scanf_s("%d", &input);
	if (input == 1)
		printf("good offer\n");
	else if(input==0)
		printf("烤红薯\n");

	return 0;
}*/


//循环语句
//比特-30000代码-找一份不错的工作
 /*int main()
{
	int line = 0;
	while (line < 30)
	{
		printf("写代码:%d\n",line);
		line++;

	}
	if(line==30)
	return 0;
	{
		printf("good offer\n");
	}
}*/


//函数：
//f(x)=2*x+5
int main()
{
	int num1 = 0;
	int num2 = 0;
	int a = 0;
	scanf_s("%d%d\n", &num1,&num2);
	a = num1 + num2;
	printf("%d\n", a);

	return 0;
}















