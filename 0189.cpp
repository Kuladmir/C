#define _CRT_SECURE_NO_WARNINGS 1
/*
一个整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少？*/
#include<stdio.h>
#include<math.h>
int main()
{
	int i;
	double a = 0, b = 0;
	int a1, b1;
	for (i = 1;; i++)
	{
		a = sqrt(i + 100);
		b = sqrt(i + 268);
		a1 = (int)a;
		b1 = (int)b;
		if (i + 100 == a1 * a1 && i + 268 == b1 * b1)
		{
			printf("这个数是%d\n", i);
			break;
		}
	}
	return 0;
}