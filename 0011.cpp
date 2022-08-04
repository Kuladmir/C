#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d",&a);
	b=0;
	c=0;
	while(a)
	{
		b++;
		c=c+a%10;
		a/=10;
	}
	printf("该数是%d位数，各个位数和为%d\n",b,c);
	return 0;
}


