#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
double add(double x, double y)
{
	return x + y;
}
double sub(double x, double y)
{
	return x - y;
}
double mul(double x, double y)
{
	return x * y;
}
int main()
{
	int input;
	double ret,x,y;
	double(*p[4])(double,double) = {0,add,sub,mul};
	do
	{
		printf("1.加法 2.减法 3.乘法 0.退出\n");
		scanf("%d", &input);
		if (input >= 1 && input <= 3)
		{
			printf("请输入操作数\n");
			scanf("%lf%lf", &x, &y);
			ret = p[input](x, y);
			printf("%lf\n", ret);
		}
		else if (input == 0)
			printf("退出\n");
		else
			printf("输入错误\n");
	} while (input);
	return 0;
}