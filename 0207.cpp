#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	printf("计算1！+2！+……\n");
	int a, b, c,d;
	int sum = 0;
	printf("请输入操作数:>");
	scanf("%d", &b);
	for (a = 1; a < b+1; a++)
	{
		for (c = 1,d=1; c < a+1; c++)
		{
			d = d * c;
		}
		sum += d;
	}
	printf("%d\n", sum);
	return 0;
}