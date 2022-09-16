#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	FILE* p = fopen("test.txt", "r");
	if (p == NULL)
		return 0;
	fseek(p, 2, SEEK_SET);
	int a = fgetc(p);
	printf("%c\n", a);
	int b = ftell(p);
	printf("%d\n", b);
	rewind(p);
	int c = ftell(p);
	printf("%d\n", c);
	fclose(p);
	p = NULL;
	return 0;
}