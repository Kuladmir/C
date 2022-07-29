#include<stdio.h>//判断1000-2000之间的闰年
int main()
{
	int i;
	for(i=1000;i<=2000;i+=4)
	{
		if(i%4==0)
			if(i%100!=0)
				printf("%d ",i);
			else if(i%400==0)
				printf("*%d ",i);
	}
	printf("\n");
	return 0;
}


