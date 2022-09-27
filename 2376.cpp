#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,k,a[1000];
	k=0;
	printf("                       本程序可用来求1000以内的质数\n");
	printf("                             点开即为运行程序\n");
	for(i=0;i<1000;i++)
	{
		a[i]=i+1;
	}
	a[0]=0;
	for(i=0;i<999;i++)
	{
		for(j=i+1;j<1000;j++)
		{
			if(a[i]!=0&&a[j]!=0)
			{
				if(a[j]%a[i]==0)
				{
					a[j]=0;
				}
			}
		}
	}
	printf("     100以内所有的质数为如下所示\n");
	for(i=0;i<1000;i++)
	{
		if(a[i]!=0)
		{
			printf("%4d",a[i]);
			k++;
		}
		if(k%10==0)
		{
			printf("\n");
		}
	}
	printf("\n");
	return 0;
}

