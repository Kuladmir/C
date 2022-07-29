#include<stdio.h>//分数求和
int main()
{
	int i,d;
	int c;
	for(i=1,c=0,d=1;i<=100;i++)
	{
		c=c+1/i*d;
		d=d*(-1);
	}
	printf("%d\n",c);
	return 0;
}


