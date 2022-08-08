#include<stdio.h>
int main()
{
	float a,b,c,d;
	printf("please input a,b,c:\n");
	scanf("%f,%f,%f",&a,&b,&c);
	d=a;
	if(d>b)
	d=b;
	if(d>c)
    d=c;
	printf("min=%f\n",d);
	return 0;
}
