#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define a(x) ((x)*(x))
int main()
{
	int b;
	printf("������һ����:>");
	scanf("%d", &b);
	int c = a(b);
	printf("%d\n", c);
	return 0;
}