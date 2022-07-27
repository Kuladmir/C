#include<stdio.h>
int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int i,b;
	scanf("%d",&b);
	for(i=0;i<10;i++)
	{
		if(b==arr[i])
		{
			printf("Find the number(%d)\n",i);
			break;
		}
	}
	if(b==10)
		printf("Can not find the number\n");
	return 0;
}
