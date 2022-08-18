#include<stdio.h>//函数实现有序数组找数字
void search(int a[],int b)
{
	int left,right,mid,sea;
	left=0;
	right=b-1;
	scanf("%d",&sea);
	while(left<=right)
	{
		mid=(left+right)/2;
		if(sea>a[mid])
			left=mid+1;
		else if(sea<a[mid])
			right=mid-1;
		else
		{
			printf("找到了，是%d个数字\n",mid+1);
			break;
		}
	}
	if(left>right)
		printf("未找到\n");
}

int main()
{
	int a[10];
	int i,sz;
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	sz=sizeof(a)/sizeof(a[0]);
	search(a,sz);
	return 0;
}
