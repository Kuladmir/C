#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define Pi(a,b) { int i;i=a;a=b;b=i;}
int main()
{
	int a, b;
	printf("请输入两个数:>");
	scanf("%d%d", &a, &b);
	Pi(a, b);
	printf("%d %d\n", a, b);
	return 0;
}