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
	printf("����������������%d����С����%d\n", y,y1);
}
int main()
{
	int a, b, c;
	printf("��������������:>");
	scanf("%d%d%d", &a, &b, &c);
	Max(a, b, c);
	return 0;
}