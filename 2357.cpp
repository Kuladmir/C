#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	printf("=v=  =v=  =v=  =v=  =v=  =v=  =v=  =v=  =v=  \n");
	printf("please input a,b,c,d:\n");
	scanf("%d,%d,%d,%d",&a,&b,&c,&d);
	e=a;
	if(e>b)
		e=b;
	if(e>c)
		e=c;
	if(e>d)
		e=d;
	printf("min=%d\n",e);
	printf("=v=  =v=  =v=  =v=  =v=  =v=  =v=  =v=  =v=  \n");
	return 0;
}