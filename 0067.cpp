#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void math_pri(int a)
{
	int i, j;
	for (i = 1; i <= a; i++)
	{
		for (j = 1; j <= i; j++)
			printf("%d * %d = %2d  ", i, j, i * j);
		printf("\n");
	}
}
int main()
{
	int a;
	printf("ÇëÊäÈë²Ù×÷Êý:>");
	scanf("%d", &a);
	math_pri(a);
	return 0;
}