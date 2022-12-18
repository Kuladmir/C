#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a, b;
	printf("请输入两个数做除法:>");
	scanf("%d%d", &a, &b);
	if (b != 0)
	{
		printf("%d ÷ %d == %d …… %d\n", a, b, a / b, a % b);
	}
	else
		printf("Error Input\n");
	return 0;
}
