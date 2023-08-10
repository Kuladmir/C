//乘法表-练习
#include<stdio.h>
#define N 9 //可调整输出情况
int main()
{
	int i, j;
	for (i = 1; i < N + 1; i++)
	{
		for (j = 1; j < i + 1; j++)
			printf("%d * %d = %2d  ", i, j, i * j);
		printf("\n");
	}
	return 0;
}