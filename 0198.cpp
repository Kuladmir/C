#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	printf("请输入两个数:>");
	int a, b, c,d,e;
	scanf("%d%d", &a, &b);
	d = a;
	e = b;
	do
	{
		c = a % b;
		a = b;
		b = c;
	} while (c != 0);
	printf("最大公约数为%d,", a);
	printf("最小公倍数为%d\n",d*e/a);
	return 0;
}