#include<stdio.h>
int main()
{
	double a,b,c,t;
	scanf("%lf%lf%lf",&a,&b,&c);
if(a<b)
{
	t=a;
	a=b;
	b=t;
}
if(a<c)
printf("%.2lf,%.2lf,%.2lf",c,a,b);
else
{
	if(c>b)
		printf("%.2lf,%.2lf,%.2lf",a,c,b);
	else
		printf("%.2lf,%.2lf,%.2lf",a,b,c);
}
return 0;
}
