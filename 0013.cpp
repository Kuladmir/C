#include<stdio.h>
#include<math.h>
#define PI 3.14
int main()
{
	double a,b,c;
	int i;
	printf("计算圆柱1，计算圆锥2\n");
	scanf("%d",&i);
	if(i==1)
	{
		printf("请输入圆柱的高和底面半径:>");
		scanf("%lf%lf",&a,&b);
		printf("体积为%lf	",PI*a*b*b);
		printf("表面积为:底面%lf*2+侧面%lf = %lf\n",PI*b*b,PI*2*b*a,PI*b*b*2+PI*2*b*a);
	}
	else
	{
		printf("请输入圆锥的高和底面半径:>");
		scanf("%lf%lf",&a,&b);
		printf("体积为%lf	",PI*a*b*b/3);
		c=sqrt(a*a+b*b);
		printf("表面积为:底面%lf+侧面%lf = %lf\n",PI*b*b,PI*b*c,PI*b*b+PI*b*c);
	}
	return 0;
}

