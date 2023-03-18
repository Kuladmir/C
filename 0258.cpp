#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	float f = 2.5 + 1e10;
	f = f - 1e10;
	printf("%f\n", f);
	return 0;
}

