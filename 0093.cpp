#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char a[20];
	char b[20];
	gets_s(a);
	gets_s(b);
	int ret=strcmp(a, b);
	if (ret > 0)
		printf("a>b\n");
	else if (ret < 0)
		printf("a<b\n");
	else
		printf("a==b\n");
	return 0;
}