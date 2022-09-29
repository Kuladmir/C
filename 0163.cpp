#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	FILE* p = fopen("test.txt", "w");
	char ret;
	if (p == NULL)
		printf("Error\n");
	fputc(97, stdout);
	fgetc(stdin);
	fclose(p);
	p = NULL;
	return 0;
}