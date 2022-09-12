#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>
int main()
{
	int* p = (int*)malloc(40);
	int i;
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	else
	{
		for (i = 0; i < 10; i++)
		{
			*(p + i) = i;
			printf("%d ", *(p + i));
		}
		printf("\n");
	}
	free(p);
	p = NULL;
	return 0;
}