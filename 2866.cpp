#include<stdio.h>
int main()
{
	void function(int x,int y,int (*p)(int a,int b));
	int add(int x,int y);
	int cha(int x,int y);
	int com(int x,int y);
	int a,b,c;
	printf("请输入两个整数\n");;
	scanf("%d%d",&a,&b);
	printf("请输入要计算的方式\n");
	printf("1代表求和，2代表相乘，3代表比较大小\n");
	scanf("%d",&c);
	if(c==1)
		function(a,b,add);
	if(c==2)
		function(a,b,cha);
	if(c==3)
		function(a,b,com);
	return 0;
}
void function(int x,int y,int (*p)(int a,int b))
{
	int c;
	c=(*p)(x,y);
	printf("%d\n",c);
}
int add(int x,int y)
{
	int c;
	c=x+y;
	return (c);
}
int cha(int x,int y)
{
	int c;
	c=x*y;
	return (c);
}
int com(int x,int y)
{
	if(x>y)
		return (x);
	else
		return (y);
}

