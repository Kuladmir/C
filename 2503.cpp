#include<stdio.h>
int main()
{
    void app(int x[],int y);
	int a[10],i;
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	app(a,10);
	for(i=0;i<10;i++)
		printf("%d ",a[i]);
	printf("\n");
	return 0;
}
void app(int x[],int y)
{
	int i,j,k,t;
		for(i=0;i<y-1;i++)
		{
			k=i;
			for(j=i+1;j<y;j++)
				if(x[j]<x[k])
				k=j;
				t=x[k];
				x[k]=x[i];
				x[i]=t;
		}
}
