#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a, b, c;
	printf("请输入两个数:>");
	scanf("%d%d", &a, &b);
	int x, y;
	x = a;
	y = b;
	do
	{
		c = a % b;
		a = b;
		b = c;
	} while (c==0);
	printf("最大公约数为:%d，最小公倍数为%d\n", b, x*y/b);
	return 0;
}