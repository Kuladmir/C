#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a, b, c;
	printf("������������:>");
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
	printf("���Լ��Ϊ:%d����С������Ϊ%d\n", b, x*y/b);
	return 0;
}