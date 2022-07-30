#include<stdio.h>
int main()
{
	int i,j;
	double arr[10],c;
	for(i=0;i<10;i++)
		scanf("%lf",&arr[i]);
	for(i=0;i<9;i++)
		for(j=0;j<9-i;j++)
		{
			if(arr[j]<arr[j+1])
			{
				c=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=c;
			}
		}
	for(i=0;i<10;i++)
		printf("%.2lf ",arr[i]);
	return 0;
}

