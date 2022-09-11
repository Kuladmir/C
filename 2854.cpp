#include<stdio.h>
int main()
{
	int a[10];
	int i;
	int *p;
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	p=&a[9];
	for(i=0;i<10;i++)
		printf("%d ",*(p-i));
	printf("\n");
	return 0;
}

