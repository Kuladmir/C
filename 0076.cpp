#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a[10];
	int i, j, tmp;
	printf("请输入一组数:>");
	for (i = 0; i < 10; i++)
		scanf("%d", &a[i]);
	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}
	}
	for (i = 0; i < 10; i++)
		printf("%d ", a[i]);
	return 0;
}