#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int max(int a, int b)
{
	return a > b ? a : b;
}
void Max(int a, int b, int c)
{
	int x = max(a, b);
	int y = max(x, c);
	printf("%d ", y);
	if (y == a)
		printf("%d %d\n", b > c ? b : c,b < c ? b : c);
	else if (y == b)
		printf("%d %d\n", a > c ? a : c,a < c ? a : c);
	else
		printf("%d %d\n", a > b ? a : b,a < b ? a : b);
}
int main()
{
	int a, b, c, d;
	scanf("%d%d%d", &a, &b, &c);
	Max(a, b, c);
	return 0;
}