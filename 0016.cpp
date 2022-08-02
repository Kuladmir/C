#include<stdio.h>
int search(int a,int b[],int sz)
{
	int left,right,mid;
	right=sz-1;
	left=0;
	while(left<=right)
	{
		mid=(left+right)/2;
		if(*(b+mid)<a)
			left=mid+1;
		else if(*(b+mid)>a)
			right=mid-1;
		else
			return mid;
	}
	if(left>right)
		return -1;
}
int main()
{
	int a[10];
	int i,b,c;
	int sz=sizeof(a)/sizeof(a[0]);
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	printf("请输入要找的数字:>");
	scanf("%d",&b);
	c=search(b,a,sz);
	if(c==-1)
		printf("未找到\n");
	else
		printf("找到了，是第%d个数字\n",c+1);
	return 0;
}

