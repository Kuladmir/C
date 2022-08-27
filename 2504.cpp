#include<stdio.h>
int main()
{
	int max(int x,int y);
	int min(int x,int y,int );
	int a,b,c,d;
	scanf("%d%d",&a,&b);
	c=max(a,b);
	d=min(a,b,c);
	printf("%d %d",c,d);
	return 0;
}
int max(int x,int y)
{
	int z,p;
	if(y>x)
	{
		p=x;
		x=y;
		y=p;
	}
while((z=x%y)!=0)
{
	x=y;
	y=z;
}
return(y);
}
int min(int x,int y,int c)
{
	return(x*y/c);
}

