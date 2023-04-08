#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
void cal(int* p, int a)
{
	assert(p != NULL);
	int count = 0,i;
	for (i = 0; i < a; i++)
	{
		count += *p;
		p++;
	}
	printf("%d\n", count);
}
int main()
{
	int a, i;
	printf("请输入数组元素个数:>");
	scanf("%d", &a);
	int* p = (int*)malloc(a * sizeof(int));
	assert(p != NULL);
	printf("请输入%d个元素:>", a);
	for (i = 0; i < a; i++)
	{
		scanf("%d", p+i);
	}
	cal(p, a);
	return 0;
	free(p);
	p = NULL;
}