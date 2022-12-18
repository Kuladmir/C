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
	int x, y, x1, y1;
	x = max(a, b);
	y = max(x, c);
	x1 = min(a, b);
	y1 = min(a, b);
	printf("这三个数中最大的是%d，最小的是%d\n", y,y1);
}
int main()
{
	int a, b, c;
	printf("请输入三个数字:>");
	scanf("%d%d%d", &a, &b, &c);
	Max(a, b, c);
	return 0;
}