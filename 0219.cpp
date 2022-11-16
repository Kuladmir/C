#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a[3][3];
	int i, j, k;
	int sum=0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			scanf("%d", &a[i][j]);
	}
	for (i = 0; i < 3; i++)
		sum = sum + a[i][i];
	printf("%d\n", sum);
	return 0;
}