//√∞≈›≈≈–Ú¡∑œ∞

#include<stdio.h>
int main()
{
	int a[10], i, j,tmp=0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				tmp = a[j+1];
				a[j + 1] = a[j];
				a[j] = tmp;
			}
		}
	}
	for (i = 0; i < 10; i++)
		printf("%d ", a[i]);
	return 0;
}