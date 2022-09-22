#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = -2, b = 0;
	while (a++ && ++b)
		printf("%d %d\n", a, b);
	if ('\0' == 0)
		putchar('x');
	return 0;
}