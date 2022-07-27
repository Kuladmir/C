#include<Stdio.h>//二分法查找数字
int  main()
{
	int arr[10];
	int left,right,mid,i,b,c;
	printf("输入10个从小到大的整数，可以相等\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	b=0;
	for(i=0;i<9;i++)
	{
		if(arr[i]<=arr[i+1])
			b++;
	}
	if(b!=9)
		printf("输入有误\n");
	else//二分法查找
	{
		printf("输入你要找的数字\n");
		scanf("%d",&b);
		c=sizeof(arr)/sizeof(arr[0]);
		left=0;
		right=c-1;
		while(left<=right)
		{
			mid=(left+right)/2;
			if(arr[mid]>b)
			{
				right=mid-1;
			}
			else if(arr[mid]<b)
			{
				left=mid+1;
			}
			else
			{
				printf("找到了，是第%d个\n",mid+1);
				break;
			}
		}
		if(left>=right)
		{
			printf("未找到\n");
		}
	}
	return 0;
}





