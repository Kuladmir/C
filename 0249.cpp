#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a,i,c=0;
	scanf("%d", &a);
	/*
	for (i = 0; i < 32; i++)
	{
		if (a >> i & 1 == 1)
			c++;
	}
	*//*
	while (a)
	{
		a = a & (a - 1);
		c++;
	}
	*/
	printf("%d\n", c);
	return 0;
}