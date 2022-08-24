#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 9;
	//00000000 00000000 00000000 00001001
	//0 00000000 00000000000000000001001
	printf("%d\n", i);
	printf("%f\n", (float*)&i);
	float p = 9.0;//(-1)^0 * 1.001 * 2^3
	//0 10000010 00100000000000000000000
	printf("%d\n", p);
	printf("%f\n", p);
	return 0;
}