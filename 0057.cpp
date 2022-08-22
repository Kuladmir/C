#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	int count = 0;
	while (a)
	{
		a = a & (a - 1);
		count++;
	}
	printf("%d\n", count);
	return 0;
}