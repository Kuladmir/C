#include<stdio.h>
int main()
{
	int a[10];
	int left,right,mid;
	int b,i;
	printf("请输入10个从小到大的数字;> ");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	printf("请输入要查找的数字;> ");
	scanf("%d",&b);
	left=0;
	right=sizeof(a)/sizeof(a[0])-1;
	while(left<=right)
	{
		mid=(left+right)/2;
		if(a[mid]>b)
			right=mid-1;
		else if(a[mid]<b)
			left=mid+1;
		else
		{
			printf("找到了，是第%d个数字\n",mid+1);
			break;
		}
	}
	if(left>right)
		printf("未找到\n");
	return 0;
}


