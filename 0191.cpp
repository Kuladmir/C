#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int max(int a, int b)
{
	return a > b ? a : b;
}
int min(int a, int b)
{
	return a < b ? a : b;
}
void Max(int a, int b, int c)
{
	int x = max(a, b);
	int y = max(x, c);
	int x1 = min(a, b);
	int x2 = min(x1, c);
	printf("三个数从大到小以此为：%d %d %d\n", y, x, x2);
}

int main()
{
	int a, b, c;
	printf("请输入三个整数:>");
	scanf("%d%d%d", &a, &b, &c);
	Max(a, b, c);
	return 0;
}