#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int i, j, k;
	printf("ÇëÊäÈë¿ØÖÆÊý:>");
	scanf("%d", &k);
	for (i = 1; i < k+1; i++)
	{
		for (j = 1; j < i + 1; j++)
			printf("%d * %d == %2d  ", i, j, i * j);
		printf("\n");
	}
	return 0;
}