#include<stdio.h>//Êä³ö³Ë·¨±í
int main()
{
	int i,j,n;
	scanf("%d",&n);
	for(i=1;i<n+1;i++)
	{
		for(j=1;j<i+1;j++)
		{
			printf("%d*%d=%d;",i,j,i*j);
		}
		printf("\n");
	}
	return 0;
}


