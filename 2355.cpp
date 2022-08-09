#include<stdio.h>
int main()
{
	int a,b,c;
	printf("please input a,b:\n");
	scanf("%d,%d",&a,&b);
	c=a;
	if(c>b)
	c=b;
	printf("min=%d\n",c);
	return 0;
}
