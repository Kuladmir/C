#include<stdio.h>//比较两个数字大小
int main()
{
	int a,b,c;
	printf("please input a,b:\n");
	scanf("%d,%d",&a,&b);
    c=a;
	if(c<b)
		c=b;
	printf("max=%d\n",c);
	return 0;
}
