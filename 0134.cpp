#include<stdio.h>//计算1-100之间有几个含9的数字
int main()
{
	int i,count;
	for(i=1,count=0;i<=100;i++)
	{
		if(i%10==9)
			count++;
		else if(i/10==9)
			count++;
	}
	printf("%d\n",count);
	return 0;
}
