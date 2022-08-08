#include<stdio.h>
int main()
{
	double a,b,c,d,e;
	printf("please input a,b,c,d:\n");
	scanf("%lf,%lf,%lf,%lf",&a,&b,&c,&d);
	e=a;
	if(e<b)
		e=b;
	if(e<c)
		e=c;
	if(e<d)
		e=d;
	printf("max=%lf\n",e);
	return 0;
}

