#include<stdio.h>//输入三个数，从大到小输出
int main()
{
	int arr[3];
	int i,c;
	for(i=0;i<3;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<2;i++)
	{
		if(arr[i]<arr[i+1])
		{
			c=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=c;
		}
	}
	if(arr[0]<arr[1])
	{
		c=arr[0];
		arr[0]=arr[1];
		arr[1]=c;
	}
	for(i=0;i<3;i++)
		printf("%d ",arr[i]);
	printf("\n");
	return 0;
}


