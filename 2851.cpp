#include<stdio.h>
int main()
{
	double *a,*b,*c;
	double d,e;
	scanf("%lf%lf",&d,&e);
	a=&d;
	b=&e;
	if(d<e)
	{
		c=a;
		a=b;
		b=c;
	}
	printf("%lf  >  %lf\n",*a,*b);
	return 0;
}

