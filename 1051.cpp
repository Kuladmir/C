#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d",&a,&b);
	if(a%b==0)
	{
		printf("%d\n",b);
	}
	else
	{
		while(a%b)//Õ·×ªÏà³ý·¨
		{
			c=a%b;
			a=b;
			b=c;
		}
		printf("%d\n",c);
	}
	return 0;
}
