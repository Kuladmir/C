#include<stdio.h>//����1-100֮���м�����9������
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
