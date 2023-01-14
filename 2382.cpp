#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g;
	printf("     本程序需要输入一个数，然后输出是几位数，并反向输出\n");
	scanf("%d",&a);
	if(a>100000)
		printf("error\n");
	else
	{
		if(a>=0 && a<=9)
			printf("这是一位数\n");
		if(a>=10 && a<=99)
		{
			printf("这是两位数\n");
            b=a/10;
			c=a-10*b;
			d=c*10+b;
			printf("%d\n",d);
		}
		if(a>=100 && a<=999)
		{
			printf("这是三位数\n");
		b=a/100;
		c=(a-b*100)/10;
		d=(a-b*100-c*10);
		e=d*100+c*10+b;
		printf("%d\n",e);
		}
		if(a>=1000 && a<=9999)
		{
			printf("这是四位数\n");
		b=a/1000;
		c=(a-b*1000)/100;
		d=(a-b*1000-c*100)/10;
		e=(a-b*1000-c*100-d*10);
		f=e*1000+d*100+c*10+b;
		printf("%d\n",f);
		}
		if(a>=10000 && a<=99999)
		{
			printf("这是五位数\n");
			b=a/10000;
		c=(a-b*10000)/1000;
		d=(a-b*10000-c*1000)/100;
		e=(a-b*10000-c*1000-d*100)/10;
		f=(a-b*10000-c*1000-d*100-e*10);
		g=f*10000+e*1000+d*100+c*10+b;
		printf("%d\n",g);
		}
	}
return 0;
}
