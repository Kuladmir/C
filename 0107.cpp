#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void swap(int a, int b)
{
	printf("a=%d,b=%d\n", a, b);
	int c;
	c = a;
	a = b;
	b = c;
	printf("a=%d,b=%d\n", a, b);
}
int main()
{
	int a, b;
	printf("请输入两个数:>");
	scanf("%d%d", &a, &b);
	swap(a, b);
	return 0;
}