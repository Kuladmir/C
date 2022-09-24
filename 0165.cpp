#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char a[20];
	int b;
	FILE* pF;
	pF = fopen("test.txt", "a+");
	fprintf(pF, "%d %s",20, "Yado");
	fscanf(pF, "%s", &a);
	printf("%s\n", a);
	fclose(pF);
	pF = NULL;
	return 0;
}