#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a, i, b;
	int sum;
	for (i = 100; i < 1000; i++)
	{
		a = i;
		sum = 0;
		while(a!=0)
		{
			b = a % 10;
			a /= 10;
			sum += b * b * b;
		}
		if (sum == i)
			printf("%d ", i);
	}
	printf("\n");
	return 0;
}