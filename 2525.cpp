#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#define PI 3.14
#define d2 0.02
#define d3 0.019
#define L2 1.2
#define d0 0.017
#define C0 0.65
void manu()
{
	printf("		此程序仅用来计算实验4的相关数据\n");
	printf("这是本程序默认设定的一些参数，如需修改，请联系管理员\n");
	printf("Π = %.2lf   套管换热器内径d2 = %.2lfm   套管换热器长度L2 = %.2lfm\n", PI, d2, L2);
	printf("孔板流量计系数C0 = %.2lf   孔板流量计内径d0 = %.2lfm\n", C0, d0);
}
int main()
{
	manu();
	double aJ[10], aC[10], kb[10],bm[10],tJ[10],tC[10],V[10],W[10],Q[10],z[10];
	double U[10], Nu[10], Re[10], Pr[10];
	double S, A,rou[10], cp[10], u[10], n[10];
	int i, j, cho;
	do
	{
		printf("请输入要计算的普通管数据的组数（1-5）,如果希望退出，输入0。请输入:>");
		scanf("%d", &i);
		printf("请依次输入%d个进气温度:>", i);
		for (j = 0; j < i; j++)
			scanf("%lf", &aJ[j]);
		printf("请依次输入%d个出口温度:>", i);
		for (j = 0; j < i; j++)
			scanf("%lf", &aC[j]);
		printf("请以此输入%d个孔板压差(kpa):>", i);
		for (j = 0; j < i; j++)
			scanf("%lf", &kb[j]);
		printf("请以此输入%d个壁面温度:>", i);
		for (j = 0; j < i; j++)
			scanf("%lf", &bm[j]);
		S = PI * d2 * L2;//计算关内换热面积
		A = PI * d0 * d0 * 0.25;//计算流量计内表面积
		for (j = 0; j < i; j++)
		{
			tJ[j] = (aJ[j] + aC[j]) / 2;
			printf("平均温度依次为：%lf  ",tJ[j]);
		}
		printf("\n");
		printf("请查表依次输入线性估算后的空气的密度:>");
		for (j = 0; j < i; j++)
			scanf("%lf", &rou[j]);
		printf("请查表依次输入线性估算后的定压比热容:>");
		for (j = 0; j < i; j++)
			scanf("%lf", &cp[j]);
		printf("请查表依次输入线性估算后的粘度，不需要输入后面的比例:>");
		for (j = 0; j < i; j++)
			scanf("%lf", &u[j]);
		printf("请查表依次输入线性估算后的导热系数，不需要输入后面的比例:>");
		for (j = 0; j < i; j++)
			scanf("%lf", &n[j]);
		for (j = 0; j < i; j++)
		{
			tJ[j] = (aJ[j] + aC[j]) / 2;//计算平均温度
			tC[j] = (bm[j] - tJ[j]);//计算温差
			V[j] = C0 * 3600 * A * (sqrt(2 * kb[j] * 1000 / 1.029));//计算平均流量
			W[j] = V[j] * rou[j] / 3600;//计算质量流量
			Q[j] = W[j] * cp[j] * (aC[j] - aJ[j]);//计算传热速率
			z[j] = Q[j]*1000 / (S * tC[j]);//计算对流传热系数
			U[j] = V[j] / (A * 3600);//计算流速
			Nu[j] = z[j] * d2 / (n[j] * 0.01);//计算Nu
			Re[j] = U[j] * d2 * rou[j] * 100000 / u[j];//计算Re
			Pr[j] = cp[j] * u[j] * 0.001 / n[j];//计算Pr
		}
		printf("----------------------------------------------------------\n");
		printf("换热面积S=%lf   流量计内表面积A=%lf\n", S, A);
		printf("平均温度(℃)依次为：");
		for (j = 0; j < i; j++)
			printf("%lf  ", tJ[j]);
		printf("\n");
		printf("温差(℃)依次为：");
		for (j = 0; j < i; j++)
			printf("%lf  ", tC[j]);
		printf("\n");
		printf("平均流量(m3/h)依次为：");
		for (j = 0; j < i; j++)
			printf("%lf  ", V[j]);
		printf("\n");
		printf("质量流量(kg/s)依次为：");
		for (j = 0; j < i; j++)
			printf("%lf  ", W[j]);
		printf("\n");
		printf("传热速率(kw)依次为：");
		for (j = 0; j < i; j++)
			printf("%lf  ", Q[j]);
		printf("\n");
		printf("对流传热系数(W/(m2 * ℃))依次为：");
		for (j = 0; j < i; j++)
			printf("%lf  ", z[j]);
		printf("\n");
		printf("流速(m/s)依次为：");
		for (j = 0; j < i; j++)
			printf("%lf  ", U[j]);
		printf("\n");
		printf("Nu依次为：");
		for (j = 0; j < i; j++)
			printf("%lf  ", Nu[j]);
		printf("\n");
		printf("Re依次为：");
		for (j = 0; j < i; j++)
			printf("%lf  ", Re[j]);
		printf("\n");
		printf("Pr依次为：");
		for (j = 0; j < i; j++)
			printf("%lf  ", Pr[j]);
		printf("\n");
		printf("是否计算加强管相关数值？是输入1，否则输入0。请输入:>");
		scanf("%d", &cho);
		if (cho == 0)
			;
		else
		{
			printf("请输入要计算的普通管数据的组数（1-6）:>");
			scanf("%d", &i);
			printf("请依次输入%d个进气温度:>", i);
			for (j = 0; j < i; j++)
				scanf("%lf", &aJ[j]);
			printf("请依次输入%d个出口温度:>", i);
			for (j = 0; j < i; j++)
				scanf("%lf", &aC[j]);
			printf("请以此输入%d个孔板压差(kpa):>", i);
			for (j = 0; j < i; j++)
				scanf("%lf", &kb[j]);
			printf("请以此输入%d个壁面温度:>", i);
			for (j = 0; j < i; j++)
				scanf("%lf", &bm[j]);
			S = PI * d3 * L2;//计算管内换热面积
			A = PI * d0 * d0 * 0.25;//计算流量计内表面积
			for (j = 0; j < i; j++)
			{
				tJ[j] = (aJ[j] + aC[j]) / 2;
				printf("平均温度依次为： % lf  ",tJ[j]);
			}
			printf("请查表依次输入线性估算后的空气的密度:>");
			for (j = 0; j < i; j++)
				scanf("%lf", &rou[j]);
			printf("请查表依次输入线性估算后的定压比热容:>");
			for (j = 0; j < i; j++)
				scanf("%lf", &cp[j]);
			printf("请查表依次输入线性估算后的粘度，不需要输入后面的比例:>");
			for (j = 0; j < i; j++)
				scanf("%lf", &u[j]);
			printf("请查表依次输入线性估算后的导热系数，不需要输入后面的比例:>");
			for (j = 0; j < i; j++)
				scanf("%lf", &n[j]);
			for (j = 0; j < i; j++)
			{
				tJ[j] = (aJ[j] + aC[j]) / 2;//计算平均温度
				tC[j] = (bm[j] - tJ[j]);//计算温差
				V[j] = C0 * 3600 * A * (sqrt(2 * kb[j] * 1000 / 1.029));//计算平均流量
				W[j] = V[j] * rou[j] / 3600;//计算质量流量
				Q[j] = W[j] * cp[j] * (aC[j] - aJ[j]);//计算传热速率
				z[j] = Q[j] * 1000 / (S * tC[j]);//计算对流传热系数
				U[j] = V[j] / (A * 3600);//计算流速
				Nu[j] = z[j] * d3 / (n[j] * 0.01);//计算Nu
				Re[j] = U[j] * d3 * rou[j] * 100000 / u[j];//计算Re
				Pr[j] = cp[j] * u[j] * 0.001 / n[j];//计算Pr
			}
			printf("----------------------------------------------------------\n");
			printf("换热面积S=%lf   流量计内表面积A=%lf\n", S, A);
			printf("平均温度(℃)依次为：");
			for (j = 0; j < i; j++)
				printf("%lf  ", tJ[j]);
			printf("\n");
			printf("温差(℃)依次为：");
			for (j = 0; j < i; j++)
				printf("%lf  ", tC[j]);
			printf("\n");
			printf("平均流量(m3/h)依次为：");
			for (j = 0; j < i; j++)
				printf("%lf  ", V[j]);
			printf("\n");
			printf("质量流量(kg/s)依次为：");
			for (j = 0; j < i; j++)
				printf("%lf  ", W[j]);
			printf("\n");
			printf("传热速率(kw)依次为：");
			for (j = 0; j < i; j++)
				printf("%lf  ", Q[j]);
			printf("\n");
			printf("对流传热系数(W/(m2 * ℃))依次为：");
			for (j = 0; j < i; j++)
				printf("%lf  ", z[j]);
			printf("\n");
			printf("流速(m/s)依次为：");
			for (j = 0; j < i; j++)
				printf("%lf  ", U[j]);
			printf("\n");
			printf("Nu依次为：");
			for (j = 0; j < i; j++)
				printf("%lf  ", Nu[j]);
			printf("\n");
			printf("Re依次为：");
			for (j = 0; j < i; j++)
				printf("%lf  ", Re[j]);
			printf("\n");
			printf("Pr依次为：");
			for (j = 0; j < i; j++)
				printf("%lf  ", Pr[j]);
			printf("\n");
		}
	} while (i);
	return 0;
}