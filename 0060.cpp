#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a[] = { 1,2,3,4,5 };
	int b[] = { 2,3,4,5,6 };
	int c[] = { 3,4,5,6,7 };
	int* p[] = {a,b,c};
	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
			printf("%d ", *(p[i] + j));
		printf("\n");
	}
	printf("\n");
	return 0;
}