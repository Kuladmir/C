#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
double a(double x, double y)
{
	return x + y;

}
double b(double x, double y)
{
	return x * y;
}
int main()
{
	double (*p[2])(double, double) = {a,b};
	double a = 10, b = 20;
	double c = p[1](a, b);
	double d = p[0](a, b);
	printf("%lf   %lf\n", c, d);
	return 0;
}