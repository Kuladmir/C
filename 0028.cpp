#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d",&a,&b);
	do
	{
		c=a%b;
		a=b;
		b=c;
	}while(b);
	printf("%d	",a);
	return 0;
}
