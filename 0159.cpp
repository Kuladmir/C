#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void fun(int* a, int* b)
{
	int* c;
	c = a;
	a = b;
	b = c;
}
int main()
{
	int x = 3, y = 5;
	int* p = &x, * q = &y;
	fun(p, q);
	printf("%d  %d", *p, *q);
	return 0;
}