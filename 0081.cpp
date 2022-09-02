#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a[5] = { 6,7,8,9,10 };
	int* b = a;
	*(b++) += 3;
	printf("%d %d\n", a[0], *b);
	return 0;
}