#include<stdio.h>
int main()
{
	double *a,*b,*e;
	double c,d;
	scanf("%lf%lf",&c,&d);
	a=&c;
	b=&d;
	e=a;
	a=b;
	b=e;
	printf("%lf %lf\n",*a,*b);
	return 0;
}

