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
	printf("����������Ԫ�ظ���:>");
	scanf("%d", &a);
	int* p = (int*)malloc(a * sizeof(int));
	assert(p != NULL);
	printf("������%d��Ԫ��:>", a);
	for (i = 0; i < a; i++)
	{
		scanf("%d", p+i);
	}
	cal(p, a);
	return 0;
	free(p);
	p = NULL;
}