#include<stdio.h>
int main()
{
	int a,b,c;
	printf("                         本程序用来计算输入数每一位相加之和与判断是几位数\n");
	b=0;
	c=0;
	scanf("%d",&a);
	printf("即将对%d进行计算\n",a);
	while(a)
	{
		b=b+a%10;
		a=a/10;
		c=c+1;
	}
	printf("每一位之和为%d\n",b);
	printf("它是%d位数\n",c);
	return 0;
}


