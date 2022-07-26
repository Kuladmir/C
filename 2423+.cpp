#include<stdio.h>
int main()
{
	int a,b,c,d;
    scanf("%d",&a);
	for(b=1,c=0,d=1;b<=a;b++)
	{
		d=d*b;
		c=c+d;
	}
	printf("%d\n",c);
	return 0;
}
