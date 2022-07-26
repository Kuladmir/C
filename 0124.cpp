#include<stdio.h>//º∆À„1!+2!+3!+°≠°≠n!
int main()
{
	int a,b,c,i,j;
	scanf("%d",&a);
	c=0;
	for(i=1;i<=a;i++)
	{
		for(j=1,b=1;j<=i;j++)
		{
			b=b*j;
		}
		c=c+b;
	}
	printf("%d\n",c);
	return 0;
}

	   
		