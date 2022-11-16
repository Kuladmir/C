#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a[11] = { 1,4,9,16,25,36,49,64,81,100 };
	int b,i,j,k,tmp;
	scanf("%d", &b);
	for (i = 0; i < 11; i++)
	{
		if (a[i] > b)
			;
		else
		{
			a[10] = b;
			for (j = i; j < 11; j++)
			{
				for (k = i; k < 10 - j;k++)
				{
					if (a[k] > a[k + 1])
					{
						tmp = a[k];
						a[k] = a[k + 1];
						a[k + 1] = tmp;
					}
				}
			}
			break;
		}
	}
	for (i = 0; i < 11; i++)
		printf("%d ", a[i]);
	printf("\n");
	return 0;
}