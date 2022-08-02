#include<stdio.h>
int prime(int a)
{
	int b;
	for(b=2;b<a/2;b++)
	{
		if(a%b==0)
		{
			return 0;
			break;
		}
	}
	if(b>=a/2)
		return 1;
}
int main()
{
	int i;
	for(i=100;i<=200;i++)
	{
		if(prime(i)==1)
			printf("%d ",i);
	}
	return 0;
}



