#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	int a, i;
	scanf("%d", &a);
	if (a == 1)
		printf("不是素数也不是合数\n");
	else
	{
		if (a == 2)
			printf("是素数\n"); 
		for (i = 2; i <= sqrt(a); i++)
		{
			if (a % i == 0)
			{
				printf("是合数\n");
				break;
			}
		}
	}
	if (i > sqrt(a))
		printf("是素数\n");
	return 0;
}