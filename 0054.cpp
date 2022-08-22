#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	int i,count=0;
	for (i = 0; i < 32; i++)
	{
		if ((a>>1) & 1 == 1)
		{
			count++;
		}
	}
	printf("%d\n", count);
	return 0;
}