#include<stdio.h>//判断三个数从大到小输出
void Max(int a,int b,int c)
{
	if(a>b && a>c)
	{
		printf("%d ",a);
		if(b>c)
		{
			printf("%d ",b);
			printf("%d ",c);
		}
		else
		{
			printf("%d ",c);
			printf("%d ",b);
		}
	}
	if(b>a && b>c)
	{
		printf("%d ",b);
		if(a>c)
		{
			printf("%d ",a);
			printf("%d ",c);
		}
		else
		{
			printf("%d ",c);
			printf("%d ",a);
		}
	}
	if(c>b && c>a)
	{
		printf("%d ",c);
		if(a>b)
		{
			printf("%d ",a);
			printf("%d ",b);
		}
		else
		{
			printf("%d ",b);
			printf("%d ",a);
		}
	}
}
int main()
{
	int arr[3];
	int i;
	for(i=0;i<3;i++)
		scanf("%d",&arr[i]);
	Max(arr[0],arr[1],arr[2]);
	return 0;
}

