#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a[10] = {1,2,3,4,5,6,7,8,9,10};
	int* p = a;
	int i;
	for (i = 0; i < 10; i++)
	{
		//四种方法等价
		printf("a[%d]=%d ", i,a[i]);
		printf("a[%d]=%d ", i,p[i]);
		printf("a[%d]=%d ", i,*(p + i));
		printf("a[%d]=%d ", i,*(a + i));
		printf("\n");
	}
		return 0;
	}