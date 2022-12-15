#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i, j, k;
	for (i = 0; i < 5; i++)
	{
		printf("请输入一个数:>");
		scanf("%d", &j);
		for (k = 0; k < j; k++)
			printf("*");
		printf("\n");
	}
	return 0;
}
