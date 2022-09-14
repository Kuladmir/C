#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<errno.h>
int main()
{
	FILE*p = fopen("test.txt", "w");
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	fputc(97, p);
	fputc(98, p);
	fclose(p);
	p = NULL;
	return 0;
}