#include<stdio.h>//���1000-2000֮�������
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


