#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	int a[5] = { 1,2,3,4,5 };
	int b[5] = { 2,3,4,5,6 };
	int c = memcmp(a, b, 20);
	if (c > 0)
		printf("a>b\n");
	else if (c < 0)
		printf("a<b\n");
	else
		printf("a==b\n");
	return 0;
}