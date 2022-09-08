#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	int a[5],b[5];
	int i;
	for (i = 0; i < 5; i++)
		scanf("%d", &a[i]);
	memcpy(b, a, 20);
	for (i = 0; i < 5; i++)
		printf("%d ", b[i]);
	printf("\n");
	return 0;
}