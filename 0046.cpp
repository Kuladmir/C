#include<stdio.h>
int main()
{
	int a,b,c,d,n;
	printf("请输入要求的位数;>");
	scanf("%d",&a);
	b=1;
	c=1;
	if(a==1 || a==2)
		printf("斐波那契数列第%d位是%d\n",a,b);
	if(a>=3)
	{
		for(n=3;n<=a;n++)
		{
			d=b+c;
			b=c;
			c=d;
		}
		printf("斐波那契数列第%d位是%d\n",a,d);
	}
	return 0;
}

