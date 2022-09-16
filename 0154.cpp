#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	FILE* p = fopen("test.txt","r");
	int c;
	if (p == NULL)
		perror("The problem is");
	while ((c = fgetc(p)) != EOF)
		printf("%c ", c);
	if (ferror(p))
		printf("Problem(s)\n");
	else if (feof(p))
		perror("Successful");
	fclose(p);
	p = NULL;
	return 0;
}