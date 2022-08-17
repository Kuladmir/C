#include<stdio.h>
int main()
{
	int a=10;
	int b=20;
	int c=30;
	int e;
	int* d[3]={&a,&b,&c};
	for(e=0;e<3;e++)
		printf("%d ",*d[e]);
	return 0;
}

