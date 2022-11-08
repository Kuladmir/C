#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i;
	double sum = 0,a, b, c;
	for (i = 1,a = 1,b = 1; i < 21; i++)
	{
		c = a + b;
		a = b;
		b = c;
		sum += c / a;
	}
	printf("½á¹ûÊÇ%lf\n", sum);
	return 0;
}