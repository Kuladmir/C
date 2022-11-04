#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	int a, b, i, d;
	for (i = 101; i <= 200; i++)
	{
		for (b = 2; b < sqrt(i) + 1; b++)
		{
			d = 0;
			if (i % b == 0)
			{
				d = 1;
				break;
			}
		}
		if (d == 1)
			;
		else
			printf("%d ", i);
	}
	printf("\n");
	return 0;
}