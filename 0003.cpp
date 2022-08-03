#include<stdio.h>//ì³²¨ÄÇÆõÊýÁÐ
int main()
{
	long int a,b,c,d,e;
	scanf("%d",&a);
	if(a==1 || a==2)
		printf("%d\n",1);
	else
	{
		for(b=3,c=1,d=1;b<=a;b++)
		{
			e=c+d;
			c=d;
			d=e;
		}
		printf("%d\n",e);
	}
	return 0;
}

		
			
