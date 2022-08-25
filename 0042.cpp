#include<stdio.h>
void reverse(int a[])
{
	int left,right,t;
	left=0;
	right=9;
	while(left<right)
	{
		t=a[left];
		a[left]=a[right];
		a[right]=t;
		left++;
		right--;
	}
	for(left=0;left<10;left++)
		printf("%d ",a[left]);
		printf("\n");
}
int main()
{
	int a[10];
	int i;
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	reverse(a);
	return 0;
}
