#include<stdio.h>
int main()
{
	int a[10];
	int left,right,mid;
	int b,i;
	printf("������10����С���������;> ");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	printf("������Ҫ���ҵ�����;> ");
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
			printf("�ҵ��ˣ��ǵ�%d������\n",mid+1);
			break;
		}
	}
	if(left>right)
		printf("δ�ҵ�\n");
	return 0;
}


