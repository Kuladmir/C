#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define PI 3.14 //定义Π
#define D 0.042 //定义压强表内径 m
#define d 0.036 //定义真空表内径 m
//#define Rou 1000 //定义水的密度 kg/m^3
#define h 0.260 //定义高度差 m
#define g 9.81 //定义重力加速度 N/kg
int main()
{
	printf("			本程序仅可用来计算实验3测定数据\n");
	printf("这是本程序默认采取的常数：\n");
	printf("Π = %.2lf   压强表内径D = %.3lfm  真空表内径d = %.3lfm   高度差h = %.2lfm   重力加速度g = %.2lfN/kg\n", PI, D, d, h, g);
	printf("如需修改，请联系管理员\n");
	printf("注意：P出指压力表读数，P入指真空表读数，计算时要取负，注意零点读数\n");
	double a[30] = { 0 }, b[30] = { 0 }, c[30] = { 0 }, e[30] = { 0 }, f[30] = { 0 }, k[30] = { 0 }, l[30] = {0};
	int i, j,cho;
	double x[30] = { 0 }, y[30] = {0};
	double Rou;
	do
	{
		printf("请输入要计算的组数（1-30），输入0则退出\n");
		scanf("%d", &i);		
		printf("请输入实验温度下流体密度(kg/m3):>");
		scanf("%lf", &Rou);
		if (i != 0)
		{
			printf("你希望计算离心泵曲线数据，还是管路曲线数据，前者请输入1，后者请输入2\n");
			scanf("%d", &cho);
			if (cho == 2)
			{
				printf("请依次输入 %d 组 P出 的数据(MPa):>", i);
				for (j = 0; j < i; j++)
					scanf("%lf", &a[j]);//接收p出
				printf("请依次输入 %d 组 P入 的数据(MPa):>", i);
				for (j = 0; j < i; j++)
					scanf("%lf", &b[j]);//接收p入
				printf("请依次输入 %d 组的流量Q(m3/h):>", i);
				for (j = 0; j < i; j++)
					scanf("%lf", &c[j]);//接收流量Q
				for (j = 0; j < i; j++)
				{
					x[j] = (a[j] - b[j]) * 1000000 / (Rou * g);
					y[j] = ((16 * c[j] * c[j] / (PI * PI * D * D * D * D)) - (16 * c[j] * c[j] / (PI * PI * d * d * d * d))) / (2 * g * 3600 * 3600);
					e[j] = x[j] + y[j] + h;
					printf("第%d组 H 的结果：\n", j + 1);
					printf("结果为%lf	", e[j]);
					printf("其中，动压头为%lf，静压头为%lf\n", x[j], y[j]);
					printf("\n");
				}
			}
			else
			{
				printf("请依次输入 %d 组 P出 的数据(Mpa):>", i);
				for (j = 0; j < i; j++)
					scanf("%lf", &a[j]);//接收p出
				printf("请依次输入 %d 组 P入 的数据(Mpa):>", i);
				for (j = 0; j < i; j++)
					scanf("%lf", &b[j]);//接收p入
				printf("请依次输入 %d 组的流量Q(m3/h):>", i);
				for (j = 0; j < i; j++)
					scanf("%lf", &c[j]);//接收流量Q
				printf("请依次输入 %d 组功率读数(kw):>", i);
				for (j = 0; j < i; j++)
					scanf("%lf", &f[j]);//接收功率表读数
				printf("\n");
				for (j = 0; j < i; j++)
				{
					x[j] = (a[j] - b[j]) * 1000000 / (Rou * g);
					y[j] = ((16 * c[j] * c[j] / (PI * PI * D * D * D * D)) - (16 * c[j] * c[j] / (PI * PI * d * d * d * d))) / (2 * g * 3600 * 3600);
					e[j] = x[j] + y[j] + h;
					printf("第%d组 H 的结果：\n", j + 1);
					printf("结果为%lf	", e[j]);
					printf("其中，动压头为%lf，静压头为%lf\n", x[j], y[j]);
					printf("\n");
					k[j] = f[j] * 0.6;
					printf("第%d组的 N 的结果：\n", j + 1);
					printf("结果为%lf	\n", k[j]);
					printf("\n");
					l[j] = (e[j] * c[j] * Rou / (102 * 3600)) / k[j];
					printf("第%d组 η 的结果：\n", j + 1);
					printf("结果为%lf	\n", l[j]);
					printf("\n");
				}
			}
		}
		else
			printf("退出\n");
	} while (i);
	return 0;
}