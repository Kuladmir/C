#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int (*p)[10]=&a;//数组指针的定义
	char* b[5];
	int i;
	char* (*pa)[5]=&b;//数组指针的定义，此类似于二次指针
	//详解：*pa说明pa是个指针，[5]说明pa指向一个数组，char* 说明pa指向数组的元素类型
	//数组指针的简单用法
	for (i = 0; i < 10; i++)
	{
		printf("a[%d] = %d	", i,(*p)[i]);
		printf("a[%d] = %d\n", i,*(*p + i));
	}
	return 0;
}