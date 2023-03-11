//指针：内存
#include<stdio.h>
//int main()
//{
//	int a = 10;//a在内存中要分配空间-4个字节
//	&a;      //只会拿出第一个字节的地址
//	printf("%p\n", &a);//%p专门打印地址
//	int *pa = &a;       //pa是用来存放地址的，在c语言中（pa）叫是指针变量
//	//*说明pa是指针
//	//int说明pa执行的对象是int类型的
//	char ch = 'w';
//	char* pc = &ch;
//	printf("%p\n", &ch);
//	return 0;
//}

//int main()
//{
//	int* pa = &pa;
//	return 0;
//}

//指针就是地址
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;//*解引用操作  *pa就是通过pa里面的地址找到a
//	// int* 是一个命令
//	printf("%d\n", a);
//
//	return 0;
//}

//指针变量有多大
//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(long long*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//	return 0;
//}

int main()
{
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(long long));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));
	return 0;
}