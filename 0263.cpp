#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
void sort(int* p, int a)
{
	assert(p != NULL);
	int i, j, tmp;
	for (i = 0; i < a - 1; i++)
	{
		for (j = 0; j < a - 1 - i; j++)
		{
			if (*(p + j) > *(p + j + 1))
			{
				tmp = *(p + j);
				*(p + j) = *(p + 1 + j);
				*(p + 1 + j) = tmp;
			}
		}
	}
	for (i = 0; i < a; i++)
	{
		printf("%d", *(p + i));
		if (i != a)
			printf(" ");
	}
	printf("\n");
}
int main()
{
	int a, b;
	int* p;
	scanf("%d", &a);
	//printf("请输入元素个数:>");
	p = (int*)malloc(a * sizeof(int));
	assert(p != NULL);
	for (b = 0; b < a; b++)
	{
		scanf("%d", p + b);
	}
	sort(p, a);
	return 0;
	free(p);
}
