#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void count(int a)
{
	if (a != 0)
	{
		count(a / 10);
		printf("%d ", a % 10);
		a /= 10;
	}
}
int main()
{
	int a;
	printf("请输入一个五位数及以下的数:>");
	scanf("%d", &a);
	count(a);
	printf("\n");
	return 0;
}