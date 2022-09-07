#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<errno.h>
int main()
{
	FILE* p = fopen("test.c", "r");
	if (p == NULL)
		printf("%s\n", strerror(errno));
	else
		printf("Open successfully\n");
	return 0;
}