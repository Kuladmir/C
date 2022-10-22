#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i, j, k;
	printf("请输入你希望的控制数:>");
	scanf("%d", &k);
	for (i = 1; i <= k; i++)
	{
		for (j = 1; j <= i; j++)
			printf("%d * %d == %2d  ", i, j, i * j);
		printf("\n");
	}
	return 0;
}