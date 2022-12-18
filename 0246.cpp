#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i, j, n;
	printf("ÇëÊäÈë²Ù×÷Êý:>");
	scanf("%d", &n);
	for (i = 1; i < n + 1; i++)
	{
		for (j = 1; j < i+1; j++)
			printf("%d * %d == %2d ", i, j, i * j);
		printf("\n");
	}
	return 0;
}
