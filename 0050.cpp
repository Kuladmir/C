#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void swap(int* a, int* b)
{
	int* p;
	p = a;
	a = b;
	b = p;
	printf("e=%d f=%d\n", *a, *b);
}
int main()
{
	int a, b, c, d, e, f;
	printf("方法一\n");
	scanf("%d%d", &a, &b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("a=%d b=%d\n", a, b);
	printf("方法二\n");
	scanf("%d%d", &c, &d);
	c = c ^ d;
	d = c ^ d;
	c = c ^ d;
	printf("c=%d d=%d\n", c, d);
	printf("方法三\n");
	scanf("%d%d", &e, &f);
	swap(&e, &f);
	return 0;
}