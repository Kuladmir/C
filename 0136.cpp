#include<stdio.h>//√∞≈›∑®≈≈–Ú
int main()
{
	int i,j,arr[10];
	int a,b;
	for(i=0;i<10;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<9;i++)
		for(j=0;j<9-i;j++)
		{
			if(arr[j]<arr[j+1])
			{
				a=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=a;
			}
		}
	for(i=0;i<10;i++)
		printf("%d ",arr[i]);
	return 0;
}


