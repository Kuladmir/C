#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	printf("一球从100米高度自由落下，每次落地后反跳回原高度的一半；"
		"再落下，求它在第10次落地时，共经过多少米？第10次反弹多高？\n");
	double a = 100;
	int i;
	double sum = 100;
	for (i = 1; i < 10; i++)
	{
		a /= 2;
		sum += a*2;
	}
	printf("\n小球10次落地后，运动距离为%lf，反弹高度为%lf", sum,a);
	return 0;
}