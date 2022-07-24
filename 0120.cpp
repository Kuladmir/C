#include<stdio.h>
int main()
{
	int a,b,c,d,e,f;
	printf("输入三个数，判断是否为直角三角形数\n");
	scanf("%d%d%d",&a,&b,&c);
	d=a*a;
	e=b*b;
	f=c*c;
	if(d==b*b+c*c || e==a*a+c*c || f==a*a+b*b)
		printf("这三个数是直角三角形数\n");
	else
		printf("这三个数不是\n");
	return 0;
}