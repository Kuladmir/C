#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int b = 5;
	void* a = &b;
	*(int*)a = 10;
	printf("%d\n", *(int*)a);
	return 0;
}
