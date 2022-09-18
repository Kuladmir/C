#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define PRINT(a) printf("the value of "#a" is %d\n",a)
#define Ca(x,y) x##y
#define Kula
int main()
{
	int a = 10;
	int b = 20;
	printf("the value of a is %d\n", a);
	printf("the value of ""a is %d\n", b);
	PRINT(a);
	PRINT(b);
#ifdef Kula
	int ab = 200;
	printf("%d\n", Ca(a, b));
#endif
	return 0;
}