#include<stdio.h>
double maax(double a,double b)
{
	return (a>b?a:b);
}
void max(double a,double b,double c,double d)
{
	b=maax(a,b);
	c=maax(b,c);
	d=maax(c,d);
	printf("最大的为%lf\n",d);
}
int main()
{
	double a,b,c,d;
	scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
	max(a,b,c,d);
	return 0;
}
