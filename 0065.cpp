#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int arr(int x, int y)
{
	return x + y;
}
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	int c = arr(a, b);
	printf("%p	", &arr);//打印函数地址
	printf("%p\n", arr);//打印函数地址
	int (*p)(int, int) = arr;//函数指针
	printf("%d\n", (*p)(a, b));//简介调用函数
	return 0;
}