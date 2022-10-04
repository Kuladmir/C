#include<stdio.h>
int main()
{
	double a=100,b=100;
	int i,j;
	printf("小球从100m落下，每次弹起的高度为之前下落的一半\n");
	printf("通过输入弹起的次数，可以求出对应的弹起高度和运动总距离\n");
	scanf("%d",&j);
	if(j==1)
	{
		a=a/2;
		b=b+a;
	}
	else
	{	
		a=50;
		b=150;
	for(i=1;i<j;i++)
	{
        b=b+a;
		a=a/2;
		b=b+a;
	}
	}
	printf("弹起的高度%lf,运动总距离%lf\n",a,b);
	return 0;
}


