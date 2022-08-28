#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void arr(int* p)//一级指针时的传参如下
{
	printf("%d\n", *p);
}
void arr2(int** p)//二级指针时的传参如下
{
	printf("%d\n", **p);
}
int main()
{
	int a = 5;
	int* p = &a;
	arr(p);//一级 - 一个指针变量
	arr(&a);//一级 - 一个地址
	int* b[10] = { &a };
	int** pp = &p;
	arr2(&p);//二级 - 一个一级指针的地址
	arr2(pp);//二级 - 一个二级指针
	arr2(b);//二级 - 一个指针数组的首元素地址
	return 0;
}