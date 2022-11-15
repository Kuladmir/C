#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define D >
#define S <
int main()
{
	int a, b;
	printf("请输入两个数:>");
	scanf("%d%d", &a, &b);
	if (a D b)
		printf("a > b\n");
	else if (a S b)
		printf("a < b\n");
	else
		printf("a == b\n");
	return 0;
}