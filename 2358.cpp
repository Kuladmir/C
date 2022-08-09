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
printf("%.2lf",c);
else
{
	if(c>b)
		printf("%.2lf",a);
	else
		printf("%.2lf",a);
}
return 0;
}
