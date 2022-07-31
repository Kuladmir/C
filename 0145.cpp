#include<stdio.h>
int Max(int x,int y)
{
	return (x>y?x:y);
}
int main()
{
	int a,b,c;
	scanf("%d%d",&a,&b);
	c=Max(a,b);
	printf("%d\n",c);
	return 0;
}

