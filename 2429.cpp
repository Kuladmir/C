#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define g 9.81
#define PI 3.14
#define d 0.075
#define H 0.4
int main()
{
	double tc, tm, tv, Rou;
	double h[20];
	double Va[20], Vw, P[20], Pz[20], U[20];
	int i, j, cho;
	printf("			本程序仅用来计算实验六\n");
	printf("这是本实验使用的常数：\n");
	printf("PI=3.14，g=9.81 N/kg，填料层高度H=0.4 m，填料塔内径d=0.075 m\n");
	printf("可近似将V看成空气流量Vh\n");
	printf("是否计算干料？是请输入1，否则输入0:>");
	scanf("%d", &cho);
	if (cho == 1)
	{
		printf("=============================\n");
		printf("当前计算干料\n");
		printf("=============================\n");
		printf("请输入初始温度和结束温度:>");
		scanf("%Lf%lf", &tc, &tm);
		tv = (tc + tm) / 2;
		printf("这是定性温度 %.2lf ，请计算对应温度下的水的密度。\n", tv);
		printf("请输入要计算的组数:>");
		scanf("%d", &i);
		printf("请输入 %d 组高度差(cm):>", i);
		for (j = 0; j < i; j++)
			scanf("%lf", &h[j]);
		printf("请输入 %d 组空气流量(m3/h):>", i);
		for (j = 0; j < i; j++)
			scanf("%lf", &Va[j]);
		printf("请输入定性温度下水的密度(kg/m3):>");
		scanf("%lf", &Rou);
		for (j = 0; j < i; j++)
		{
			P[j] = Rou * g * h[j] * 0.01;
			Pz[j] = P[j] / H;
			U[j] = (4 * Va[j]) / (3600 * PI * d * d);
		}
		printf("%d 组ΔP(Pa)数据:>", i);
		for (j = 0; j < i; j++)
			printf("%lf  ", P[j]);
		printf("\n");
		printf("%d 组ΔP/Z(Pa/m)数据:>", i);
		for (j = 0; j < i; j++)
			printf("%lf  ", Pz[j]);
		printf("\n");
		printf("%d 组u(m/s)数据:>", i);
		for (j = 0; j < i; j++)
			printf("%lf  ", U[j]);
		printf("\n");
	}
	printf("是否计算水喷淋，是请输入1，否则输入0:>");
	scanf("%d", &cho);
	if (cho == 1)
	{
		printf("=============================\n");
		printf("当前计算水喷淋\n");
		printf("=============================\n");
		printf("请输入当前水喷淋流量(L/h)，输入0则为退出:>");
		scanf("%lf", &Vw);
		while (Vw)
		{
			printf("=============================\n");
			printf("当前水喷淋流量为 %lf \n", Vw);
			printf("请输入初始温度和结束温度:>");
			scanf("%Lf%lf", &tc, &tm);
			tv = (tc + tm) / 2;
			printf("这是定性温度 %.2lf ，请计算对应温度下的水的密度。\n", tv);
			printf("请输入要计算的组数:>");
			scanf("%d", &i);
			printf("请输入 %d 组高度差(cm):>", i);
			for (j = 0; j < i; j++)
				scanf("%lf", &h[j]);
			printf("请输入 %d 组空气流量(m3/h):>", i);
			for (j = 0; j < i; j++)
				scanf("%lf", &Va[j]);
			printf("请输入定性温度下水的密度(kg/m3):>");
			scanf("%lf", &Rou);
			for (j = 0; j < i; j++)
			{
				P[j] = Rou * g * h[j] * 0.01;
				Pz[j] = P[j] / H;
				U[j] = (4 * Va[j]) / (3600 * PI * d * d);
			}
			printf("%d 组ΔP(Pa)数据:>", i);
			for (j = 0; j < i; j++)
				printf("%lf  ", P[j]);
			printf("\n");
			printf("%d 组ΔP/Z(Pa/m)数据:>", i);
			for (j = 0; j < i; j++)
				printf("%lf  ", Pz[j]);
			printf("\n");
			printf("%d 组u(m/s)数据:>", i);
			for (j = 0; j < i; j++)
				printf("%lf  ", U[j]);
			printf("\n");
			printf("请输入当前水喷淋流量(L/h)，输入0则为退出:>");
			scanf("%lf", &Vw);
		}
	}
	return 0;
}