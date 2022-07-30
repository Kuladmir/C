#include<stdio.h>
int main()
{
	int i,left,right,mid,arr[10],ser;
	for(i=0;i<10;i++)
		scanf("%d",&arr[i]);
	left=0;
	right=sizeof(arr)/sizeof(arr[0])-1;
	scanf("%d",&ser);
	while(left<=right)
	{
		mid=(left+right)/2;
		if(arr[mid]>ser)
			right=mid-1;
		else if(arr[mid]<ser)
			left=mid+1;
		else
		{
			printf("Find\n");
			break;
		}
	}
	if(left>right)
		printf("Can not find\n");
	return 0;
}
