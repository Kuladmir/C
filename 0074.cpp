#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a, b, i;
	printf("ÇëÊäÈë²Ù×÷Êý:>");
	scanf("%d", &a);
	for (i = 0, b = 0; i <= a; i++)
		b = b + i;
	printf("%d\n", b);
	return 0;
}