#include<stdio.h>
int main()
{
	void function(int x,int y,int (*p)(int a,int b));
	int add(int x,int y);
	int cha(int x,int y);
	int com(int x,int y);
	int a,b,c;
	printf("��������������\n");;
	scanf("%d%d",&a,&b);
	printf("������Ҫ����ķ�ʽ\n");
	printf("1������ͣ�2������ˣ�3����Ƚϴ�С\n");
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

