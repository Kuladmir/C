//¥Ú”°≥À∑®±Ì
#define N 12
#include<stdio.h>
int main()
{
	int i, j;
	for (i = 1; i < N + 1; i++)
	{
		for (j = 1; j < i + 1; j++)
		{
			if (j == i)
				printf("%d * %d = %2d", i, j, i * j);
			else
				printf("%d * %d = %2d  ", i, j, i * j);
		}
		printf("\n");
	}
	return 0;
}