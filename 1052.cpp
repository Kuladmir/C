#include<stdio.h>
int main()
{
	int arr[10];
	int i,left,right,mid;
	int ser;
	printf("输入10个从小到大的数字\n");
	for(i=0;i<10;i++)
		scanf("%d",&arr[i]);
	printf("输入要查找的数字\n");
	scanf("%d",&ser);
	left=0;
	i=0;
	right=sizeof(arr)/sizeof(arr[0])-1;
	while(left<=right)
	{
		mid=(left+right)/2;
		if(ser<arr[mid])
			right=mid-1;
		else if(ser>arr[mid])
			left=mid+1;
		else
		{
			printf("找到了\n");
			i=1;
			break;
		}
	}
	if(left>=right && i==0)
		printf("未找到\n");
	return 0;
}


