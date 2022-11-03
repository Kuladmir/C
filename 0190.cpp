#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i,j,a;
	printf("请输入输出的行数:>");
	scanf("%d", & a);
	for (i = 1; i <= a; i++)
	{
		for (j = 1; j <= i; j++)
			printf("* ");
		printf("\n");
	}
	return 0;
}