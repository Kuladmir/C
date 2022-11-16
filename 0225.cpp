#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int gl(int a)
{
	int i, j=1;
	for (i = 1; i < a + 1; i++)
		j = j * i;
	return j;
}
int main()
{
	int i, j, k;
	printf("ÊäÈë²Ù×÷Êý:>");
	scanf("%d", &k);
	printf("%d\n", 1);
	for (i = 1; i < k+1; i++)
	{
		for (j = 0; j < i+1; j++)
		{
			if (j == 0 || j == i)
				printf("%d ", 1);
			else
				printf("%d ", gl(i) / (gl(j) * (gl(i - j))));
		}
		printf("\n");
	}
	return 0;
}