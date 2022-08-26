#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void print(int (*p)[4],int x,int y)
//当然可以写成   void print(int a[3][4],int x,int y)
{
	int i, j;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
			printf("%-2d ", *(*(p+i) + j));
		printf("\n");
	}
}
int main()
{
	int a[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
	int i;
	print(a, 3, 4);
	return 0;
}