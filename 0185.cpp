#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i, j;
	double a[25], b[25], c[25], d[25];
	printf("请输入要计算的组数:>");
	scanf("%d", &i);
	printf("m:>");
	for (j = 0; j < i; j++)
		scanf("%lf", &c[j]);
	printf("V:>");
	for (j = 0; j < i; j++)
		scanf("%lf", &d[j]);
	for (j = 0; j < i; j++)
	{
		a[j] = d[j] * 0.002 * 12.69/c[j];
		b[j] = a[j] * 78.8;
	}	
	printf("X1:");
	for (j = 0; j < i; j++)
		printf("%lf ", a[j]);
	printf("\n");
	printf("X2:");
	for (j = 0; j < i; j++)
		printf("%lf ", b[j]);
	printf("\n");
	return 0;
}