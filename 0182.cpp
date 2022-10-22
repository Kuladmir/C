#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a, b, c;
	printf("请输入要计算的数:>");
	scanf("%d%d", &a, &b);
	do
	{
		c = a % b;
		a = b;
		b = c;
	} while (c);
	printf("%d\n", a);
}