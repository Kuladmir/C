#include<stdio.h>
#define PI 3.14
int main()
{
	double a,b,c;
	int d;
	do
	{	
		printf("1计算圆，2计算球，0退出\n");
	    scanf("%d",&d);
		switch(d)
		{
		case 1:
			{
				printf("请输入半径\n");
				scanf("%lf",&c);
				b=2*PI*c;
				a=PI*c*c;
				printf("该圆的面积为%lf,周长为%lf\n",a,b);
			}break;
		case 2:
			{
				printf("请输入球径\n");
				scanf("%lf",&c);
				a=4/3*PI*c*c*c;
				b=4*PI*c*c;
				printf("该球的表面积为%lf,体积为%lf\n",b,a);
			}break;
		case 0:
			break;
		default:
			printf("输入错误\n");
			break;
		}
	}while(d);
	return 0;
}
