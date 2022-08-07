#include<stdio.h>
void swap(int *a,int *b)
{
	int *p;
	p=a;
	a=b;
	b=p;
	printf("a=%d  b=%d\n",*a,*b);
}

int  main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("a=%d  b=%d\n",a,b);
	swap(&a,&b);
	return 0;
}
